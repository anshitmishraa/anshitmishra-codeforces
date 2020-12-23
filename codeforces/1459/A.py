t = int(input())
while t:
	t-=1
	n = int(input())
	r = input()
	b = input()
	rc,bc = 0, 0
	for i in range(n):
		if r[i] > b[i]:
			rc += 1
		elif r[i] < b[i]:
			bc += 1
	if rc>bc:
		print("RED")
	elif bc>rc:
		print("BLUE")
	else:
		print("EQUAL") 
