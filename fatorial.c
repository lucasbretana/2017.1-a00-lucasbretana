#include "fatorial.h"

int fatorial(int x){
  /* Escreva seu código aqui */

  if( x <= 0) return -1;
  
  int res = x * fatorial(x-1);
  
  if(res < 0) 
    return -1*res;
  else
    return res;
}
