# Problem Link : https://www.codechef.com/NOV20B/problems/RESTORE

n = 2000000
Primenos = [True for i in range(n+1)]
def SieveOfEratosthenes(): 
    p = 2
    while (p * p <=n): 
        if (Primenos[p] == True):        
            for i in range(p * p, n+1, p): 
                Primenos[i] = False
        p += 1

SieveOfEratosthenes()

u = int(input())
for _ in range(u):
    first = 2
    n = int(input())
    blist = list(map(int,input().split()))
    alist = {}
    for i in range(n):
        if blist[i] not in alist.keys():
            print(first, end=" ")
            alist[blist[i]] = first
            first += 1
            while(Primenos[first]!=True):
                first+=1
        else:
            print(alist[blist[i]], end=" ")
    print()