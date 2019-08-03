#include <stdio.h>

const int SIZE = 10;

int board[SIZE][SIZE];
int results_count = 0;

/*void saveRezults(){
	FILE *pf = fopen("output.txt", "a");
	 for(int a = 0; a < SIZE; a++)
    {
        for(int b = 0; b < SIZE; b++)
        {	if(board[a][b]==1)
			fprintf(pf,"%d-%d\n",a,b) ;
		}}
		fclose(pf);
}*/

void showBoard()
{
	
    for(int a = 0; a < SIZE; a++)
    {
        for(int b = 0; b < SIZE; b++)
        {
            if(board[a][b]==0)
            	printf(". ");
            else {  
			printf("Q ");
        }}
        printf("\n");
    }
}


bool tryQueen(int a, int b) {
    for(int i = 0; i < a; i++)
    {
        if(board[i][b])
        {
            return false;
        }
    }

    for(int i = 1; i <= a && b-i >= 0; i++)
    {
        if(board[a-i][b-i])
        {
            return false;
        }
    }
    
    for(int i = 1; i <= a && b+i < SIZE; i++)
    {
        if(board[a-i][b+i])
        {
            return false;
        }
    }

    return true;
}

void setQueen(int a)
{
    if(a == SIZE)
    {
        showBoard();
        //saveRezults();
        printf("Result %d #\n\n",++results_count);
        return; 
    }

    for(int i = 0; i < SIZE; i++)
    {
        if(tryQueen(a, i))
        {
            board[a][i] = 1;
            setQueen(a+1);
            board[a][i] = 0;
        }
    }

    return;
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
	printf("input colomn (from 1 to %d) then row (from 1 to %d)\n",SIZE,SIZE);
	printf("GOOD LUCK!!!\n");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			a[i][j]=0;}}
f=0;
 while(f<SIZE){
 	do{
	printf("Write the colomn: ");	 
	scanf("%d",&b1);
	printf("Write the row: ");	 
	scanf("%d",&b2);}while(b1<1||b2<1||b1>SIZE||b2>SIZE);
	b1=b1-1;
	b2=b2-1;
	if(a[b2][b1]==0){
	for(i=0;i<SIZE;i++){
		a[b2][i]=1;
		a[i][b1]=1;
		if(b1+i<SIZE&&b2+i<SIZE){
			if(a[b2+i][b1+i]!=-1){
		a[b2+i][b1+i]=1;}}
		if(b2-i>=0&&b1-i>=0){
			if(a[b2-i][b1-i]!=-1){
			a[b2-i][b1-i]=1;}}
		if(b2-i>=0&&b1+i<SIZE){
			if(a[b2-i][b1+i]!=-1){
				a[b2-i][b1+i]=1;}}
		if(b1-i>=0&&b2+i<SIZE){
			if(a[b2+i][b1-i]!=-1){
			a[b2+i][b1-i]=1;}
		}
	}
		a[b2][b1]=-1;}
	else {c=0;
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

int main(){
	int b;
	b = playGame(0);
	if (b == 1){
		printf("You win!\n");
	}
	else if(b == 0){
		printf(" Unfortunatly, you lose!\n Write '1' and we will show you all possable solutions (it may take some time), write '0' and stop the game. \n");
		int show;
		do{
		scanf("%d",&show);
		}while((show!=1)&&(show!=0));
		if(show==1){
			printf("Ok. We will show you all possable solutions:\n");
			setQueen(0);
			int stop;
			printf("Thank you for the game. Write any number to finish it: ");
			scanf("%d",&stop);
		}}
    return 0;
}