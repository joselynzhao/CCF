#include <stdio.h>
#define maxn 100005
int a[maxn];
int main(){
	for(int i=1;i<=maxn;i++){
		int num = i;
		int sum = num%10;
		num=num/10;
		while(num>0){
			sum+=num%10;
			num=num/10;
		}
		a[i]=sum+i;
		// printf("%d\n", a[i] );
	}
	int test;
	scanf("%d",&test);
	int k; 
	for(k=1;k<=maxn;k++){
		if(a[k]==test){
			
			printf("%d\n", k);
			break;
		}
	}
	//Îó½â
	if(k>maxn) printf("0\n"); 
	return 0;
}
