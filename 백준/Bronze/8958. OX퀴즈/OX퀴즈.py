line=int(input()) #값 받기
count=0 #연속 정답 값
result=0 #점숫값
for i in range(line): #첫줄 숫자만큼 반복
   result=0 #점숫값 0으로 초기화
   problem=list(input()) #i+1번째줄 값 받아오기
   for j in problem: #줄 요소 만큼 반복
      if j=='O': #O이면 연속 정답 값 1올리기
         count+=1
      else:
         count=0
      result+=int(count) #값 저장
   print(result) #프린트
   count=0 #연속된 카운트 값 초기화