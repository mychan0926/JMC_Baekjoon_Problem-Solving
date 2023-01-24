count=0
for i in range(1,9):
  a=input()
  for j in range(4):
    if i%2==0:
      if a[j*2+1]=='F':
        count+=1
    else:
      if a[j*2]=='F':
        count+=1
print(count)