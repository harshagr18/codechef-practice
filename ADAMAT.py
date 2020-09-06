# Problem Link : https://www.codechef.com/SEPT20B/problems/ADAMAT

u = int(input())
for _ in range(u):
    N = int(input())
    mainMat = []
    for i in range(N):
        temp = list(map(int,input().split()))
        mainMat.append(temp)
    operations = 0

    for i in range(N-1,0,-1):
        final = mainMat[i][i-1]+1
        if final!= mainMat[i][i]:
            counter2 = i+1
            operations = operations + 1
            for j in range(counter2):
                for k in range(j,counter2):
                    temp = mainMat[i][j]
                    mainMat[i][j] = mainMat[j][i]
                    mainMat[j][i] = temp

    print(operations)