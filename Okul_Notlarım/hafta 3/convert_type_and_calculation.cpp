#include <stdlib.h>
#include<stdio.h>
#include<math.h> // floor ve ceil i�in laz�m floor yukar� yuvarlar ceil a�a��
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Turkish");
	float x,y;
	printf("aralar�nda bosluk olack sek�ld iki say� g�r�n�z: ");
	scanf("%f%f",&x, &y); // girerken say�y� , le gir . ile degil
	printf("\n%f %f ", x,y);
	printf("\nGirdiginiz say�lar toplam�: %.2f",(x+y));
	printf("\nGirdiginiz say�lar fark�: %.2f",(x-y));
	printf("\nGirdiginiz say�lar b�l�m�: %.2f",(x/y));
	printf("\nGirdiginiz say�lar carp�m�: %.2f",(x*y));
	printf("\nGirdiginiz say�lar modu: %d", (int)(floor(x)) % (int)(floor(y))); // floor ile a�ag� yuvarlad�k bu b�ze double sonuc ver�r bunuda �nte cev�rd�k ki % kullanab�lel�m

	system("pause");
	return 0;
	
}
