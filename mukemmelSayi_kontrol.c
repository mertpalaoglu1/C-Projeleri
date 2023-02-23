#include <stdio.h>
#include <stdlib.h>
//Copyright by Mert PALAOGLU 
int mukemmelMi(int sayi){
	int i;
	int sayitoplam=0;
	for(i=1;i<sayi;i++){
		if(sayi%i==0){
			sayitoplam+=i;
		}
	}
	if(sayitoplam==sayi){
			return 1;
		}
		
	else{
			return 0;
	}		
}

int main(){
	int sayi=6; //mukemmel sayi 6,28,496 vs.
	int kontrol=mukemmelMi(sayi);
	if (kontrol==1){
		printf("%d sayisi mukemmel sayidir.",sayi);
	}
	else{
		printf("%d sayisi mukemmel sayi degildir.",sayi);
	}
}
