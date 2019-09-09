#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	if(m<(n-m))m = n-m ; //m is biger than n-m
	long long sun = 1,mum = 1,out;
	for( int i=m+1;i<=n;i++){
		sun *= i;
	}
	for(int i=1;i<=(n-m);i++){
		mum *=i;
	}
//	printf("%lld %lld\n",sun,mum);
	out = sun/mum;
	printf("%lld\n", out);

	return 0;
}
