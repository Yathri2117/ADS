#include<stdio.h>
#include<conio.h>
void main(){
int count;
int matrix[5][5]={
    {1,1,0,0,0},
    {0,1,0,0,1},
    {1,0,0,1,1},
    {0,0,0,0,0},
    {1,0,1,0,1}
    };
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d\t",matrix[i][j]);
    }
     printf("\n");
}
printf("\nEnter the no of ones in the matrix");
scanf("%d",&count);
}

