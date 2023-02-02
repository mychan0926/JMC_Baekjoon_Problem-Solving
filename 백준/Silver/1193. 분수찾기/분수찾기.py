a=int(input())
i=0
j=0
while True:
   i+=1
   j+=i
   if a<=j:
      break
if i%2==0:
   print(str(i-(j-a))+"/"+str((j-a)+1))
else:
   print(str((j-a)+1)+"/"+str(i-(j-a)))
