#include <stdio.h>
int main(){
	int a,i;
	printf("The programm outputs numbers 1,3,5,...,55\n");
	for(i=1;i<=55;i++){
		a=i%2;
		if(a!=0) printf("%d\n",i);
	}
return 0;
}