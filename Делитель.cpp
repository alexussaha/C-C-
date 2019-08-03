#include <stdio.h>
void devide(int a){
	int b,n;
	if(a>1){
	for (int i=2;i<8;i++){
		if(a%i==0){
			printf("%d\n",i);
			n=i;
			break;
		}
		
	}
	devide(a/n);
}
}
int main(){
	int a = 60;
	devide(a);
	
	return 0;
}