// Soal 1
#include <stdio.h>

// Definisi fungsi rekursif
long faktorial(int n) {
    // Berhenti jika n adalah 0 atau 1
    if (n <= 1) {
        return 1;
    }
    // n dikali dengan faktorial sebelumnya
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka;
    printf("Input : ");
    scanf("%d", &angka);

    printf("Output: %ld\n", faktorial(angka));

    return 0;
}

// Soal 2
#include <stdio.h>

// Fungsi rekursif untuk deret kuadrat kumulatif
int deret(int n) {
    // Base Case
    if (n == 1) {
        return 1;
    } 
    // Recursive Step
    else {
        return deret(n - 1) + (n * n);
    }
}

int main() {
    int n;
    printf("Input  : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Input harus lebih besar dari 0\n");
    } else {
        printf("Output : %d\n", deret(n));
    }

    return 0;
}

// Soal 3
#include <stdio.h>

// Fungsi menggunakan pointer (*) agar bisa mengubah nilai di fungsi main
void cariMaxMin(int arr[], int n, int *max, int *min) {
    // Inisialisasi: anggap elemen pertama adalah yang terbesar & terkecil
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i]; // Update rekor terbesar
        }
        if (arr[i] < *min) {
            *min = arr[i]; // Update rekor terkecil
        }
    }
}

int main() {
    int n;
    printf("Input N: ");
    scanf("%d", &n);

    // Mengisi array
    int angka[n];
    printf("Masukkan %d angka: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &angka[i]);
    }

    int max, min;
    // Memanggil fungsi dengan alamat (&) variabel
    cariMaxMin(angka, n, &max, &min);

    printf("Output: max: %d, min: %d\n", max, min);

    return 0;
}