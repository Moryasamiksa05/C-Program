#include<stdio.h>
void printadress(int n);

int main(){

    int n  = 4;
    printadress(n);
    printf("adress of n is :%d\n",&n);
    return 0;





}
void printadress(int n){

    printf(" adress  of n is : %u\n" ,&n);
}