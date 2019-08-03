#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[20];
	int i;
	printf("the program outputs 12 fist numbers of sequence an=2an-2+2, when a1=3, a2=2\n" );
	for(i=0;i<=11;i++){
		a[i]=2*a[i-2]-2;
		a[0]=3;
		a[1]=2;
		printf("%d\n",a[i]);
	}
return 0;
}