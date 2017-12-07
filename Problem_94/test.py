def check(a,b):
	h=(b*b-(a/2)**2)**0.5
	s=a*h/2
	ss=s//1
	return s==ss and s!=0
for i in range(1,10000):
	a=i
	b=i+1
	if check(a,b):
		print(a,b,a+b+b)
for i in range(2,10000):
	a=i
	b=i-1
	if check(a,b):
		print(a,b,a+b+b)
