#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int sum = 0;
  for(i = 0 ; i<1000 ; i++){
    if(i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  //printf("multiples of 3 & 5: %d\n" , sum);

  int count = 0;
  int a = 1;
  int b = 1;
  while(b < 4000000){
    if (b % 2 == 0){
      count += b;
    }
    int c = a + b;
    a = b;
    b = c;
    //printf("a: %d, b: %d, count: %d \n", a , b , count);
  }
  printf("even fibonacci numbers: %d\n",count);
}
