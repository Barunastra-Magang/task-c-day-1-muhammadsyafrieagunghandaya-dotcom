// Soal 1
#include <stdio.h>

int main() {
    int num, originalNum, remainder, result = 0;

    printf("Masukkan bilangan (0-999): ");
    scanf("%d", &num);

    originalNum = num;

    // Proses memisahkan digit dan menghitung pangkat 3
    while (originalNum != 0) {
        // Mengambil digit terakhir
        remainder = originalNum % 10;
        
        /* Menambahkan hasil pangkat 3 ke variabel result
        Setelah iterasi berlanjut hasil pangkat 3 (digit terakhir) ditambahkan ke hasil pangkat digit sebelumnya*/
        result += remainder * remainder * remainder;
        
        // Menghapus digit terakhir dari bilangan asli
        originalNum /= 10;
    }

    // Cek apakah hasil penjumlahan sama dengan input awal
    if (result == num)
        printf("%d merupakan Bilangan Armstrong.\n", num);
    else
        printf("%d bukan Bilangan Armstrong.\n", num);

    return 0;
}

// Soal 2
#include <stdio.h>

void terbilang(int n) {
    char *satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", "Sebelas"};

    if (n == 0) {
        return;
    } else if (n < 12) {
        printf("%s ", satuan[n]);
    } else if (n < 20) {
        terbilang(n - 10);      // Mengambil angka satuan
        printf("Belas ");       // Menambahkan kata "Belas" setelah menemukan karakter yang cocok
    } else if (n < 100) {
        terbilang(n / 10);      // Memecah angka puluhan dengan pembagian integer sepuluh
        printf("Puluh ");       // Menambahkan kata "Puluh" setelah menemukan karakter satuan yang cocok
        terbilang(n % 10);      // Mengambil angka satuan dengan modulo
    } else if (n < 200) {
        printf("Seratus ");     // Menambah kata "Seratus" untuk setiap angka seratusan
        terbilang(n - 100);     // Mengambil puluhan dengan pengurangan 100, dan melakukan rekursi
    } else if (n < 1000) {
        terbilang(n / 100);     // Memecah angka ratusan dengan pembagian integer
        printf("Ratus ");       // Menambah kata "Ratus" setelah menemukan karakter satuan yang cocok      
        terbilang(n % 100);     // Memecah angka puluhan dengan sisa bagi, sehingga akan melakukan rekursif rentang puluhan 
    }
}

int main() {
    int angka;
    printf("Input : ");
    scanf("%d", &angka);

    printf("Output: ");
    if (angka == 0) {
        printf("Nol");
    } else {
        terbilang(angka);
    }
    printf("\n");

    return 0;
}

// Soal 3
#include <stdio.h>

int main() {
    // Look-up Table untuk angka 0-9
    // Kolom:  a, b, c, d, e, f, g
    int segmentMap[10][7] = {
        {1, 1, 1, 1, 1, 1, 0}, // 0
        {0, 1, 1, 0, 0, 0, 0}, // 1
        {1, 1, 0, 1, 1, 0, 1}, // 2
        {1, 1, 1, 1, 0, 0, 1}, // 3
        {0, 1, 1, 0, 0, 1, 1}, // 4
        {1, 0, 1, 1, 0, 1, 1}, // 5
        {1, 0, 1, 1, 1, 1, 1}, // 6
        {1, 1, 1, 0, 0, 0, 0}, // 7
        {1, 1, 1, 1, 1, 1, 1}, // 8
        {1, 1, 1, 1, 0, 1, 1}  // 9
    };

    int i1, i2, i3, i4;
    printf("Input 4 bit (pisah spasi): ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    // Konversi biner ke desimal
    // Rumus: (i1 * 2^3) + (i2 * 2^2) + (i3 * 2^1) + (i4 * 2^0)
    int decimal = (i1 * 8) + (i2 * 4) + (i3 * 2) + (i4 * 1);

    if (decimal >= 0 && decimal <= 9) {
        printf("Output: ");
        for (int j = 0; j < 7; j++) {
            printf("%d ", segmentMap[decimal][j]);
        }
    } else {
        printf("Hanya mendukung angka 0-9 (Biner 0000 - 1001)");
    }

    printf("\n");
    return 0;
}