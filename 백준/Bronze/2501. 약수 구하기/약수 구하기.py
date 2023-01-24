num, count=map(int,input().split())
s=[]
for i in range(1,num+1):
   if num%i==0:
      s.append(i)
try:
   print(s[count-1])
except:
   print(0)
