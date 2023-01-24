a=int(input())
i=1
a-=1
if a==0:
  pass
elif a%6!=0 and a//6==0:
  i+=1
else:
  while True:
    i+=1
    a=a-(i-1)*6
    if a//(i*6)==0:
      if a%(i*6)!=0:
        i+=1
      break
print(i) 
