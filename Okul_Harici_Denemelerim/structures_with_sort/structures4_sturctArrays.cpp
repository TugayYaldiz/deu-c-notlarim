#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch i�in falan
#include <string.h>
#include <ctype.h> // toupper tolower falan i�in
#include <math.h> // math i�lemleri icin falan
#include <time.h> // rand i�in falan
#include <locale.h> // t�rkce karakter i�in falan
#include <unistd.h> /* sleep i�in while dongusunu 1 sn bekletmek i�in falan laz�m*/

struct Ogrenci {
	char isim[20];
	char soyisim[20];
	int numara;
};

int main() {
	setlocale(LC_ALL, "Turkish");

	struct Ogrenci ogrenciler[3]; // ogrenciler i�inde Ogrenci yap�s�nda olan 3 nesnem�z var

	int i;
	
	for (i=0; i < 3; i++) {
		
		printf("%d. o�rencinin bilgilerini girin\t",i+1);
		puts("�rn: isim bo�luk soyisim bo�luk numaras�");
		scanf("%s %s %d", &ogrenciler[i].isim, &ogrenciler[i].soyisim, &ogrenciler[i].numara);	
		
	}
	
	for (int i=0; i < 3; i++) { // struct buble sort
		
		for(int j=1; j < 3 - i ;j++) {
			
			if (ogrenciler[j-1].numara > ogrenciler[j].numara) {
				struct Ogrenci temp = ogrenciler[j]; // ge�ici yap� olusturduk
				ogrenciler[j] = ogrenciler[j-1];
				ogrenciler[j-1] = temp;
			}
			
		}
	}
	puts("Numara s�ras�na g�re s�ralanm�s yeni ��renci listesi");
	for (i=0; i < 3; i++) {
		
		printf("%d. ��renci bilgileri = %s %s %d\n", i+1, ogrenciler[i].isim, ogrenciler[i].soyisim, ogrenciler[i].numara);	
		
	}







	printf("\n");
	system("pause");
	return 0;
	/* sleep(1); // 1 sn bekletir */

}

