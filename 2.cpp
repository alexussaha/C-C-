#include <stdio.h>
int main(){
	int a,b,i;
	for (i=35;i<=87;i++){
		a=i%7;
		if(a==1||a==2||a==5) printf("\n%d",i);
	}
return 0;
}