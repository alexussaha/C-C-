#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
int main(){
    srand(time(NULL)); 
	int a[101];
	int b,i,max,min1,min2;
	double mid,s=0;
	for (i=0;i<=100;i++){
		b=rand()%10-10;
		a[i]=b;
		printf("%d\n",a[i]);
	}
	max=a[0];
	for(i=1;i<=100;i++){
		if(max<a[i]) max=a[i];
		//printf("%d\n",max);
	}
 	 printf("max=%d\n",max);
 	 for(i=0;i<=100;i++){
		  s=s+a[i];
	  }
	  mid=s/100;
	  printf("mid=%lf\n",mid);
	  min1=a[0];
	  //min2=a[1];
	  for (i=1;i<=100;i++){
		  if(min1>a[i]) {min2=min1;
		  min1=a[i];}
	  }
     printf("min1=%d, min2=%d",min1,min2);
     
return 0;	
	
	
}
#include <stdio.h>
int main(){
	int a,s=0,i;
	printf("The program counts(s) even numbers of a number(a)\n");
	printf("a=");
	scanf("%d",&a);
	while(a>0){
		i=(a%10)%2;
		if(i==0) s=s+1;
		a/=10;
	}
	printf("s=%d",s);
}