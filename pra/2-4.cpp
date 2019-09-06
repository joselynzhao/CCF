// #include<iostream>
// #include <time.h>
// #include<stdio.h>
// using namespace std;
// long long jiecheng(int n){
// 	long long sum=1;
// 	for(int i=1;i<=n;i++){
// 		sum = sum*i;
// 	}
// 	return sum;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	long long s = 0;
// 	for(int i=1;i<=n;i++){
// 		s+=jiecheng(i);
// 	}
// 	s= s%1000000;
// 	printf("%lld\n",s);
// 	printf("Time used = %.5f\n", (double)clock()/CLOCKS_PER_SEC);
// 	return 0;
// }

// 改成每步取模'

#include<iostream>
#include <time.h>
#include <stdio.h>
using namespace std;

int main(){
	const int MOD = 1000000;
	int n,s = 0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int fac = 1;
		for (int j=1;j<=i;j++){
			fac = (fac * j %MOD);

		}
		s = (s+fac)%MOD;

	}
	printf("%d\n",s);
	printf("Time used = %.5f\n", (double)clock()/CLOCKS_PER_SEC);
	return 0;
}