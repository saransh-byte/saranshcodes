import numpy as saransh
a=saransh.array([1,2,4])
print(a)
#2d array
b=saransh.array([[1,2,4],[2,4,5]])
print(b)
#tuple array
c=saransh.array((1,2,4,5,6,6,7,8,7))
print(c)
#zeros
d=saransh.zeros([4,1])
print(d)
#ones
f=saransh.ones([2,3,2])
print(f)
#arange
h=saransh.arange(1,10)
print(h)
#converting multidiamentional into 1d
k=saransh.array([[1,2,3],[4,5,6]])
l=k.flatten()
print(l)
#mean
z=saransh.array([1,2,3])
print((saransh.mean(z)))
#sum
m=saransh.sum([2,2,3,4])
print(m)
#mean
n=saransh.mean([1,2,3])
print(n)
