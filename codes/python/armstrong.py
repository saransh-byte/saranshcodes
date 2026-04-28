n=int(input("Enter a number\n"))
sum=0
org=n
while n>0:

    sum=sum+(n%10)*(n%10)*(n%10)
    n=n // 10
if org==sum:
    print("the number",sum ,"is armstrong")
        
else:
    print("the number",sum,"is not armstrong")        
