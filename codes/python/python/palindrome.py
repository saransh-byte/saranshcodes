n=int(input("Enter a number you want to check\n"))
rev=0
org=n
while n>0:
    rev=(rev*10)+(n%10)
    n=n//10

if org==rev:
    print("the number ",rev,"is palindrome")
else:
    print("the number ",rev,"is not palindrome")    
