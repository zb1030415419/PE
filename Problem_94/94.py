sup = int(1e9)
v=int(sup**0.5)+1
ans = 0
def checkps(n):
	sn=n**0.5
	ssn=sn//1
	return ssn==sn
#1.1 n(3n+2) and n is even then we could rewrite 4*(i*i)*(j*j) 
for i in range(1,v):
	n=i*i*2
	a,b=2*n+2,2*n+1
	tn=(3*n+2)/2
	pm = a+2*b
	if pm >sup:
		break
	if checkps(tn):
		ans+=pm

#1.2 n(3n+2) and n is odd
for i in range(1,v):
	n=i*i
	a,b=2*n+2,2*n+1
	tn=3*n+2
	pm=a+2*b
	if pm>sup:
		break
	if checkps(tn):
		ans+=pm

#2.1 (n+1)(3n+1) and n+1 is even we could rewrite 4*(i*i)*(j*j)
for i in range(1,v):
	n=2*i*i-1
	a,b=2*n,2*n+1
	tn=(3*n+1)/2
	pm=a+2*b
	if pm > sup:
		break
	if checkps(tn):
		print(a,b,pm)
		ans+=pm
#2.2 (n+1)(3n+1) and n+1 is odd
for i in range(2,v):
	n=i*i-1
	a,b=2*n,2*n+1
	tn=3*n+1
	pm=a+2*b
	if pm > sup:
		break
	if checkps(tn):
		print(a,b,pm)
		ans+=pm
print(ans)
