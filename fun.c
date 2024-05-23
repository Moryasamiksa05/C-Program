#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter f for french & enter i for indian: ");
    char ch;
    scanf("%ch", &ch);

    if(ch =='i'){

        namaste();
    } else{

        bonjour();
    }
    return 0;

}
void namaste(){

    printf("namaste\n");

}
void bonjour(){
    printf("bonjour\n");
}