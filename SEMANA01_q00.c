#include <stdio.h>

int main(void) {
  int n1,n2;
  scanf("%i",&n1);
  scanf("%i",&n2);

  if(n1<n2){
   printf("%i %i",n1,n2);
  }else{
    printf("%i %i",n2,n1);

  }
  return 0;
}