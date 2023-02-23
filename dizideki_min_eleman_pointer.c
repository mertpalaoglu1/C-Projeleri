#include <stdio.h>
#include <stdlib.h>
int* enkucukBul(int *dizi, int boyut);

int main(){
	int dizi[6]={1,2,-1,4,5,0};
	int *Pkucuk;
	Pkucuk=enkucukBul(dizi,6);
	printf("en kucuk adres= [%p]",Pkucuk);
	printf("\nadresin degeri=%d",*Pkucuk);
	return 0;
}
int* enkucukBul(int *dizi, int boyut){
	int minDeger=*dizi;
	int i;  
	for(i=1;i<boyut;i++){
		if (*(dizi+i)<minDeger){ 
			minDeger=*(dizi+i);
			}
		}
	int *pKucuk= &minDeger;
	return pKucuk;
	
}
