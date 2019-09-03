#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int x,y1,y2;
	for(int i=0;i<n;i++){
		x=i;
		y1=n-x;
		y2=(m-2*x)/4;
		if(y1==y2){
			printf("%d %d\n",x,y1);
			return 0;
		}

	}
	printf("No answer\n");
	return 0;
}


// 可以联立两个公式把x 和 y解出来，但判断解是不是符合要求
// m是脚数量，必然是偶数，x和y都必须大于0 且是整数。
