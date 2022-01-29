#include<stdio.h>
int main()
{
	char kelime[500];
	long int kelime_sayac=0,harf_sayac=0;
	int i=0;
	printf("Bir metin giriniz (Cumle sonuna bosluk birakiniz ya da nokta koyunuz.):\n");
	gets(kelime);
	for(i=0;i<500;i++)
	{
		if(kelime[i]!=NULL)
		{
			if(kelime[i]==' '||kelime[i]=='.')
			{
				kelime_sayac++;
				printf("%d. kelimenin harf sayisi ---> %d'dir.\n",kelime_sayac,harf_sayac);
				harf_sayac=0;				
			}
			else
			{
				harf_sayac++;
			}
		}
		else
		{
			break;
		}	
	}
	return 0;
}

