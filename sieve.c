#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int sieve(int target){
  if(target == 1){
    return 2;
  }
  int counter = 1;
  int i = 3;
  int length =(int)(target*log(target)*1.25);
  int *arr = calloc(sizeof(int),length);
  while(i < length){
    if (arr[i] == 0){
      int x = i;
      counter ++;
      if(counter == target){
	return i;
      }
      while (x < length){
	if(x % i == 0){
	  arr[x] = 1;
	}
	x+= 2;
      }
    }
    i += 2;
  }
  free(arr);
}

int main(){
  
  printf("the 25th prime number: %d \n",sieve(25));
  
  return 0;
}
      
