#include <stdio.h>
#include <string.h>
#define maxn 105
char a[maxn];

//环状串s 的表示法p是否比表示法q的字典序小
int less(const char* s, int p,int q){
	int n = strlen(s);
	for(int i = 0;i<n;i++){
		if(s[(p+i)%n]!=s[(q+i)%n])
			return s[(p+i)%n]<s[(q+i)%n];
	}
	return 0; //相等的情况
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		int ans = 0; //假设初始位置最小
		int n = strlen(a);
		for(int i=0;i<n;i++){//遍历所有的表示
			if(less(a,i,ans)) ans= i;
		}
		//输出ans对应的最小表示
		for(int i=0;i<n;i++){
			putchar(a[(i+ans)%n]);
		}
		putchar('\n'); //putchar只能输出单个字符
	}

	return 0;
}
