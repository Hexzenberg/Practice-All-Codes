import math
t=int(input())
while(t):
    a,b=int(input()),int(input())
    print(math.sqrt(abs((a*a)-(b*b)))," ",math.sqrt(abs((a*a)+(b*b))))
    t=t-1