 #include <stdio.h> 
 #include <stdlib.h>
 #include <time.h>
int main(){ 
	srand(time(NULL));
	printf("The program solves the system of equations using method Gauss\n");
	int p,i,j,l,g; 
	printf(" write the number of equations and variables p=\n"); 
	scanf("%d",&p); 
	double a[p][p],x[p],b[p],k,s,d; 
		b[1]=1;
			for(i=1;i<=p;i++){
		for(j=1;j<=p;j++){
			a[i][j]=1/ double(i+j-1);
		printf(" a[%d][%d]=%Lf",i,j,a[i][j]);
		}
		b[i+1]=0;
	}
	l=1;
		for(g=2;g<=p;g++){
			for (i=g;i<=p;i++){ 
				k=a[i][l]/a[l][l]; 
					for(j=1;j<=p;j++){ 
					a[i][j]=a[i][j]-k*a[l][j]; 
					}
				b[i]=b[i]-k*b[l];  
				//printf("b[%d]=%lf",i,b[i-1]);
			}
			l++;
		}
	if((b[p]!=0)&&(a[p][p]==0)||(a[p][p]!=0)&&(b[p]==0)) printf ("the system is incompatible. No solutions.");
		else if(a[p][p]==0&&b[p]==0) {
			printf ("0=0");
				x[p]=rand()%10;
				d=0; 
				for(i=p-1;i>=1;i--){ 
					if(i==p-1) d=0; 
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
				printf("x[%d]=%llf \n",i,x[i]);
			}
		}	 
return 0;}