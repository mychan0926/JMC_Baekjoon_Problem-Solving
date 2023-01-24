line=int(input()) #값 받기
s=[]
all1=0
count=0
for i in range(line):
   count=0
   all1=0
   s=list(map(int,input().split()))
   root=int(s[0])
   del s[0]
   for j in range(root):
      all1+=int(s[j])
   mean=all1/root
   for j in range(root):
      if mean<int(s[j]):
         count+=1
         
   print("%.3f%%"%(count/root*100))
   