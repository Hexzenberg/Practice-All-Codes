#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 200
#define MAX_NAMES 300

// Function to compare two names for qsort
int compareNames(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    FILE *file;
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    char *sortedNames[MAX_NAMES];
    char line[MAX_NAME_LENGTH];
    int count = 0;

    // Open the file for reading
    file = fopen("/Users/nikhilkumarchaudhary/The One/anime.txt", "r");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Read names from the file
    while (fgets(line, sizeof(line), file) != NULL && count < MAX_NAMES)
    {
        line[strcspn(line, "\n")] = '\0'; // Remove newline character
        strcpy(names[count], line);
        sortedNames[count] = names[count];
        count++;
    }

    // Close the file
    fclose(file);

    // Sort the names
    qsort(sortedNames, count, sizeof(char *), compareNames);

    // Open the file for writing (this will overwrite the existing file)
    file = fopen("shows.txt", "w");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    // Write the sorted names to the file
    for (int i = 0; i < count; i++)
    {
        fprintf(file, "%s\n", sortedNames[i]);
    }

    // Close the file
    fclose(file);

    printf("Names have been sorted and written to the file.\n");

    return 0;
}
