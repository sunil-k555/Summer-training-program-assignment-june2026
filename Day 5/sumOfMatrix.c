#include<stdio.h>
#include<conio.h>
int main(){
    int arr1[][2]={{1,2},{3,5},{5,4},{7,8}};
    for(int i =0; i<4;i++){
        for(int j =0; j<2;j++){
            printf("%d ",arr1[i][j]);
            
        }
        printf("\n");
    }
    return 0;
}