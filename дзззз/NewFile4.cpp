#include <stdio.h>
int main(){
	int n,s,i;
	printf("write n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=n%i;
		if(s==0) printf("%d\n",i);
	}
	return 0;}