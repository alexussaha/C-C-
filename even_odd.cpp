#include <stdio.h>
int main(){
	int a;
	printf("Write a number: ");
	scanf("%d",&a);
	if(a%2==0) {printf("Number %d is even",a);}
	else {printf("Number %d is odd",a);}
	return (0);
}