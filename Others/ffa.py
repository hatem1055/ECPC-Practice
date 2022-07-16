t = int(input())
for u in range(t):
    a,b,c,x,y = map(int,input().split())
    if a>=x :
        if b>=y or b+c >= y:
            print("YES")
        else:
            print("NO")
    elif a<x :
        if a+c >= x and a+b+c-x >=y:
            print("YES")
        else:
            print("NO")
