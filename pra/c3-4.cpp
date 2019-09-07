#include<iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

// int s_in_a(char a[],char s[]){
// 	for(int i=0;i<strlen(s);i++){
// 		//遍历s中的每一个字符
// 		if(strstr(a.c_str(),s[i])==NULL){
// 			return 0;
// 		}
// 	}
// 	return 1;
// }

// int main(){
// 	char a[20];
// 	scanf("%s",a);
// 	printf("%s\n", a);
// 	for(int i=100;i<=999;i++){
// 		for(int j=10;j<99;j++){
// 			int lo = j%10;
// 			int he = j/10;
// 			int x = lo * i;
// 			int y = he * i;
// 			int c = i *j;
// 			if (s_in_a(a,str(x)) && s_in_a(a,str(y)),s_in_a(a,str(c))){
// 				//输出
// 				printf("%d %d %d\n",x,y,c);
// 			}

// 		}
// 	}
// 	return 0;
// }

int main(){
	int count = 0;
	char s[20],buf[99];
	scanf("%s",s);
	for(int abc = 111;abc<112;abc++){
		for(int de =11;de<13;de++){
			int x = abc*(de%10),y=abc*(de/10),z = abc*de;
			sprintf(buf,"%d%d%d%d%d",abc,de,x,y,z); //把abc\de\x\y\z 拼在了一起.
			// cout<<strlen(buf)<<endl;
			// cout<<buf<<endl;
			int ok = 1;
			for(int i=0;i<strlen(buf);i++){
				if(strchr(s,buf[i])== NULL) ok = 0; //判断单个字符是否在字符串中
			}
			if(ok){
				printf("<%d>\n",++count);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z);
			}
		}
		
	}
	printf("The number of solutions = %d\n",count);
	return 0;
}