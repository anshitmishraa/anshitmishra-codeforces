N = int(input())

S = [input() for _ in range(N)]

def rec(index):
	if index > 0:
		if S[index - 1] == "OR":
			return 2 ** index + rec(index - 1)
		else:
			return rec(index - 1)
	else:
		return 1

print(rec(N))