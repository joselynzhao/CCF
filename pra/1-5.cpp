#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a,b,c;
	// 排序算法 插入排序
	cin>>a>>b>>c;
	int list[]={a,b,c};
	for(int i=1;list[i]!='\0';i++){
		int j=i-1;
		int temp = list[i];
		while(j>=0){
			if(list[j]<list[i]){
				list[i]=list[j];
			}
			else{
				list[i]=temp;
			}
		}
	}
	for(int i=0;list[i]!='\0';i++){
		printf("%d ",list[i]);
	}
	return 0;
}