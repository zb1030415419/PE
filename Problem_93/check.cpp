#include<bits/stdc++.h>
using namespace std;
#define sup 9
#define ll long long
struct R{
	int a,b;
	R(){a=0;b=0;}
	R(int v){a=v;b=1;}
	R(int a,int b):a(a),b(b){}
	void simply(){
		int g=__gcd(a,b);
		if(g==0) return;
		a/=g;
		b/=g;
		if(a<0) a/=-1,b/=-1;
	}
	bool isPositiveInteger(){
		return b==1;
	}
};
R operator *(R u,R v){
	R c(u.a*v.a,u.b*v.b);
	c.simply();
	return c;
}
R operator *(R u,int v){
	return u*R(v);
}
R operator /(R u,R v){
	R c(u.a*v.b,u.b*v.a);
	c.simply();
	return c;
}
R operator /(R u,int v){
	return u/R(v);
}
R operator +(R u,R v){
	R c(u.a*v.b+v.a*u.b,u.b*v.b);
	c.simply();
	return c;
}
R operator +(R u,int v){
	return u+R(v);
}
R operator -(R u,R v){
	return u+(v*(-1));
}
R operator -(R u,int v){
	return u-R(v);
}
R getv(R a,R b,int t){
	switch(t){
	case 1:return a+b;
	case 2:return a-b;
	case 3:return a*b;
	case 4:return a/b;
	}
}

int vis[100005];
int init(int a,int b,int c,int d,int cnt){
	int v[4],i,j,k;
	v[0]=a;v[1]=b;v[2]=c;v[3]=d;
	do{
		for(i=1;i<=4;i++){
			R r1=getv(R(v[0]),v[1],i);
			for(j=1;j<=4;j++){
				R r2=getv(r1,v[2],j);
				for(k=1;k<=4;k++){
					R r3=getv(r2,v[3],k);
					if(r3.isPositiveInteger()) vis[r3.a]=cnt;
				}
			}
		}
		for(i=1;i<=4;i++){
			for(j=1;j<=4;j++){
				for(k=1;k<=4;k++){
					R r1=getv(R(v[0]),R(v[1]),i);
					R r2=getv(R(v[2]),R(v[3]),j);
					R r3=getv(r1,r2,k);
					if(r3.isPositiveInteger()) vis[r3.a]=cnt;
				}
			}
		}

	}while(next_permutation(v,v+4));
	i=0;while(vis[i+1]==cnt) i++;
	return i;
}
int main(){
	int a,b,c,d;
	int max=0;
	int cnt=1;
	for(a=0;a<=sup;a++) for(b=a+1;b<=sup;b++) for(c=b+1;c<=sup;c++) for(d=c+1;d<=sup;d++){
		int ans=init(a,b,c,d,cnt++);
		if(max<ans) printf("%d %d %d %d %d\n",a,b,c,d,(max=ans));
	}
}
