t = int(input())
while t:
	t-=1
	n = int(input())

	a = [int(i) for i in input().split()]

	a.sort()

	aliceCandy = 0
	bobCandy = 0

	for i in a[::-1]:
		if aliceCandy<=bobCandy:
			aliceCandy += i
		else:
			bobCandy += i

	if aliceCandy == bobCandy:
		print("YES")
	else:
		print("NO")