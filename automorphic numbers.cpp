#include <stdio.h> 
#include <math.h> 
int main(){ 
 long long int N,i,d,s; 
int k, p; 
	printf("The programm finds automorphic numbers from 1 to N\n");
	printf("Write the last number N="); 
	scanf("%lld",&N); 
		for(i=1;i<=N;i++){ 
			d=1;
			s=i*i; 
			k=log10(i)+1; //������� ���-�� ���� � ����� ���������� � �������
			for(p=1;p<=k;p++){ //�������� 10 � ������ ������ ����������� 
				d=d*10;        //���� � �����
				} 
			if(s%d==i) {printf("%lld - %lld\n",i,s);} 
			} 
return 0; 
}
