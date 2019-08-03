 #include <stdio.h>
 int fact (int a){
 	if (a==1) return 1;
 	else return a*fact(a-1);
 }
 int main(){
 	int n,k,c;
	 printf("write n, k n>=k \n");
	 scanf("%d%d",&n,&k);
	 c=fact(n)/(fact(n-k)*fact(k));
	 printf("\nc(%d,%d)=%d",n,k,c);
	 return 0;
	 
 }