#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int i, a, k, l;
	printf("the program outputs all two digit numbers of sequence an=2an-1+200, when a1=-166\n" );
	a=-166;
	for(i=1;i<=1000;i++){
		a=2*a+200;
		l=abs(a);
		k=log10(l)+1;
		if (k==2) printf("%d\n",a);
	}
return 0;
}