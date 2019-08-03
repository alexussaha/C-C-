#include <stdio.h>
int main(){
	int a[8][8],b1,b2,i,j,f;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			a[i][j]=0;}}
f=0;
 while(f<8){
	scanf("%d%d",&b1,&b2);
	b1=b1-1;
	b2=b2-1;
	if(a[b2][b1]==0){
	for(i=0;i<8;i++){
		a[b2][i]=1;
		a[i][b1]=1;
		if(b1+i<8&&b2+i<8){
		a[b2+i][b1+i]=1;}
		if(b2-i>=0&&b1-i>=0){
		a[b2-i][b1-i]=1;}
		if(b2-i>=0&&b1+i<8){
		a[b2-i][b1+i]=1;}
		if(b1-i>=0&&b2+i<8){
		a[b2+i][b1-i]=1;}
	}}
	else printf("Error");
	
 f++;
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}}
	return 0;
}