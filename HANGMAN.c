#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HANGMAN (ADAM ASMACA ) OYUNU 
// Doðukan Baygut 


char kelimeler[][20] = {"DOGUKAN",  "BAYGUT", "ELEKTRIK", "ELEKTRONIK", "MUHENDIS", "RAM", "CPU", "HARDDISK", "ELMA", "ARMUT" }   ; 
char *kelime;
char *tahmin; 
int size; 


void kelimeOlustur() 
{
	int indis= rand() %10; 
	kelime= kelimeler[indis];
	size= strlen(kelime) ; 	
	tahmin= (char*)	 malloc( size+1 * sizeof(char) ) ; 
	int i=0; 
	while( i<size)
	{
		tahmin[i]= '-'; 
		i++; 		
	}
	tahmin[i] = '\0' ; 
	
//	printf("kelime       :  %s \n", kelime) ; 
	printf("uzunluk      :  %d \n", size) ; 
	printf("tahmininiz   :  %s \n", tahmin) ; 
}

int harfKontrol( char harf ) 
{
	int i=0, sonuc=0; 
	while( i<size )
	{
		if( harf == kelime[i] ) 
		{
			tahmin[i] = harf; 
			sonuc=1; 
		}

		i++; 
	}	
	printf("\n"); 
	return sonuc; 	
}
int kelimeKontrol() 
{
	int i=0;
	int sonuc=1;  	
	while( i<size )
	{
		if( tahmin[i] =='-' )
		{
			sonuc=0;			
		}
		i++; 
	}
	printf("tahmininiz   : %s\n", tahmin) ;  
	
	return sonuc; 	
}

void sehpaCiz(int n ) 
{
	system("cls"); 
	printf("\n\n\t\tHANGMAN OYUNU \n\n")   ; 
	
		if(n==2 )
	{		
		printf("\t\t----------\n") ; 			
	}
	
		if(n==3 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==4 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==5 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==6 )
	{
		
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n==7 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n== 8 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
		if(n== 9 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t    /|\\   |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
	}
	
	
	if(n== 10 )
	{
		printf("\t\t__________\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t     O    |\n") ; 
		printf("\t\t    /|\\   |\n") ; 
		printf("\t\t     |    |\n") ; 
		printf("\t\t    / \\   |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t          |\n") ; 
		printf("\t\t----------\n") ; 			
		printf("\t\tASILDINIZ !!! \n"); 
		printf("kelimemimiz  : %s", kelime); 
		
	}
	
	printf("\n\n")	 ; 
}

int main() 
{
	system("cls"); 
	printf("\n\n\t\tHANGMAN OYUNU \n\n")   ; 
	srand(time(0)) ; 
	kelimeOlustur(); 
	char harf; 
	int adet=0, sonuc1, sonuc2 ; 
	while( adet<10  )
	{
		adet++; 
		printf("harf girin   : ") ;scanf(" %c", &harf) ; 
		if(harfKontrol(harf) )  
		adet--; 
		
		sehpaCiz(adet ); 
		
		if(kelimeKontrol ()  )
		{
			printf("TEBRIKLER KAZANDINIZ \n") ; 
			break; 			
		}				
	}
	
	return 0; 
}
