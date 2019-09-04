#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main(){
	int n=1;
	double tail;
	double sum = 0;
	double m = pow(10,-6);
	do{
		tail = 1.0/(2*n-1);
		sum+=pow((-1),(n-1))*tail;
		n++;

	}while(tail>=m);
	printf("%.6f\n",sum);
	return 0;
}


// pow(10,-6) 错误结果 在不声明double变量的情况下, pow(10.-6)精度不够
// 1e-6 正确结果