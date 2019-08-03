#include <iostream>
using namespace std;
int main(){
	 int N;//граниа произведения
	 int n;//индексная переменная
	 double s=1;//Переменная для записи произведения
	 cout<<("Enter N=");
	 cin>>N;
	 for(n=2;n<=N;n++)
        s*=(1-(double)2/(n*(n+1)));//здесь менять формулу
    cout<<"Product is "<<s<<endl;
    return 0 ;
}