a,b,c=map(int,input().split())
d=c-a
if (d//(a-b)==0):
   if d%(a-b)!=0:
      print(2)
   else:
      print(d//(a-b)+1)
else:
   if d%(a-b)!=0:
      print(d//(a-b)+2)
   else:
      print(d//(a-b)+1)
      