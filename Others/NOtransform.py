#https://codeforces.com/contest/1674/problem/A
t = int(input())
for k in range(t):
    x,y = map(int,input().split())
    if y%x==0:
        for i in range(1,1001):
            a=i
            if (y**(1/a))%(x**(1/a))==0:
                print(a,int((y/x)**(1/a)))
                break
    else:
        print(0,0)