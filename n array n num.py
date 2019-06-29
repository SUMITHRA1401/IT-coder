a=int(input())
b=list(map(int,input().split()))
c=b[0]
for i in range(n):
    for j in range(i+1,a):
        if(c<b[j]):
            c=b[j]
print(c)
