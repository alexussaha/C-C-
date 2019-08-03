#include <stdio.h>
int main()
{
   int A,B,i,s=0;
    printf("Enter number A= ");
    scanf("%d",&A);
    printf("Enter number B= ");
    scanf("%d",&B);
      for(i=A;i<=B;i++) {
		  s+=i;
	  }
	  printf("Sum of natural numbers is: %d ",s);
return 0;
}
