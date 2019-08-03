#include <iostream>
using namespace std;
 struct cell{
	 char product[10];
	 int weight;
	 struct cell *pc;
 };
 int main()
 {
 	struct cell *rex, *beg=NULL, *end=NULL;
 	cout<<"Input values of struct"<<endl; 
	 do{
		cout<<"Allocate memory for another link list"<<endl;
		 rex=new struct cell;
		 cout<<"Product="; cin>>rex->product;
		 cout<<"Weight=";cin>>rex->weight;
		 if (rex->weight==0){delete rex; break;}
		 	if (beg==NULL && end==NULL)
		 		beg=rex;
		 	else end->pc=rex;
		 	end=rex; 
		 end->pc=NULL;
	 }
	 while (1);
	 cout<<"Filter the list"<<endl;
 rex=beg;
 while (rex!=NULL) {
	 cout<<"product="<<rex->product<<endl;
	 cout<<"weight="<<rex->weight<<endl;
	 rex=rex->pc;
 }
 return 1;
 }