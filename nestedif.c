#include<stdio.h>
int main(){
    int number;
    printf("enter number: ");
    scanf("%d", &number);

    if(number>= 0){
        printf("postive \n");
    }
        if(number % 2 == 0){
            printf("even\n");

        }else{
            printf("odd\n");

        }
        else{
            printf("nrgative\n");
        }
        return 0;
    
}