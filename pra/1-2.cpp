#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	int out;
	while(n>0){
		out = n%10;
		printf("%d",out);
		n=n/10;
	}
	// printf("\n%04d\n",out );
	return 0;
}

// 将25 输出为025的方法
// printf("%03d\n", 25);