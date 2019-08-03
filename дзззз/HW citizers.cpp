#include <stdio.h>
struct citizens{
	char name;
	char surname;
	struct address{
		char city;
		char street;
		char build;
		int fl;};
};
void InputS(struct citizens [], int*);
void OutputS(struct citizens [], int);
int main(){
	struct citizens ta[5];
	int t;
	InputS(ta,&t);
	OutputS(ta,t);
	return 0;
}
void InputS(struct citizens t[5], int*n){
	int i, nn;
	do{
		printf("Razm massiva 1<n<=5 ");
		scanf("%d",&nn);
	}while(nn<=0||nn>5);
	printf("Vvod dannyh po zaprosu progr: \n");
	for(i=0;i<nn;i++){
		printf("\n VVedite dannye dlya chela %d \n",i+1);
		printf("\n VVedite imya\n");
		scanf("%s",t[i].name);
		printf("\n VVedite familiyu\n");
		scanf("%s",t[i].surname);
		printf("\n VVedite gorod\n");
		scanf("%s",t[i].address.city);
		printf("\n Vvedite ulicu\n");
		scanf("%s",t[i].address.street);
		printf("\n Vvedite dom\n");
		scanf("%s",t[i].address.build);
		printf("\n Vvedite ¹ kvartiry\n");
		scanf("%s",t[i].address.fl);}
		*n=nn;}
void OutputS(struct citizens t[5], int n){
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			if(i!=j){	
			if(t[i].address.street==t[j].address.street&&t[i].address.build==t[j].address.build&&t[i].address.fl==t[j].address.fl){
				printf("%s-%s",t[i].surname,t[j].surname);
			}}}}
