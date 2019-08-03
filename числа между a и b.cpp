#include <stdio.h>
int main(){
	int i,a,b;
	printf("The programm outputs numbers between a and b\n" );
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	for(i=a+1;i<b-1;i++){
		printf("%d, ",i);
	}
	printf("%d",i);
	return 0;
}