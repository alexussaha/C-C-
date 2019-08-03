#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
int main(){
	//0randomize();
	srand(time(NULL));
	int a=rand()%100;
	int b,i;
	printf("%d",a);
	for (i=1;i<=11;i++){ 
		printf("Write your number \n");
		scanf("\n %d",&b);
		if(a==b) { printf("Your number is right\n");
		return 0;
		}
		else if (i==11) {printf("You lose.\n");
		return 0;}
		else{
		if(a<b) printf ("your numder is higher\n");
		else printf ("your number is lower\n");

		}
	}
return 0;
}