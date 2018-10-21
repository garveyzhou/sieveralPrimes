#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

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
	x+= i;
      }
    }
    i += 2;
  }
  free(arr);
}

      
