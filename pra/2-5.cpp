// #include <iostream>
// #include <stdio.h>
// using namespace std;
// int main(){
// 	int x,n=0,min,max,s =0;
// 	while(scanf("%d",&x)==1){
// 		s+=x;
// 		if(x<min) min = x;
// 		if(x>max) max = x;
// 		n++;
// 	}
// 	printf("%d %d %.3f\n",min,max,(double)s/n);
// 	return 0;
// }


#define LOCAL
// #include <iostream>
#include <stdio.h>
#define INF 1000000000
// using namespace std;
int main(){

	#ifdef LOCAL
	freopen("data.in",'r',stdin);
	freopen("data.out",'w',stdout);
	#endif
	int x, n=0, min=INF, max=-INF,s=0;
	while(scanf("%d",&x)==1){
		s+=x;
		if(x<min)min=x;
		if(x>max)max=x;
		n++;
	}
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return 0;
}