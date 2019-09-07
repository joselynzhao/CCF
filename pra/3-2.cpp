#include <stdio.h>
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
	int i,c;
	while((c = getchar())!=EOF){
		for(i=1;s[i]&&s[i]!=c;i++);//找错误之后的字符在常量表中的位置  =c 时会停止
		if(s[i]) putchar(s[i-1]);
		else putchar(c);

	}
	return 0;
}