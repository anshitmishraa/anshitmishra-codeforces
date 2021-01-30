t = int(input())
while t>0:
	t-=1	
	n,k=map(int,input().split())
	if n == 1:
		print(k)
	elif n==k:
		print(1)
	elif n<k:
		a = int(k/n)
		b = k%n
		if b!= 0: 
			a+=1
		print(a)
	else:
		c = n//k
		d = n%k
		if(d!=0):
			c+=1
		k=k*c
		a = k//n
		b = k%n
		if b!= 0: 
			a+=1
		print(a)
