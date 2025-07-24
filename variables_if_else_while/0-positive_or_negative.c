#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    // Rastgele sayı üretimi için srand kullanılıyor, buna dokunma
    srand(time(NULL));
    n = rand() % 201 - 100; // Örnek: -100 ile 100 arasında sayı alıyor

    // Sayıyı yazdır
    printf("%d ", n);

    // Sayının pozitif, negatif veya sıfır olduğunu kontrol et ve yazdır
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}
