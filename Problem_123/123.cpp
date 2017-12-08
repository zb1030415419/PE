#include<cstdio>
#define MAXN 10000007
#define ll __int128 
ll check[MAXN];
void init(){
	int i,j;
    for(i=2;i<MAXN;i++){
	    if(!check[i]) check[++check[0]]=i;
		for(j=1;j<=check[0];j++){
		    if(check[j]*i>=MAXN) break;
			check[i*check[j]]=1;
			if(i%check[j]==0) break;
		}
	}
}
ll fastexp(ll b,ll e,ll m){
    ll ans=1;
	while(e){
	    if(e&1) ans=b*ans%m;
		b=b*b%m;
		e>>=1;
	}
	return ans;
}
int main(){
    init();
	int i;ll p,m;
	for(i=1;i<=check[0];i++){
	    p=check[i];
		m=p*p;
		ll ans=(fastexp(p-1,i,m)+fastexp(p+1,i,m))%m;
		if(ans>1e10) {printf("%d\n",i);break;}
	}
}
