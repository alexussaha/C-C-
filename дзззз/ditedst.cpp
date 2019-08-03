#include <stdio.h>
#include <string.h>
  typedef struct address{
		char city[];
		char street[];
		char build[];
		int fl;}address;
 typedef struct citizens{
	char name[];
	char surname[];
	address add;
}citizens;
int main(){
	int i, nn,j,e,f;
	char a,b,ci,d;
	do{
		printf("Razm massiva 1<n<=5 ");
		scanf("%d",&nn);
	}while(nn<=0||nn>5);
	citizens c[nn];
	printf("Vvod dannyh po zaprosu progr: \n");
	for(i=0;i<nn;i++){
		printf("\n VVedite dannye dlya chela %d \n",i+1);
		printf("\n VVedite imya\n");
		fflush(stdin);
		gets(c[i].name); 
		printf("\n VVedite familiyu\n");
		fflush(stdin);
		gets(c[i].surname);
		printf("\n VVedite gorod\n");
		fflush(stdin);
		gets(c[i].add.city);
		printf("\n Vvedite ulicu\n");
		fflush(stdin);
		gets(c[i].add.street);
		printf("\n Vvedite dom\n");
		fflush(stdin);
		gets(c[i].add.build);;
		printf("\n Vvedite ¹ kvartiry\n");
		fflush(stdin);
		scanf("%d",&c[i].add.fl);}
    for(i=0; i<nn; i++){
		for (j=i+1; j<nn; j++){
			if(strcmp(c[i].add.street,c[j].add.street)==0&&c[i].add.fl==c[j].add.fl&&strcmp(c[i].add.build,c[j].add.build)==0) 
			{
		    printf("They have simular address: ")
			puts(c[i].surname);
			puts(c[j],surname);
			f=1}
			
		}
	}
	if(f!=1) printf("No such people");
	return 0;
}
