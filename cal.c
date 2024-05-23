#include<stdio.h>
 
 void calculateprice(float  value);

 int main(){
    float value=100.0;
    calculateprice(value);

    return 0;
 }

 void calculate(float value){
    value=value+ (0.18*value);
    printf("final price is: %f", value);
 }