d=int(input())
for i in range(d):
   y,x,n=map(int,input().split())
   호=''
   층=0
   if n%y!=0:#최상층 판단 
      층=n%y
   else:
      층=y
   if n%y>0:
      호=str(n//y+1)
   else:
      호=str(n//y)
   if len(호)==1:
      호='0'+호
   print(str(층)+호)
