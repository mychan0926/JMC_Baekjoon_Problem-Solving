e=input()
al=0
for i in e:
  i=ord(i)
  num=0
  if ord('A')<=i and ord('D')>i:
    num=2
  elif ord('D')<=i and ord('G')>i:
    num=3
  elif ord('G')<=i and ord('J')>i:
    num=4
  elif ord('J')<=i and ord('M')>i:
    num=5
  elif ord('M')<=i and ord('P')>i:
    num=6
  elif ord('P')<=i and ord('T')>i:
    num=7
  elif ord('T')<=i and ord('W')>i:
    num=8
  elif ord('W')<=i and ord('Z')+1>i:
    num=9
  al+=num+1
print(al)