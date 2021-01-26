n = int(input())

A = list(map(int, input().split()))

ans = 0 

for l in range(n):
	minv = A[l]
	for r in range(l,n):
		minv = min(minv,A[r])
		ans = max(ans, minv*(r-l+1))
print(ans)