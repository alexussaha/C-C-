#include <stdio.h>
int main(){
	int a, b, k;
	printf("Write a number: ");
	scanf("%d",&a);
	printf("Write b number: ");
	scanf("%d",&b);
	k=a-b;
	if(k==0) {printf("Numbers %d and %d are equal",a,b);}
		else if(k>0) {printf("Number %d is more than %d per %d",a,b,k);}
		else if(k<0) {printf("Number %d is less than %d per %d",a,b,-k);}
	return (0);
}