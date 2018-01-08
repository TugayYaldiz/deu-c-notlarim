# C Programlama dersi notları

Kodlarken commentlere neyin ne olduğuna dair kendimce notlar almıştım, bu yüzden Türkçe kaynak olarak faydası olabileceğini düşündüğümden paylaşmak istedim.

Kullandığım IDE <a href="http://www.bloodshed.net/devcpp.html" target="_blank">Dev-C++ 5.11</a>

### Dev-C++ Default Source ayarım

```c
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> //getch için falan
#include <string.h>
#include <ctype.h> // toupper tolower ... için
#include <math.h> // math işlemleri icin 
#include <time.h> // zaman 
#include <locale.h> // türkce karakter için 
#include <unistd.h> /* sleep için while dongusunu 1 sn bekletmek için  lazım*/
#include <windows.h> /* Sleep() için büyük s ile bu miliseconds tarzında bekletıyo yanı 1 sn ıcın (1000)*/

int main() {
    //setlocale(LC_ALL, "Turkish");


    printf("\n");
    system("pause");
    return 0;
    /* Sleep(1000); // 1 sn bekletir (ms için) */
    /* sleep(1); // 1 sn bekletir */

}
```
