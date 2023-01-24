time=int(input())
first=time//300
second=(time%300)//60
third=(time%300)%60//10
if 300*first+60*second+10*third==time:
    print(first,second,third)
else:
    print("-1")

