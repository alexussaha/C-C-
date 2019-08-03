#include <stdio.h>
int main(){
	printf("The program outputs odd numbers in ascending order and even numbers in dessending order\n");
	int m,i;
	printf("M=");
	scanf("%d",&m);
	int a[m];
	for(i=0;i<=m;i++){
		a[i]=i;
	}
	for(i=1;i<=m;i=i+2){
		printf("a[%d]=%d\n",i,a[i]);
		}
		for (i=2;i<=m-2;i=i+2){}
          for(;i>=0;i=i-2){
		printf("a[%d]=%d\n",i,a[i]);}
	
	return 0;
}