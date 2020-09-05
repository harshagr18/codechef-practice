# Problem Link : https://www.codechef.com/SEPT20B/problems/TREE2

from collections import Counter

u = int(input())
for _ in range(u):
    nos = int(input())
    sticks = list(map(int,input().split()))
    try:
        while True:
            sticks.remove(0)
    except ValueError:
        pass
    sticks.sort(reverse=True)
    print(len(Counter(sticks).keys()))