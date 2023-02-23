#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//copyright by MERT PALAOÐLU;
//Saymaya 0. sutun 0.satýrdan baþla.
int sayiBul(int dizi[][10],int satir_1,int satir_2,int sutun_1,int sutun_2,int aranilanSayi){
	int i,j;
	int sayac=0;
	for(i=satir_1;i<satir_2;i++){
		for(j=sutun_1;j<sutun_2;j++){
			if(dizi[i][j]==aranilanSayi){
				sayac++;
			}
		}
	}
	return sayac;
}
int main(){
	srand(time(NULL));
	int dizi[10][10];
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			dizi[i][j]=rand()%10;
			printf("%d ",dizi[i][j]);
		}
		printf("\n");
	}
	int satir_1,satir_2,sutun_1,sutun_2;
	satir_1=2;
	satir_2=5;
	sutun_1=3;
	sutun_2=6;
	int aranilanSayi=1;
	int sayac=sayiBul(dizi,satir_1,satir_2,sutun_1,sutun_2,aranilanSayi);
	printf("Aranilan Aralik=Satir: %d-%d\nSutun: %d-%d\n",satir_1,satir_2,sutun_1,sutun_2);
	printf("Aranilan %d sayisi= %d defa gecmistir.",aranilanSayi,sayac);
	return 0;
}
