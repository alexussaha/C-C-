#include <stdio.h>
int main(){
	int s=0,a;
	do {
		printf("write a number: ");
		scanf("%d",&a);
		s=s+a;}
	while(a!=0);
	printf("%d",s);
	return (0);
}