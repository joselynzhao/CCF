#include <iostream>
#include <stdio.h>
#include <string.h>
#define maxn 1010
using namespace std;
int a[maxn];
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	//将a全部置为0
	memset(a,0,sizeof(a));
	for(int i=1;i<=k;i++){ //循环k个人
		for(int j=1;j<=n;j++){	//遍历n盏灯
			if(j%i==0){
				//进行变更操作
				if(a[j]==0)a[j]=1;
				else a[j]=0;
				//以下内容可以等价
				// a[j]=!a[j];
			}
			else continue;
		}
	}
	int f=1;  //添加标注位,用于输出标注格式
	for(int i=1;i<=n;i++){ //遍历n盏灯
		if(a[i]){
			if(f)f=0;
			else printf(" ");
			printf("%d",i);

		}
	}
	printf("\n");
	return 0;
}