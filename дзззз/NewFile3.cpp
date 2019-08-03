#include <stdio.h>
int main(){
	int n,s,i;
	printf("The program outputs factorial N")
	printf("write N=");
	scanf("%d",&n);
	s=1;
	for(i=1;i<=n;i++){
		s=s*i;
	}
	printf("%d!=%d",n,s);
	return 0;
}