#https://codeforces.com/contest/1703/problem/B
t = int(input())
for k in range(t):
    n = int(input())
    s = input()
    b = 0
    while len(s) > 0:
        for i in range(len(s)):
            z = s.count(s[i])
            if z >= 1:
                b = b + z + 1
                s = s.replace(s[i],"")
                break
    print(b)
