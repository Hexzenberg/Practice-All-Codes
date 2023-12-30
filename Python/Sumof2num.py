a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
print("The sum of the two numbers:",a+b)
print('This works?')
c,d,e=[int(x) for x in input('Enter the three numbers now:').split()]
print('The sum of the two numbers is:',c+d+e)
x,y=(int(input()) for _ in range(2))
print(x+y)