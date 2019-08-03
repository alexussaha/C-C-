#include <stdio.h>
#define LS 100
#define LG 10
#define LT 5
#include <iostream>
using namespace std;
struct Tutor{
char name_f[10];
int n_group;
int n_stud;
int n_estud;};
void Inputs(struct Tutor[],int *);
void Outputs(struct Tutor[],int);
void Prozents(struct Tutor[],int);
int main()
{
struct Tutor ta[LT];
int t;
Inputs(ta,&t);
Outputs(ta,t);
Prozents(ta,t);
return 1;
}
void Inputs(struct Tutor t[LT],int*n)
{int i,nn;
printf("Input nn\n");
scanf("%d",&nn);
for(i=0;i<nn;i++){
printf("Input name:NP,NT,NK,NB,NN\n");
scanf("%s",t[i].name_f);
printf("Input number of groups\n");
scanf("%d",&t[i].n_group);
printf("Input number of students;\n");
scanf("%d",&t[i].n_stud);
printf("Input number of good students");
scanf("%d",&t[i].n_estud);}
*n=nn;}
void Outputs(struct Tutor t[LT],int n)
{int i;
for(i=0;i<n;i++){
printf("Output name %d,%s\n",i+1,t[i].name_f);
printf("Number of groups:%d\n",t[i].n_group);
printf("Number of students;%d\n",t[i].n_stud);
printf("Number of good student;%d\n",t[i].n_estud);
}
}
void Prozents(struct Tutor t[LT], int n)
{
	int i, Su, Se; float p;
	Su=0; Se=0;
	for (i=0; i<n; i++)
	{
		Su+=t[i].n_stud; Se+=t[i].n_estud;
	}
	p=100.0*Se/Su;
	printf("%2.2f%%\n",p);
}