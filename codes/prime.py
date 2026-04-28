num=int(input("Enter the number\n"))
count=0
i=1
while(i<=num):
     if(num%i==0):
        count+=1 
     i=i+1
    
if(count==2): 
        print("number is prime")
else:
        print("number is not prime")    