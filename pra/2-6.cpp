#include <iostream>
#include <stdio.h>
#define INF 1000000000
using namespace std;
int main(){
	int n;
	int kase=0;
	// int array[];
	while(scanf("%d",&n)==1 && n){ //循环输入n
		int min=INF,max=-INF,s=0;
			for(int i=0;i<n;i++){
				int x;
				scanf("%d",&x);
				s+=x;
				if(x>max)max=x;
				if(x<min)min=x;
			}
			if(kase) printf("\n");
			printf("Case %d: %d %d %.3f\n",++kase,min,max,(double)s/n);
	}
	//跳出循环之后应该输出结果才对
	return 0;
}

// 坑真多啊...