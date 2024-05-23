#include<stdio.h>
float converttemp(float celcius);


int main(){
    float far= converttemp(0);
    printf("far: %f", far);
    return 0;

    return 0;
}
float converttemp(float celcius){
    int far =celcius* (9/5)+ 32;
    return  far;
}