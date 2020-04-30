x = int(input())
lst = []
for i in range(x):
    n = int(input())
    a = list(map(int,input().split()))
    max = 0
    z = 0
    for j in range(len(a)):
        if a[j]!=0:
            x = j
            c = 1
            for k in range(j+1,len(a)):
                if a[k]==a[j] and abs(x-k) > 1 :
                    c+=1
                    a[k] = 0
                    x = k
            if max < c:
                max=c
                z = a[j]
            elif max == c:
                if z>a[j]:
                    z=a[j]
    print(z)