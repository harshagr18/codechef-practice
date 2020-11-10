# Problem Link : https://www.codechef.com/NOV20B/problems/FEMA2

u = int(input())
for _ in range(u):
    n,k = list(map(int, input().split()))
    string = input()
    magnet = 0
    iron = 0
    blocks = []
    magnets = []
    iron = []
    sheet = []
    temp = []
    for i in range(n):
        if string[i] == "X":
            blocks.append(i)
        if string[i] == "M":
            magnets.append(i)
        if string[i] == "I":
            iron.append(i)
        if string[i] == ":":
            sheet.append(i)
           
    for i in magnets:
        for j in iron:
            sheets = 0
            for m in blocks:
                if (m > i and m < j) or (m < i and m > j):
                    break
            