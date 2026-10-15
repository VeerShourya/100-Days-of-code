#include <stdio.h>
int main(){
int arr[100][100];
int col,row,i,j;
printf("Enter the number of rows & columns:");
scanf("%d %d",&row,&col);
 for(i=0;i<=row;i++){
    for(j=0;j<=col;j++){
        scanf("%d %d",arr[i][j]);
    }
 }
 for(i=0;i<=row;i++){
    for(j=0;j<=col;j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
 }
 return 0;

}
