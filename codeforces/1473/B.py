def gcd(a,b):
    if a == 0:
        return b
    return gcd(b % a, a)
 
def lcm(a,b):
    return (a*b / gcd(a,b))

q = int(input())
while q:
	s = input()
	t = input()
	lenS = len(s)
	lenT = len(t)

	lcm_ab = int(lcm(lenS, lenT))
	s = s * int(lcm_ab/lenS)
	t = t * int(lcm_ab/lenT)

	if s != t:
		print(-1)
	else:
		print(s)
	q-=1