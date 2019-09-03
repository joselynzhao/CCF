#include <iostream>
#include <stdio.h>
#include <math.h>
#define pi 3.14159265
using namespace std;
int main(){
	float r,h,out;
	cin>>r>>h;
	out = h * 2 * pi * r + 2* pi * r*r;
	printf("Area = %.3f\n", out);
	return 0;


}

// 浮点数的声明最好是用 double
// pi = acos(-1.0)
