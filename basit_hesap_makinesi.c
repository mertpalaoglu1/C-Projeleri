#include <stdio.h>
#include <stdlib.h>
//Copyright by Mert PALAOGLU 
int toplamaIslemi(int sayi1,int sayi2){
	int islem_sonuc= sayi1+sayi2;
	return islem_sonuc;}

int cikarmaIslemi(int sayi1,int sayi2){
	int islem_sonuc= sayi1-sayi2;
	return islem_sonuc;}

int carpmaIslemi(int sayi1,int sayi2){
	int islem_sonuc= sayi1*sayi2;
	return islem_sonuc;}
	
int bolmeIslemi(int sayi1, int sayi2){
	int islem_sonuc= sayi1/sayi2;
	return islem_sonuc;}

int main(){
	char islem_secimi;
	int sayi1,sayi2;
	int final_sonuc=1;
	int i;
	printf("islem seciniz: (+,-,*,/): ");
	scanf("%c",&islem_secimi);
 
  while(islem_secimi!='+' && islem_secimi!='-' && islem_secimi!='/' && islem_secimi!='*'){
		printf("islem seciminiz hatali. ");
		printf("islem seciniz: (+,-,*,/): ");
		scanf(" %c",&islem_secimi);
	}

	printf("1. sayiyi giriniz: ");
	scanf("%d",&sayi1);
	printf("2. sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	
	if (islem_secimi== '+'){
		final_sonuc=toplamaIslemi(sayi1,sayi2);
	}	
	if (islem_secimi== '-'){
		final_sonuc=cikarmaIslemi(sayi1,sayi2);
	}
	if (islem_secimi== '*'){
		final_sonuc=carpmaIslemi(sayi1,sayi2);
	}	
	if (islem_secimi== '/'){
		final_sonuc=bolmeIslemi(sayi1,sayi2);
	}
	
	printf("Isleminizin sonucu: %d",final_sonuc);
	
	return 0;
}
