n=int(input("Enter the number you want to reverse of\n"))
S=0
while(n>0):
    S=(S*10)+(n%10)
    n=n//10
if(n==0):    
    print("the reverse number is ",S)
else:
    print("the number is not")    
 