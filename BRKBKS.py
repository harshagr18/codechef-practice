# Problem Link : https://www.codechef.com/JAN20B/problems/BRKBKS
u = int(input())
for _ in range(u):
    s,w1,w2,w3 = list(map(int, input().split()))
    if w1+w2+w3 <= s:
        print(1)
    elif w1+w2 <= s or w2+w3 <= s:
        print(2)
    else:
        print(3)