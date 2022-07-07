#https://codeforces.com/contest/1624/problem/B
t = int(input())
for j in range(t):
    a,b,c = map(int, input().split())
    if (((2*b-c) != 0) or (a != b)):
        if ((((2*b-c)%a == 0) and (2*b-c>0)) or ((0.5*(c+a))%b == 0) or (((2*b-a)%c == 0) and (2*b-a>0))):
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
