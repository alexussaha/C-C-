#include <stdio.h>
struct Tutor
{ char name_f[];
int n_group;
int n_stud;
int n_estud;
};
void InputS(struct Tutor [], int*);
void OutputS(struct Tutor [], int);
void ProzentS(struct Tutor [], int);
int main(){
	struct Tutor ta[5];
	int t;
	InputS(ta,&t);
	OutputS(ta,t);
	ProzentS(ta,t);
	return 0;
}
void InputS(struct Tutor t[5], int*n){
	int i, nn;
	do{
		printf("Razm massiva 1<n<=5 ");
		scanf("%d",&nn);
	}while(nn<=0||nn>5);
	printf("Vvod dannyh po zaprosu progr: \n");
	for(i=0;i<nn;i++){
		printf("\n VVedite dannye dlya naprav %d\n",i+1);
		printf("\n VVedite nazvaniye (NP||NI||NK||NB||NN)\n");
		scanf("%s",t[i].name_f);
		do{
			printf("Write amount of groups 0<g<=10 ");
			scanf("%d",&t[i].n_group);
	}while(t[i].n_group<=0|| t[i].n_group>10);
	do{
		printf("Write amount of students 0<g<=100");
		scanf("%d",&t[i].n_stud);
	}while(t[i].n_stud<=0|| t[i].n_stud>100);
	do{
		printf("Write amount of good students 0<g<=100");
		scanf("%d",&t[i].n_estud);
	}while(t[i].n_stud<=0|| t[i].n_stud>100);
		}
		*n=nn;
	}
	void OutputS(struct Tutor t[5], int n){
		int i;
		for(i=0;i<n;i++){
				printf("Napr:%d %s\n",i+1,t[i].name_f);
	printf("Amount of groups: %d\n",t[i].n_group);
	printf("Amount of students: %d\n",t[i].n_stud);
	printf("Amount of good students: %d\n",t[i].n_estud);
		}}
		void ProzentS(struct Tutor t[5],int n){
		int i,Sn,Se;
		float p;
		Sn=0; Se=0;
		for(i=0;i<n;i++){
		   Sn+=t[i].n_stud; Se+=t[i].n_estud;
		}
		p=100.0*Se/Sn;
		printf("%2.2f%%\n",p);
		
		}