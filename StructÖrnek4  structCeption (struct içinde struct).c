#include <stdio.h> //struct 08.v2 bomba kod.
#include <stdlib.h>
#include <math.h>
#define SIZE 2
typedef struct{
	int notlar [3];
}ogrNot;

typedef struct{
	long telefon;
	char eposta [30];
}iletisim;

typedef struct{
	int no;
	char ad[20];
	char soyad[20];
	int cinsiyet;
	iletisim ilt; //struct içinde struct
	ogrNot notlar; //struct içinde struct
}ogrenci;

float ortalama(ogrenci o [SIZE]); //Fonksiyon tanýmý

int main(){
	int i;
	ogrenci liste [SIZE]; //struct ogrenci tipinde tutacak 2 tane öðrenciyi.
	float sonuc;
	for(i=0;i<SIZE;i++){
		printf("\n%d. Ogrenci no:",i+1);
		scanf("%d",&liste[i].no);
		printf("\n %d. Ogrenci adi:",i+1);
		scanf("%s",liste[i].ad);
		printf("\n %d. Ogrenci soyadi:",i+1);
		scanf("%s",liste[i].soyad);
		printf("\n %d. Ogrenci Cinsiyet:",i+1);
		scanf("%d",&liste[i].cinsiyet);
		
		printf("\n %d. Ogrencinin Telefonu:",i+1);
		scanf("%ld",&liste[i].ilt.telefon);
		printf("\n %d. Ogrencinin Eposta Adresi:",i+1);
		scanf("%s",liste[i].ilt.eposta);
		
		printf("\n %d. Ogrencinin Vize notu:",i+1);
		scanf("%d",&liste[i].notlar.notlar[0]);
		printf("\n %d. Ogrencinin Proje notu:",i+1);
		scanf("%d",&liste[i].notlar.notlar[1]);
		printf("\n %d. Ogrencinin Final notu:",i+1);
		scanf("%d",&liste[i].notlar.notlar[2]);
		}
		sonuc= ortalama (liste); //fonksiyona gönderdik.
		printf("%f",sonuc);
		
		return 0;
	}
	
float ortalama(ogrenci o[]){
		int i,j;
		float sonuclar[SIZE];
		float toplam=0;
		for(i=0;i<SIZE;i++){
			for(j=0;j<3;j++){
				toplam+=o[i].notlar.notlar[j];
			}	
			sonuclar[i]=toplam;
		}
	return sonuclar[0]/3;
}
