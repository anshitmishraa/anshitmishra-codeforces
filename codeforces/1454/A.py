t = int(input())
while(t):
    t-=1
    n = int(input())
    for i in range(n):
        print((i+1)%n+1,end=" ")
    print()
