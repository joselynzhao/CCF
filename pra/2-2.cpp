#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int count=0;
	long long n;
	cin>>n;
	while(n>1){
		if(n%2==0){
			//偶数
			n=n/2;
		}
		else{
			n=3*n+1;
			
		}
		count++;
		printf("%lld\n", n);
	}
	cout<<count;
	return 0;
}

// int n;
// cin>n;
// long long n1=n;
// 由此避免对long long 类型的输入输出.