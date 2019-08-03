#include <stdio.h>
#include <stdlib.h>
 #include <time.h>
 #include <math.h>
int main(){ 
	srand(time(NULL));
	printf("The program solves the system of equations using method Gauss\n");
	int p,k,k1,l,g,i,j,f,del,v;
	printf("Write p=");
	scanf("%d",&p);
    long long int a[p][p],b[p],b1[p],x1[p];
    long long int a1[p][p];
	double x[p],s,s1,d,d1;
	b[1]=1;
	b1[1]=1;
	for (i=1;i<=p;i++){
		for (j=1;j<=p;j++){
			a[i][j]=1;
			a1[i][j]=i+j-1;
		}
		b[i+1]=0;
		b1[i+1]=0;
	}
/*	for (i=1;i<=p;i++){
		for (j=1;j<=p;j++){
			printf("a[%d][%d]=%d/%d\n",i,j,a[i][j],a1[i][j]);}
			printf("b[%d]=%d/%d",i,b[i],b1[i]);}*/
			
			
	l=1;
		for(g=2;g<=p;g++){
				for (i=g;i<=p;i++){ 
				k=a[i][l]*a1[l][l];
				k1=a1[i][l]*a[l][l];
			if(k!=0){
				if(k1%k==0){f=k;k=1; k1=k1/f;}
				else{v=k; for(f=2;f<=v;f++){
					if(k%f==0&&k1%f==0) del=f;
				   	   	   	   	}
				   k=k/del; k1=k1/del;		} 					
					}
				printf("k[%d]=%ld/%ld",i,k,k1);
					for(j=1;j<=p;j++){ 
					a[i][j]=k1*a1[l][j]*a[i][j]-k*a[l][j]*a1[i][j]; 
					//if(j==6) printf(" %ld ",a[i][j]);
					a1[i][j]=a1[i][j]*k1*a1[l][j];
					//if(j==6) printf(" %ld ",a1[i][j]);
					if(a[i][j]!=0){
						if(a1[i][j]%a[i][j]==0){printf("lol %ld",a[i][6]); f=a[i][j];a[i][j]=1; a1[i][j]=a1[i][j]/f;}
						else  {v=a[i][j];
						for(f=1;f<=v;f++){
					if(a[i][j]%f==0&&a1[i][j]%f==0) del=f;
				   	   	   	   	}
				   a[i][j]=a[i][j]/del; a1[i][j]=a1[i][j]/del;		} }
					printf("a[%d][%d]=%ld/%lld\n",i,j,a[i][j],a1[i][j]);
					}
					
				if(b[i]==0){ b[i]=k1*b1[l]*b[i]-k*b[l];
						b1[i]=k1*b1[l];
						}
				else {b[i]=k1*b1[l]*b[i]-k*b[l]*b1[i];
					b1[i]=k1*b1[l]*b1[i];}
					if(b1[i]%b[i]==0){f=b[i];b[i]=1; b1[i]=b1[i]/f;}
						else { v=abs(b[i]); for(f=2;f<=v;f++){
					if(b[i]%f==0&&b1[i]%f==0) del=f;
				   	   	   	   	}
				   b[i]=b[i]/del; b1[i]=b1[i]/del;} 
				 
					printf("b[%d]=%ld/%ld\n",i,b[i],b1[i]); 
			}
			l++;
		}
			d=0;
			d1=1; 
			for(i=p;i>=1;i--){ 
				if(i==p) d=0; 
 	 	 	 	 else { d=0; 
	 	  	   		 for (j = 1+i ;j <= p; j++){ 
						s=(double(a[i][j])/double(a1[i][j]))*x[j]; 
						//s1=a1[i][j]*x1[j];
						d=d+s;
						//d1=s1*d1;
						}
					//	printf("d=%lf\n",d);
				  }	 
				  
				x[i]=(double(a1[i][i])*((double(b[i])/double(b1[i]))-d))/double(a[i][i]);
				//x1[i]= b1[i]*d1*a[i][i] ;
				//printf("x=%lf\n",x[i]);
			} 
			printf("Korni systemi\n"); 
			for(i=1;i<=p;i++){ 
				x1[i]=x[i];
				printf("x[%d]=%ld\n",i,x1[i]);
			}
			 	
return 0;
}