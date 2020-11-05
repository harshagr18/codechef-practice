# Problem Link : https://www.codechef.com/JAN20B/problems/CHFDORA

def countfun(mat,i,j):
    x=1
    count=0
    while(i-x>=0 and i+x<n and j-x>=0 and j+x<m):
        if(mat[i-x][j]==mat[i+x][j] and mat[i][j-x]==mat[i][j+x]):
            count+=1
            x+=1
        else:
            break
    return(count)
t = int(input())
for i in range(t):
    n,m = list(map(int,input().split()))
    mat = []
    sum = 0
    for i in range(n):
        mat.append(list(map(int,input().split())))
    for i in range(1,n):
        for j in range(1,m):
            sum+=countfun(mat,i,j)
    print(n*m+sum)