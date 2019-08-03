#include <stdio.h>
#include <math.h>
int main(){
	int n,c,i,p,l,s=0,m;
	printf("the program counts sum of all numbers in N");
	printf("write n=");
	scanf("%d",&n);
	c=log10(n)+1;
	for(i=c;i>=1;i--){
		l=1;
		for(m=1;m<i;m++)l=l*10;
		p=n/l;
		s=s+p;
		n=n-p*l;
	}
	printf("s=%d ",s);
	return 0;
	}