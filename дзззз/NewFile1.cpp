#include <stdio.h>
int main(){
	int a,i;
	printf("The programm outputs numbers 90,85,80,75,70...,a a>=0\n");
	for(i=90;i>=0;i--){
		a=i%5;
		if(a==0) printf("%d\n",i);
	}
return 0;
}