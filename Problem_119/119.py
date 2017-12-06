def getv(a,n):
    l,r=0,100
    while l<=r:
        mid=(l+r)>>1
        if a**mid < n: 
            l=mid+1
        elif a**mid > n:
            r=mid-1
        else:
            return True
    return False

def gets(n):
    s=0
    while n:
        s+=n%10
        n//=10
    return s

cnt=0
n=9
while cnt<=30:
    n+=1
    a=gets(n)
    if getv(a,n):
        cnt+=1
        print(n,a)

