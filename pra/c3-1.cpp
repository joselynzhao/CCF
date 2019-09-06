#include <stdio.h>
#define maxn 105 //为什么是105呢? 整数不超过100个
int  a[maxn];
int main(){
	int x,n=0;
	while(scanf("%d",&x)==1){ //表示能够正确捕捉程序输入,输入非数字的字符 就回终止.
		a[n++]=x;
	}
	for(int i=n-1;i>=1;i--){
		printf("%d ", a[i]);

	}
	printf("%d\n",a[0]);
	return 0;
}