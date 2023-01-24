import copy
s=[]
for i in range(9):
    a=int(input())
    s.append(a)
b=copy.deepcopy(s)
s.sort()
print(s[-1])
print(b.index(s[-1])+1)
