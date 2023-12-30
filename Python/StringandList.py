A="My NaMe is Nikhil."
print(A[1:4:2])
print(chr(97))
print(ord('A'))
print(A[-1:-10:-1])
print(A.find('e'))
print(A.isdigit())
print(A.capitalize())
print(A.isalpha())
print(A.upper())
print(len(A))
print(A.title())
U=L=0
for i in range(len(A)):
    if(A[i].islower()):L+=1
    else: U+=1
print(U,L)
S=list("Attack on Titan is a masterpiece")
print(S)
S=list(input('Enter the elements of the string:'))
print(S)
print(S.index('a'))