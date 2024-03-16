#include<stdio.h>
int main(){
    int i,j,x=5,y=1;
    while(x>0){
        for(i=0;i<x;i++){
            printf(" ");
        }x--;
        for(j=0;j<y;j++){
            printf("*");
        }y=y+2;
        printf("\n");
    }
    
    x=2;y=7;
    while(y>0){
        for(i=0;i<x;i++){
            printf(" ");
        }x++;
        for(j=0;j<y;j++){
            printf("*");
        }y=y-2;
        printf("\n");
    }
    
}