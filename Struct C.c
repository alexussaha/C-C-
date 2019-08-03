#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h> 

struct people { //структура "√орожане" 
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
struct people p[3]; //массив 30 структур 
for(int i=0; i<3; i++) { //заполн€ю массив структур 
printf ("¬ведите фамилию: "); 
scanf ("%s", &p[i].surname); 
printf ("¬ведите им€: "); 
scanf ("%s", &p[i].name); 
printf ("¬ведите город: "); 
scanf ("%s", &p[i].a.city); 
printf ("¬ведите улицу: "); 
scanf ("%s", &p[i].a.street); 
printf ("¬ведите дом: "); 
scanf ("%d", &p[i].a.house); 
printf ("¬ведите квартиру: "); 
scanf ("%d", &p[i].a.flat); 
} 
int f=0; 
for (int k=0; k<2; k++) { 
for (int j=1; j<3; j++) { 
if ((p[k].a.city!=p[j].a.city) && (p[k].a.street== p[j].a.street) && (p[k].a.house == p[j].a.house) && (p[k].a.flat == p[j].a.flat)) { 
printf("%с, %с\n", p[k]. 
surname, p[j].surname); 
f = 1; 
} 
} 
} 
if (f==0){ 
printf("%s", "“аких людей нет"); 
} 
return 0; 
}