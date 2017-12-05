def getvalue(n):
	cnt=0
	v=int(5**0.5*n)+1 
	for i in range(n+1,v):
		su=i*i-n*n
		ssu=su**0.5
		sssu=ssu//1
		if ssu == sssu:
			if(ssu<=n):
				cnt+=ssu//2
			else:
				cnt+=(2*n-ssu)//2+1
	return cnt
sup=int(1e6)
ans=0
for i in range(1,sup):
	ans+=getvalue(i)
	if ans>=sup:
		print(ans,i)
		break