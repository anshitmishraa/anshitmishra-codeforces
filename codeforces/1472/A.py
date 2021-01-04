t = int(input())
while t:
	t-=1
	w,h,n = map(int, input().split())
	possible = 1

	while not w%2:
		w /= 2
		possible *= 2
	while not h%2:
		h /= 2
		possible *= 2

	print("YES") if possible >= n else print("NO")  