#include <stdio.h>

int isprame(int n){
	if(n==1)return 0;
	else if(n==2)return 1;
	else{
		for(int i=2;i<(n/2);i++){
			if(n%i==0) return 0;
		}
		return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",isprame(n));
	return 0;
}

//不用循环到（n/2），循环到sqrt（n）+0.5 即可。