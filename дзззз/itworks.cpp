#include <stdio.h>
#include <string.h>
  typedef struct address{
		char city[100];
		char street[100];
		int build;
		int fl;}address;
 typedef struct citizens{
	char name[100];
	char surname[100];
	address add;
}citizens;
int main(){
	int i, nn,j,e,f;
	printf("The program outputs people who have simular address. \n");
	do{
		printf("Write the amount of people: 1<=n<=30 ");
		scanf("%d",&nn);
	}while(nn<=0||nn>30);
	citizens c[nn];
	printf("Write the information about people: \n");
	for(i=0;i<nn;i++){
		printf("\n Write informaition about %d person \n",i+1);
		printf("\n Write the name: \n");
		scanf("%s",&c[i].name);
		printf("\n Write the surname: \n");
		scanf("%s",&c[i].surname);
		printf("\n Write the city: \n");
		scanf("%s",&c[i].add.city);
		printf("\n write the street: \n");
		scanf("%s",&c[i].add.street);
		printf("\n Write the building's number: \n");
		scanf("%d",&c[i].add.build);
		printf("\n Write the flat's number: \n");
		scanf("%d",&c[i].add.fl);}
    for(i=0; i<nn; i++){
		for (j=i+1; j<nn; j++){
			if(strcmp(c[i].add.city,c[j].add.city)!=0&&strcmp(c[i].add.street,c[j].add.street)==0&&c[i].add.fl==c[j].add.fl&&c[i].add.build==c[j].add.build) 
			{
			printf("Tey are: %s - %s\n",c[i].surname,c[j].surname);
			f=1;}
		}
	}
	if(f!=1)printf("There is no such people");
	return 0;
}
