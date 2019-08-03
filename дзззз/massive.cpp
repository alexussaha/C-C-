#include <stdio.h>

int main(){
	int a[5][4], n, i, j,s,max;
	for(i=1;i<=5;i++){
		for(j=1;j<=4;j++){
			a[i][j]=i+j;}}
	for(i=1;i<=5;i++){
		for(j=1;j<=4;j++){
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("print '1'-sum of elements; '2'-sum of 3 string elements; '3'-max element of 2 colomn");
	scanf("%d",&n);
	if(n==1){
		s=0;
		for(i=1;i<=5;i++){
			for(j=1;j<=4;j++){
				s=s+a[i][j];
			}
		}
		printf("s=%d",s);
	}
	else if(n==2){
		s=0;
		for(j=1;j<=4;j++){
			s=s+a[3][j];
		}
		printf("3 string's s=%d",s);
	}
	else if(n==3){
		max=0;
		for(i=1;i<=5;i++){
			if(max<a[i][2]){
				max=a[i][2];
			}
		}
		printf("max=%d",max);
	}
return 0;
}