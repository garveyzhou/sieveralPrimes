#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int main(){
  printf("the 25th prime number: %d \n",sieve(25));
  printf("the 100000th prime number: %d \n",sieve(100000)); 
  return 0;
}
