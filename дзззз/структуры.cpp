#include <stdio.h>
#include <locale.h>
struct Tutor
{ char name_f[];
int n_group;
int n_stud;
int n_estud;
};
int main(){
	setlocale(LC_ALL, "Rus");
	struct Tutor T;
	printf("The name of napr\n");
	scanf("%s",T.name_f);
	do{
		printf("Write amount of групп 0<g<=10");
		scanf("%d",&T.n_group);
	}while(T.n_group<=0|| T.n_group>10);
	do{
		printf("Write amount of students 0<g<=100");
		scanf("%d",&T.n_stud);
	}while(T.n_stud<=0|| T.n_stud>100);
	do{
		printf("Write amount of good students 0<g<=100");
		scanf("%d",&T.n_estud);
	}while(T.n_stud<=0|| T.n_stud>100);
	printf("Napr: %s\n",T.name_f);
	printf("Amount of groups: %d\n",T.n_group);
	printf("Amount of students: %d\n",T.n_stud);
	printf("Amount of good students: %d\n",T.n_estud);
	return 0;
	
}