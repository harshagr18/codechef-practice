# Problem Link : https://www.codechef.com/NOV20B/problems/ADADISH

u = int(input())
for _ in range(u):
    n = int(input())
    mins = list(map(int, input().split(" ")))
    mins.sort(reverse=True)
    if n==1:
        print(mins[0])
    
    elif n == 2:
        print(mins[0])
    
    elif n == 3:
        print(max(mins[2]+mins[1],mins[0]))
    
    else:
        first = mins[0]
        second = mins[1]
        for i in mins[2:]:
            if first < second:
                first = first + i
            else:
                second = second + i
        print(max(first,second))