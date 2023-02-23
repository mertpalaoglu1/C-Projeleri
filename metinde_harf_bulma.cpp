#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){ //hocaya sor.
	char metin [15];
	int varmi=0;
	printf("Bir metin giriniz: ");
	gets(metin); //dizilerde &'a gerek yok.
	
	char karakter; 
	printf("Bir karakter giriniz: ");
	scanf("%c", &karakter);// char ile iþlem yaparken tek karakter ise %c kullanýlýr.
	
	int i=0;
	for (i=0; i<strlen(metin); i++){
		
		if (metin[i]==karakter){
			varmi++;
		 }

	}
	printf( "%d tane mevcuttur.",varmi);
			
return 0;	
}
