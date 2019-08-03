#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[12];
	int i;
	printf("the program outputs 11 fist Fibonacci numbers\n" );
	for(i=0;i<=10;i++){
		a[i]=a[i-2]+a[i-1];
		a[0]=1;
		a[1]=1;
		printf("%d\n",a[i]);
	}
return 0;}