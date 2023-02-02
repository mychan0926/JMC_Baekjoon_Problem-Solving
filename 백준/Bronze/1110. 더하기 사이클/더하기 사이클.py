b=input()
count=0
if len(b)==1:
      b=b+"0"
first=b
while True:
      count+=1
      c=str(int(b[0])+int(b[1]))
      b=b[1]+c[-1]
      if str(b)==first:
            break
print(count)
