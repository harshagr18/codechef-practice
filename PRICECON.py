x = int(input())
for i in range(x):
    n,k = list(map(int, input().split(" ")))
    prices = list(map(int,input().split()))
    sum = 0
    for j in prices:
        if j > k:
            sum = sum + (j-k)
    print(sum)