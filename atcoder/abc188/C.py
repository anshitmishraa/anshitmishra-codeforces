n = int(input())

a = list(map(int, input().split()))

half = 1 << (n-1)
left_wins = 0

for i in range(half):
  if a[i]>a[left_wins]:
    left_wins = i

right_wins = half

for i in range(half,1<<n):
  if a[i]>a[right_wins]:
    right_wins = i

if a[left_wins] > a[right_wins]:
    print(right_wins + 1)
else:
    print(left_wins + 1)