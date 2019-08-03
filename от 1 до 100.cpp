#include <stdio.h>
#include <cstdlib> 
#include <stdlib.h> 
#include <time.h>  
int random(int N){
	return rand()%N;
}
int main(){
	int i, a[6000],b[6000],k,j,l,col; 
	int r;
	
	do{
	printf("write the amount of numbers:\n");
	scanf("%d",&col);
	}while(col<=0||col>60000);
	clock_t time;
	time = clock();
	for(i=0;i<col;i++){
	r=random(5000);
	a[i]=r;}
	
	printf("The programm outputs 100 numbers\n" );
	
	b[0]=a[0];
	for(l=0;l<col;l++){
	for(i=1;i<col;i++){
		if(a[i]>b[i-1]){
			b[i]=a[i];
		}
		else {
			k=a[i];
			for(j=i-1;j<col-1;j++){
				b[j+1]=b[j];
			}
			b[i-1]=k;
		}
	}
	for(i=1;i<col;i++){
		a[i]=b[i];
	}}
	for(i=0;i<col;i++){
		printf("a[%d]=%d\n",i,b[i]);
	}
	time=clock()-time;
	
printf("%f", (double)time/CLOCKS_PER_SEC); //время выполнения "каких-то действий"

	return 0;
}