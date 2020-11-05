# Problem Link : https://www.codechef.com/JAN20B/problems/DYNAMO

u = int(input())
for _ in range(u):
    n = int(input())
    a = int(input())
    s = a + 2*(10**n)
    print(s)
    b = int(input())
    c = (10**n)-b
    print(c)
    d = int(input())
    e = (10**n)-d
    print(e)
    final = int(input())
    if final == -1:
        exit()