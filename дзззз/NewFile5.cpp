#include <stdio.h>
#include <math.h>
int main(){
	int n,s,i=1;
	printf("The program chekcs if your number is prime\n");
	printf("write n=");
	scanf("%d",&n);
	while(s!=0&&i<=sqrt(n)){
		i++;
		s=n%i;
	}
	if(s==0) {printf("%d isn't Prime",n);}
	else{ printf("%d is prime",n);}
	return 0;
	}