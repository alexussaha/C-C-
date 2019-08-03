#include <stdio.h>
int main(){
	long int a,b,c,i=0,l, count=0 ;
	printf("Write the last number ");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		b=i*i;
		c=b-i;
		l=ln(i);
		if(c%10==0){
			printf("%ld - %ld",i,b);}
			}
return 0;
		}