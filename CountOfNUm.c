#include <stdio.h>
#include <conio.h>
int main(){
	int numb = 0;
	int count = 0; 
		printf("input numb\t");scanf("%d",&numb);
while(numb){
numb/=10;
count++;
}
int n = count;
printf("count numbers %d",n);
printf("\n");
return 0;
}