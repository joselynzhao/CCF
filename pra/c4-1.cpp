#include <stdio.h>
long long fac(int n){
	long long out=1;
	for(int i=1;i<=n;i++){
		out = out*i;
	}
	return out;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	long long out;
	out = fac(n)/(fac(m)*fac(n-m));
	printf("%lld\n",out);
	
	return 0;
	
	
	 
}
//按照正常的逻辑进行计算，容易溢出
//为什么设定longlong都会溢出呢？
