a,b=map(int,input().split())
c=list(map(int,input().split()))
all1=0
time=0
end=0
c.sort(reverse=True)
for i in range(b):
      c.append(-1)

while True:
   if end==0:
      for i in range(b):
         
         if c[i]!=-1:
            c[i]-=1
      dsd=0
      if end==0:
         time+=1
      for i in range(b):
         if c[i-dsd]==0:
            del c[i-dsd]
            dsd+=1
         if c[0]==-1:
            end+=1
     
   else:
      break
print(time)
