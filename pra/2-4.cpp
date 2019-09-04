#include<iostream>
#include<stdio.h>
using namespace std;
long long jiecheng(int n){
	long long sum=1;
	for(int i=1;i<=n;i++){
		sum = sum*i;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	long long s = 0;
	for(int i=1;i<=n;i++){
		s+=jiecheng(i);
	}
	s= s%1000000;
	printf("%lld\n",s);
	return 0;
}