ans=set()
sup=int(1e18)
def gets(n):
    s=0
    while n:
        s+=n%10
        n=n//10
    return s
def check(a,n):
    ta=a
    while n:
        if a>sup:
            break
        s=gets(a)
        if s==ta:
            ans.add(a)
        a*=ta
        n-=1

for i in range(1,10000):
    for j in range(1,100):
        check(i,j)

lans=[]
for s in ans:
    lans.append(s)
lans.sort()
cnt=0
for s in lans:
    if s>9:
        cnt+=1
        print(cnt,s)
