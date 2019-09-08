#include<stdio.h>
#define maxn 1010

int main(){
	int n;
	int a[maxn],b[maxn]; 
	int kase = 0;
	while(scanf("%d",&n)==1&&n){//
		printf("Came %d\n",++kase);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]); //获得标准答案。
		}
		int isover = 0;
		while(!isover){
			int k=0,m=0;
			isover=1;
			for(int i=0;i<n;i++){
				//输入测试数据
				scanf("%d",&b[i]);
				if(a[i]==b[i]) k++;
				if(isover && b[i])isover = 0;
			}
			for(int d=1;d<=9;d++){
				int c1=0,c2=0; 
				for(int i=0;i<n;i++){
					if(a[i]==d) c1++;
					if(b[i]==d) c2++;
				}
				if(c1<c2) m+=c1; 
				else m+=c2;
			}
			printf("    (%d.%d)\n",k,m-k);
		}
		
		
	}
	return 0;
}

//
