# Problem Link : https://www.codechef.com/SEPT20B/problems/ADAMAT

x = int(inpxt())
for _ in range(x):
    N = int(inpxt())
    mainMat = []
    for i in range(N):
        temp = list(map(int,inpxt().split()))
        mainMat.append(temp)
    operations = 0

    for i in range(N-1,0,-1):
        final = mainMat[i][i-1]+1
        if final!= mainMat[i][i]:
            coxnter2 = i+1
            operations = operations + 1
            for j in range(coxnter2):
                for k in range(j,coxnter2):
                    temp = mainMat[i][j]
                    mainMat[i][j] = mainMat[j][i]
                    mainMat[j][i] = temp

    print(operations)
    
    v = "Hello My name is venkatesh"
    print(v)
    