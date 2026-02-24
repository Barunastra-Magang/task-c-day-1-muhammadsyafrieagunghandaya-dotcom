// Soal 1
#include <stdio.h>

int main() {
    int init_year, year;
    printf("Masukkan tahun lahir : ");
    scanf("%d", &init_year);
    printf("Masukkan tahun sekarang : ");  
    scanf ("%d", &year);
    printf("Umur anda : ");
    printf("%d", year-init_year); // Menghitung selisih tahun

    return 0;
}

// Soal 2
#include <stdio.h>

int main() {
    int P, N;
    printf("Ada berapa potongan Pizza : ");
    scanf("%d", &P);
    printf("Ada berapa teman : ");
    scanf ("%d", &N);
    printf("Teman mendapat %d potong, Ghifari mendapat %d potong", P/N, P%N); // Menghitung pembagian dan sisa bagi 
    return 0;
}

// Soal 3
#include <stdio.h>

int main() {
    int a, b, c;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf ("%d", &b);
    printf("c : ");
    scanf("%d", &c);
    printf("(a+b)/c = %.2f", (float)(a+b)/c); // Perhitungan dengan hasil 2 angka desimal
    
    return 0;
}

// Soal 4
#include <stdio.h>

int main() {
    int nilai[5];
    int jumlah = 0;

    // Mengisi array dengan iterasi
    for(int i = 0; i < 5; i++) {
        printf("Nilai ke-%d : ", i+1);
        scanf("%d", &nilai[i]);
        jumlah += nilai[i];
    }

    printf("Jumlah = %d\n", jumlah);
    printf("Rata-rata = %.2f\n", (float)jumlah / 5);

    return 0;
}
