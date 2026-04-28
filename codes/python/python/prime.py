n=int(input("enter a number\n"))
count=0
i=1
while n>=i:
    if n%i==0:
        count=count+1
    i=i+1
if count==2:
    print("the number",n, "is prime")
else:
    print("the number",n, "is not prime")           