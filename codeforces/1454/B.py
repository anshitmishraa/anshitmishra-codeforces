t=int(input())
while(t):
    t-=1
    n=int(input())
    countValue,indexAtX = [0]*(n+1), [0]*(n+1)
    
    x = list(map(int, input().split()))
    z = 0
    for y in x:
        countValue[y]+=1
        indexAtX[y]=z+1
        z+=1
        
    answer = -1
    
    for i in range(n+1):
        if countValue[i]==1:
            answer = indexAtX[i]
            break
    print(answer)