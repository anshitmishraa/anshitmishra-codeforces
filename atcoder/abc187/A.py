a, b = map(int, input().split())

digitsA = [int(x) for x in str(a)] 
digitsB = [int(x) for x in str(b)]

print(max(sum(digitsA), sum(digitsB)))