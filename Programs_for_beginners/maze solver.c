#include <stdio.h>
#include <stdlib.h>
#include <time.h>							//yusuf emre bilginden baya yardim aldim	
#include <string.h>
#include <math.h>
#include <unistd.h>
#define M 6
#define N 12
int path[M][N] ={};
void findPath(int,int,int[][N]);
void printPath(void);
int main(){
	
	int i, j;
	int array[M][N] = {		{1,0,1,1,1,0,0,1,0,1,1,0},
							{1,0,1,1,1,1,1,0,1,0,0,0},
							{1,1,1,1,1,1,1,0,1,0,1,0},
							{0,1,0,1,0,1,0,1,1,1,1,1},
							{0,1,0,1,1,1,1,1,0,0,0,1},
							{1,1,1,0,1,1,1,1,1,1,1,1}		};
	
	printf("MxN (%dx%d):\n\n",M,N);	
	for(i=0 ; i<M ; i++){
		for(j=0 ; j<N ; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}
	findPath(0,0,array);	
	printPath();
	
	return 0;
}

void findPath(int i, int j, int arr[][N]){
	static int mincost,maxcost = M*N;
	arr[i][j]=2;
	mincost++;
	if(arr[i+1][j]== 1 && arr[i+1][j]!=2){
		findPath(i+1,j,arr);
	}else 0;
	if(arr[i][j+1]== 1 && arr[i][j+1]!=2){
		findPath(i,j+1,arr);
	}else 0;
	if(arr[i-1][j]== 1 && arr[i-1][j]!=2){
		findPath(i-1,j,arr);
	}else 0;
	if(arr[i][j-1]== 1 && arr[i][j-1]!=2){
		findPath(i,j-1,arr);
	}else 0;
	if(mincost<maxcost && ( i==M-1 && j==N-1)){
		maxcost=mincost;
		for( i=0;i<M;i++)
			for( j=0;j<N;j++)
				path[i][j] = arr[i][j];
		mincost = 0;
	}
	mincost--;
	arr[i][j] = 1 ;
}
void printPath(){
	
	int i, j;
	printf("\n\nSHORTEST PATH:\n\n");
	for(i=0 ; i<M ; i++){
		for(j=0 ; j<N ; j++)
			(path[i][j]==2) ? printf("%c ",250):printf("%d ",path[i][j]);
		printf("\n");	
	}
}