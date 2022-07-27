from re import M


for _ in range(int(input())):
    n,m,k = map(int,input().split())
    columns_1=m
    columns_2=n
    numbers = [int(i) for i in input().split()]
    odd1=True
    odd2=True
    for i in range(k):
        number= numbers[i]
        try1 = number//n
        if try1>2:
            odd1=False
            columns_1-=try1
        elif try1==2:
            columns_1-=try1
        try2= number//m
        if try2>2:
            odd2=False
            columns_2-=try2
        elif try2==2:
            columns_2-=try2
    if (columns_1>0 or (m%2!=0 and odd1)) and (columns_2>0 or (n%2!=0 and odd2)):
        print("No")
    else:
        print("Yes")

