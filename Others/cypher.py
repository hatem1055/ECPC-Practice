#https://codeforces.com/contest/1703/problem/C
t = int(input())
for k in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    for i in range(n):
        b = []
        b = input().split()
        for j in range(int(b[0])):
            if b[1][j] == "D":
                if a[i] == 9:
                    a[i] = 0
                else:
                    a[i]=a[i]+1
            elif b[1][j] == "U":
                if a[i] == 0:
                    a[i] = 9
                else:
                    a[i]=a[i]-1

    print(str(a)[1:-1].replace(","," "))
