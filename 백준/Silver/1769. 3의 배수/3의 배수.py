a=input()
problem=[]
b=0
for i in a:
    problem.append(i)
count=0
b=int(a)
while True:
    if b<10:
        break
    b=0
    for i in problem:
        b+=int(i)
    count+=1
    problem=[]
    for j in str(b):
        problem.append(j)
    
print(count)
if b%3==0 and a!=0 :
    print("YES")
else:
    print("NO")
