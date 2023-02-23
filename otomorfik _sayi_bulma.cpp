#include <stdio.h>
#include <stdlib.h>
//mert palaoglu. 
int main()
{
	int s1,s2;
	
	printf("-Otomorfik Sayi bulma-\n");

	printf("iki basamakli bir sayi giriniz:");
	scanf("%d",&s1);
	s2=s1*s1;
	printf("Sayinin karesi:%d\n", s2);
	
	if(s2%100==s1)
	{
		printf("%d otomorfik bir sayidir.",s1);
	
	}
	else {
		printf("%d otormorfik bir sayi degildir.",s1);
	}
	
	return 0;
}

