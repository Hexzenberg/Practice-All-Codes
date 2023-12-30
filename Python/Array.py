n=int(input())
a=[input() for _ in range(n)]
for i in range(n):
    print(a[i])
b=[[int(input()) for i in range(n)] for j in range(n)]
print('\n')
for i in range(n):
    for j in range(n):
        print(b[i][j],end=" ")
    print('\n')
