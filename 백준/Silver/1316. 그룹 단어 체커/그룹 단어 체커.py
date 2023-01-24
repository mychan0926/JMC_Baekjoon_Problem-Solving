a=int(input())
count=0
for i in range(a):
  b=input()
  check=[]
  end=0
  for j in range(len(b)):
    
    if j!=len(b)-1 and b[j]==b[j+1]  :
      ''


    else:

      ind=check.count(b[j])

      if ind==0:
        check.append(b[j])
      else:
        end+=1
  if end==0:
    count+=1
print(count)
