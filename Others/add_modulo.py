import math

def last_digit(num):
    return int(repr(num)[-1])

groups = [3,1,1,2,1,3,2,2,1,2]

for _ in range(int(input())):
    n=int(input())
    numbers=[int(i) for i in input().split()]
    first_number=numbers[0]
    last_digit_first=last_digit(first_number)
    without_last=first_number-last_digit_first
    answer="YES"

    if groups[last_digit_first]==1:
        for i in range(1,n):
            num=numbers[i]
            last=last_digit(num)
            if groups[last]==1 and ((num-last-without_last)/10)%2==0:
                continue
            elif groups[last]==2 and ((num-last-without_last)/10)%2==1:
                continue
            else:
                answer="NO"
                break
    elif groups[last_digit_first]==2:
        for i in range(1,n):
            num=numbers[i]
            last=last_digit(num)
            if groups[last]==1 and ((num-last-without_last)/10)%2==1:
                continue
            elif groups[last]==2 and ((num-last-without_last)/10)%2==0:
                continue
            else:
                answer="NO"
                
                break
    else:
        lastt=math.ceil(first_number/10)*10
        for i in range(1,n):
            num=numbers[i]
            last=last_digit(num)
            if groups[last]==3:
                if math.ceil(num/10)*10 != lastt:
                    answer="NO"
                    break

            else:
                answer="NO"
                break
    print(answer)



