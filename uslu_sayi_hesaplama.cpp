#include <stdio.h>
#include <stdlib.h>

int main(){
int taban,kuvvet,i,sonuc=1;

printf("Tabani giriniz:");
scanf("%d",&taban);

printf("Kuvveti giriniz:");
scanf("%d",&kuvvet);
	
for (i=0;i<kuvvet;i++){
	sonuc*=taban; //sonuc=sonuc*taban;
}	

	printf("%d",sonuc);
return 0 ;	
}
