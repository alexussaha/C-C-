#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h> 

struct people { //��������� "��������" 
char surname; 
char name; 
struct adress{ 
char city; 
char street; 
int house; 
int flat; 
} a ; 
} p ; 

int main () { 
struct people p[3]; //������ 30 �������� 
for(int i=0; i<3; i++) { //�������� ������ �������� 
printf ("������� �������: "); 
scanf ("%s", &p[i].surname); 
printf ("������� ���: "); 
scanf ("%s", &p[i].name); 
printf ("������� �����: "); 
scanf ("%s", &p[i].a.city); 
printf ("������� �����: "); 
scanf ("%s", &p[i].a.street); 
printf ("������� ���: "); 
scanf ("%d", &p[i].a.house); 
printf ("������� ��������: "); 
scanf ("%d", &p[i].a.flat); 
} 
int f=0; 
for (int k=0; k<2; k++) { 
for (int j=1; j<3; j++) { 
if ((p[k].a.city!=p[j].a.city) && (p[k].a.street== p[j].a.street) && (p[k].a.house == p[j].a.house) && (p[k].a.flat == p[j].a.flat)) { 
printf("%�, %�\n", p[k]. 
surname, p[j].surname); 
f = 1; 
} 
} 
} 
if (f==0){ 
printf("%s", "����� ����� ���"); 
} 
return 0; 
}