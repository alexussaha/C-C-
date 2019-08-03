#include <stdio.h>
int main(){
	int a[101],i;
	for(i=2;i<=101;i++){
		a[i]=i-1;
		printf("1");
	}
	for(i=2;i<=101;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}