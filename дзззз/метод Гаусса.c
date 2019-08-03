 #include <stdio.h> 
 #include <stdlib.h>
 #include <time.h>
int main(){ 
	srand(time(NULL));
	printf("The program solves the system of equations using method Gauss\n");
	int p,i,j,l,g,n,f; 
	printf(" write the number of equations and variables p=\n"); 
	scanf("%d",&p); 
	double a[p][p],x[p],b[p],k,s,d; 
		for(i=1;i<=p;i++){ 
			printf("Write the coefficients of the variable x[%d]\n",i);
			for(j=1;j<=p;j++){ 
				printf("a[%d][%d]=",i,j); 
				scanf("%lf",&a[i][j]);
			} 
			printf("And result is\n") ;
			printf("b[%d]=",i);
				scanf("%lf",&b[i]); 
		} 
	l=1;
		for(g=2;g<=p;g++){
			for (i=g;i<=p;i++){ 
				k=a[i][l]/a[l][l]; 
					for(j=1;j<=p;j++){ 
					a[i][j]=a[i][j]-k*a[l][j]; 
					}
				b[i]=b[i]-k*b[l]; 
				//printf("b[%d]=%d\n",i,b[i]);
			}
			l++;
		}
		l=p;
		for(f=1;f<=p;f++){
			if ((b[f]!=0)&&(a[f][f]==0)){
				l=0;
			}
			if ((b[f]==0)&&(a[f][f]==0)){
				l=l--;
				n=f;
			}
		}
	if(l==0) printf ("the system is incompatible. No solutions.");
		else if(l<p) {
			printf ("0=0");
			a[n][n]=1;
				x[n]=rand()%10;
				d=0; 
				for(i=p-1;i>=1;i--){ 
					if(i==n) d=0; 
 	 	 	 	 	 	 else { d=0; 
 	 	 	 	 	 	 	 	 for (j = 1+i ;j <= p; j++){ 
										s=a[i][j]*x[j]; 
										d=s+d;
									}
						} 
					x[i]=(b[i]-d)/a[i][i]; 
				} 
					printf("Korni systemi\n"); 
					for(i=1;i<=p;i++){ 
					printf("x[%d]=%lf ",i,x[i]);
					}
		}		
		else{
			d=0; 
			for(i=p;i>=1;i--){ 
				if(i==p) d=0; 
 	 	 	 	 else { d=0; 
	 	  	   		 for (j = 1+i ;j <= p; j++){ 
						s=a[i][j]*x[j]; 
						d=s+d;
						}
				  }	 
				x[i]=(b[i]-d)/a[i][i];  
			} 
			printf("Korni systemi\n"); 
			for(i=1;i<=p;i++){ 
				printf("x[%d]=%lf ",i,x[i]);
			}
		}	 
return 0;}