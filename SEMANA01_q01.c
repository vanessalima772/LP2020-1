#include <stdio.h>
int main(void){

float num1,num2,desc;

scanf("%f",&num1);
scanf("%f",&num2);
scanf("%f",&desc);

if(num1 <= 100){
  printf("R$ %.2f",num1);
}
if(num2 >= 100 && num2 <= 200){
  printf("R$ %.2f",num2);
}
desc = num2 * (5/100) ; 
}