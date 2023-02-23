#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){

int i, j, k, sayac = 0;
srand(time(NULL));

  int dizi[5][5];

  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      dizi[i][j] = rand()%10;
      printf("%d\t",dizi[i][j]);
    }
    printf("\n");
  }
  

  for(k = 0; k < 10; k ++){
    for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++){
        if(dizi[i][j] == k){
          sayac++;
        }
      }
    }
    printf("%d. eleman '%d' defa gecmistir.\n", k, sayac);
    sayac = 0;
  }
    return 0;
  }
