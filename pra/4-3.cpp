#include <stdio.h>
#include <string.h>
// #define maxn 25
// int a[maxn]; //值为0 表示被淘汰
// int b[maxn]; //用来记录出列的顺序
// int main(){
	

// 	int n,k,m;
// 	while(scanf("%d%d%d",&n,&k,&m)==3 &&n){
// 		memset(a,1,sizeof(a));
// 		menset(b,0,sizeof(b));
// 		int leave = n;
// 		int s1 = 1; s2 = n;
// 		while(leave){  //每一次行走
// 			int cs1 = 0;
// 			for(;;){
// 				if(a[s1]!=0){
// 					cs1++;
// 				}
// 				if(cs1 == k){
// 					//被选中了
// 					a[s1]=0;
// 					b[n-leave] = s1;
// 				}
// 				else{
// 					s1++;
// 				}
// 			}
// 			for(;;){
// 				if
// 			}
// 		}
// 	}
// 	return 0;
// }

//哎,写不出来啦

#define maxn 25

int n,k,m,a[maxn];
int go(int p,int d,int t){
	while(t--){
		do{
			p = (p+d+n-1)%n+1;
		}while(a[p]==0); //走到下一个非0的数字
	}
	return p;

}

int main(){
	while(scanf("%d%d%d",&n,&k,&m)==3 && n){
		for(int i = 1;i<= n;i++) a[i]= i;
		int left = n; //剩下n个人
		int p1 = n,p2 = 1;
		while(left){
			//还剩人的时候
			p1 = go(p1,1,k);
			p2  = go(p2,-1,m);
			printf("%3d", p1);
			left--;
			if(p2!=p1){
				printf("%3d", p2);
				left--;
			}
			a[p1] = a[p2] = 0;
			if(left) printf(",");
		}
		printf("\n");
	}
	return 0;
}