n = int(input())
sum = 1
if n == 3:
    print(1)
else:
    for i in range(1,n-2):
        sum+=(2*i+1)
    print(sum)
