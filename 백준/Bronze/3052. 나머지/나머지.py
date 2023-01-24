s=[]
for i in range (10):
    s.append(int(input())%42)
print(len(list(set(s))))
