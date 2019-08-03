#include <stdio.h>
#include <stdlib.h>

const int SIZE = 8;

int board[SIZE][SIZE];
int results_count = 0;
int a[16*92];
int a1[92][16];
int s1[SIZE][2];
int s1ch[SIZE*2];
int count;
void sort(){
	int r=0;
	int c, c1;
	for ( int i = 0; i < SIZE-1; i ++ ){
 	 for (int j = SIZE-2; j >= i; j -- ){
 	 if ( s1[j][0] > s1[j+1][0] )
 	 	 {
 	 	 	 c = s1[j][0];
 	 	 	 c1 = s1[j][1];
			 s1[j][0] = s1[j+1][0];
			 s1[j][1] = s1[j+1][1];
 	 	 	 s1[j+1][0] = c;
 	 	 	 s1[j+1][1] = c1;
 	 	 	 }
	  }}
	for(int i=0;i<SIZE;i++){
			   s1ch[r]=s1[i][0];
			   r++;
			   s1ch[r]=s1[i][1];
			   r++;
	}
	
}
int random(int a){
	return rand()%a;
}

void showBoard()
{
	
    for(int a = 0; a < SIZE; a++)
    {
        for(int b = 0; b < SIZE; b++)
        {
            if(board[a][b]==-1)
            	printf("Q ");
            else {  
			printf(". ");
        }}
        printf("\n");
    }
}

int playGame(int b){
	int a[SIZE][SIZE],b1,b2,i,j,f,c;
	printf("The game is starting!");
	printf("You should put %d queens on the board.\n",SIZE);
	printf("Queens mustn't beat each other!!!\n");
	printf("Remember that queen beats all squeds vertical, horizontal and diagonal:\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			a[i][j]=0;}}
    for(i=0;i<SIZE;i++){
    	a[i][SIZE/2]=1;
    	a[i][i]=1;
    	a[SIZE-i][i]=1;
    	for(j=0;j<SIZE;j++){
    	a[SIZE/2][j]=1;
	}}
	a[SIZE/2][SIZE/2]=-1;
	
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			if(a[i][j] == -1){
			printf("Q ");}
			else if (a[i][j]==0)printf(". ");
			else printf("+ ");
		}
	printf("\n");
	}
	printf("input row (from 1 to %d) then colomn(from 1 to %d)\n",SIZE,SIZE);
	printf("GOOD LUCK!!!\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			a[i][j]=0;}}
f=0;
int h=0;
 while(f<SIZE){
	do{
	printf("Write the colomn: ");	 
	scanf("%d",&b1);
	printf("Write the row: ");	 
	scanf("%d",&b2);}while(b1<1||b2<1||b1>SIZE||b2>SIZE);
	b1=b1-1;
	b2=b2-1;
	int k=b1;
	int l=b2;	
	if(a[l][k]==0){
	for(i=0;i<SIZE;i++){
		a[l][i]=1;
		a[i][k]=1;
		if(k+i<SIZE&&l+i<SIZE){
			if(a[l+i][k+i]!=-1){
		a[l+i][k+i]=1;}}
		if(l-i>=0&&k-i>=0){
			if(a[l-i][k-i]!=-1){
			a[l-i][k-i]=1;}}
		if(l-i>=0&&k+i<SIZE){
			if(a[l-i][k+i]!=-1){
				a[l-i][k+i]=1;}}
		if(k-i>=0&&l+i<SIZE){
			if(a[l+i][k-i]!=-1){
			a[l+i][k-i]=1;}
		}
	}
		a[l][k]=-1;
		s1[h][0]=k;
		s1[h][1]=l;
		h++;
		count=h;}
	else {c=0;
	sort();
	return c;}
	
 f++;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			if(a[i][j] == -1){
			printf("Q ");}
			else if (a[i][j]==0)printf(". ");
			else printf("+ ");
		}
		printf("\n");
	}}
	c = 1;
	return c;
}
void theBOARD(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			board[i][j]=0;
		}
	}
}
void readSolves(){
	FILE *fr;
	fr = fopen("scan.txt","r");
	for(int i=0;i<16*92;i++){
	fscanf(fr,"%d",&a[i]);
	}
	fclose(fr);
	int k=0;
	for(int i=0;i<92;i++){
		for(int j=0;j<16;j++){
			a1[i][j]=a[k];
			k++;
		}
	}
}
void putONtheBOARD(){
	int b,k,j,c,sol[10];
	int min=4,r=0;
	for(j=0;j<92;j++){
		c=0;
	for(int i=0; i<count*2;i++){
		if (s1ch[i]-a1[j][i]==0){
			c++;
		}
		else if(abs(s1ch[i]-a1[j][i])<min){
			c++;
		}
				}
      if (c==count*2){
      	sol[r]=j;
      	r++;
	  }
	}
	j=sol[0];
	for(int i=0; i<16;i=i+2){
		k=a1[j][i];
		b=a1[j][i+1];
		board[b][k]=-1;
	}
}
void showRezults(){
	theBOARD();
	readSolves();
	putONtheBOARD();
	showBoard();
	
}
void stoTHEboard(){
	for(int i=0; i<SIZE;i++){
		for(int j=0;j<2;j++){
			s1[i][j]=100;
		}
	}
}
int main(){
	int b;
	stoTHEboard();
	b = playGame(0);
	if (b == 1){
		printf("You win!\n");
	}
	else if(b == 0){
		printf(" Unfortunatly, you lose!\n");
		printf("We will show you a possable solution:\n");
		showRezults();
		printf("Write any number to stop the program ");
		int stop;
		scanf("%d",&stop);}
    return 0;
}