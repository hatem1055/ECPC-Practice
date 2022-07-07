#https://codeforces.com/contest/1692/problem/A
a,b,c,d = map(int, input().split())
y = [1 for i in [b,c,d] if i>a ]
print(len(y))
