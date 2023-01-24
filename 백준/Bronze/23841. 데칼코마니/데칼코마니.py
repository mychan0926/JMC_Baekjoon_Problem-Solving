a,b=map(int,input().split())
s=[]
for i in range(a):
   s.append([])
for i in range(a):
   d=input()
   for j in range(b):
      s[i].append(d[j])
for i in range(a):
   for j in range(b):
      if b%2==0:
         if s[i][j]!=".":
            s[i][-(j+1)]=s[i][j]
for i in range(a):
   for j in range(b):
      print(s[i][j],end="")
   print()
      
