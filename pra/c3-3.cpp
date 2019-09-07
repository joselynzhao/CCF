#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define maxn 10
int a[maxn][maxn];
// int main(){
// 	memset(a,0,sizeof(a)); //将a全部设为0
// 	int n;
// 	scanf("%d",&n);
// 	int num = n*n; //带编号数量
// 	int k = 1; //待填充初始值
// 	while(num){
// 		for(int i=0;;i++){
// 			for(int)
// 	}
// 	return 0;
// }

int main(){
	int n,x,y,tot=0;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	tot = a[x=0][y=n-1] = 1;
	while(tot<n*n){
		//这部分内容比较难以理解
		while(x+1<n && !a[x+1][y])  a[++x][y] = ++tot;
		while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
		while(x-1>=0 &&!a[x-1][y])  a[--x][y] = ++tot;
		while(y+1<n && !a[x][y+1])  a[x][++y] = ++tot;
	}
	for (x=0;x<n;x++){
		for(y=0;y<n;y++){
			printf("%3d", a[x][y]);
		}
		printf("\n");
	}
	return 0;
}