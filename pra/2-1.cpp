#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	for (int i=1;;i++){
		int n=i*i;
		if(n<1000)continue;
		if(n>9999)break;
		int hi = n/100;
		int lo = n%100;
		if(hi/10==hi%10 && lo/10==lo%10)
			printf("%d\n",n);
	}
	return 0;
}

// 另一种办法是遍历所有可能的a和b,在判断其组成的aabb是否为平方数.
