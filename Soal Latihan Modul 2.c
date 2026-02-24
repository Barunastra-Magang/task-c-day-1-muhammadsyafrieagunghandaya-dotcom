// Soal 1
#include <stdio.h>

int main() {
    int n;

    printf("Input : ");
    scanf("%d", &n);

    // mengecek ganjil-genap dengan sisa bagi 2
    printf("Output: ");
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

// Soal 2
#include <stdio.h>

int main() {
    int n;

    printf("Input : ");
    scanf("%d", &n);

    printf("Output: ");
    // Mengecek bilangan ganjil-genap
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

// Soal 3
#include <stdio.h>

int main() {
    int n;

    printf("Input : ");
    scanf("%d", &n);

    printf("Output: ");
    for (int i = 2; i <= n; i++) {
        int isPrima = 1; // Anggap awal sebagai prima

        // Cek pembagi dari 2 sampai i/2
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrima = 0; // Ketemu pembagi lain, berarti bukan prima
             break;
            }
        }

        if (isPrima) {
            printf("* ");
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

// Soal 4
#include <stdio.h>

int main() {
    int n;

    printf("Input N (jumlah angka): ");
    scanf("%d", &n);

    int angka[n]; // Mendeklarasikan array berukuran n

    // Mengisi Array
    printf("Masukkan %d angka: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &angka[i]);
    }

    // Mencetak Terbalik dengan iterasi mundur
    printf("Output: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", angka[i]);
    }

    printf("\n");
    return 0;
}

// Soal 5
#include <stdio.h>
#include <ctype.h> // Library untuk fungsi tolower

int main() {
    char s[100];
    int a = 0, i = 0, u = 0, e = 0, o = 0;

    printf("Masukkan String: ");
    fgets(s, sizeof(s), stdin); // Membaca input hingga menemukan enter
    
    /* Melakukan perulangan selama karakter yang sedang 
    diperiksa bukan karakter kosong (null terminator), yang 
    menandakan akhir dari string.*/
    for (int j = 0; s[j] != '\0'; j++) {

        char c = tolower(s[j]);  // Mengubah karakter ke huruf kecil agar pengecekan lebih mudah

        switch (c) {
            case 'a': a++; break;
            case 'i': i++; break;
            case 'u': u++; break;
            case 'e': e++; break;
            case 'o': o++; break;
        }
    }

    printf("Output:\n");
    printf("A: %d, I: %d, U: %d, E: %d, O: %d\n", a, i, u, e, o);

    return 0;
}

// Soal 6
#include <stdio.h>
#include <ctype.h> // Library untuk toupper (kapital)

int main() {
    char s[100];
    int sign = 0; // Penanda bahwa sebuah tanda telah ditemukan

    printf("Input : ");
    scanf("%s", s);

    printf("Output: ");
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '_') {
            // Jika ketemu '_', sign bernilai 1 
            sign = 1;
        } else {
            if (sign) {
                // Cetak versi kapital apabila sign = 1 dan me "reset" sign
                printf("%c", toupper(s[i]));
                sign = 0;
            } else {
                // Cetak normal
                printf("%c", s[i]);
            }
        }
    }

    printf("\n");
    return 0;
}