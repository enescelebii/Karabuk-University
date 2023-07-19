#include<stdio.h>
#include<stdlib.h>				// x x *
#include<time.h>				// * x x
#include<string.h>				// x x x
#include<math.h>
#include<unistd.h>
int main(){
	int bomb_count=0,x,y,bcount=0,success=0;
	srand(time(NULL));
	char field[3][3]= {'x','x','x','x','x','x','x','x','x'};
	printf("Bu program mineSweeper oynar\n3x3luk bir tarlada 3 mayin bulunmakta konumlari x ve y olarak girerek mayinlardan kacin\n");
	while(1){
		if(bomb_count==3){
			break;
		}
		x=rand()%3;
		y=rand()%3;
		if(field[x][y]!='*'){
			field[x][y]='*';
			bomb_count++;
		}
	}
	while(1){
		if(success==6){
			system("cls");
			printf("\n***KAZANDIN***\n");
			return 0;
		}
		sleep(1);
		printf("\nBir konum seciniz\nx:");
		scanf("%d",&x);
		printf("y:");
		scanf("%d",&y);
		if(field[x][y]=='*'){
			printf("\n***PATLADIN***\n");
			
			
			for(int i=0;i<x;i++)
				field[i][y]='*';
			for(int i=0;i<x;i++)
				field[x][i]='*';
				
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c",field[i][j]);
				}
				printf("\n");
			}
			return 0;
		}
		else if(field[x][y]!='*'){
			field[x][y]='+';
			success++;
			if(field[x+1][y]=='*'&&field[x+1][y]!='+')
				bcount++;
			if(field[x-1][y]=='*'&&field[x+1][y]!='+')
				bcount++;
			if(field[x][y+1]=='*'&&field[x+1][y]!='+')
				bcount++;
			if(field[x+1][y-1]=='*'&&field[x+1][y]!='+')
				bcount++;
			printf("etrafinda %d tane bomba var\n",bcount);
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c",field[i][j]);
				}
				printf("\n");
			}
			bcount=0;
		}
	}
	
	
	
	
	
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%c",field[i][j]);
		}
		printf("\n");
	}
	return 0;
}