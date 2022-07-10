# Codeforces Beta Round #47
# Mahmoud Adel


numbers = [int(num) for num in input().split(" ", 1)]
m = numbers[0]
n = numbers[1]
count = 0

if m%2==0 :
    count = n*m/2
else:
    count = n*(m-1)/2+n/2

print(int(count))
