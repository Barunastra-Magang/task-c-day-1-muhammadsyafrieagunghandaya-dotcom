/*
 * ============================================================
 *   MATERI DASAR PEMROGRAMAN - BAHASA C
 * ============================================================
 *
 *  DAFTAR ISI:
 *   - Modul 0 : Pengenalan Pemrograman
 *   - Modul 1 : Percabangan
 *   - Modul 2 : Perulangan, Array, dan String
 *   - Modul 3 : Fungsi dan Rekursi
 *   - Modul 4 : Pointer dan Struct
 *   - Modul 5 : Algoritma Sorting dan Searching
 *   - Materi Tambahan
 *
 *  Cara membaca file ini:
 *   Setiap modul dipisahkan oleh blok komentar besar.
 *   Kamu bisa menjalankan bagian tertentu dengan
 *   meng-uncomment fungsi yang ingin dicoba di main().
 * ============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* ============================================================
 *  MODUL 0: PENGENALAN PEMROGRAMAN
 * ============================================================
 *
 *  Topik:
 *   1. Struktur program C
 *   2. Variabel, tipe data, dan konstanta
 *   3. Input dan output dasar (printf, scanf)
 *   4. Operator (aritmatika, relasional, logika, gabungan)
 *
 * ============================================================ */

/*
 * --- TIPE DATA DASAR ---
 *
 *  Tipe     | Ukuran  | Format   | Rentang
 *  ---------|---------|----------|--------------------------
 *  int      | 4 byte  | %d       | -2.147.483.648 s/d 2.147.483.647
 *  long     | 8 byte  | %ld      | lebih besar dari int
 *  float    | 4 byte  | %f       | presisi 6-7 digit desimal
 *  double   | 8 byte  | %lf      | presisi 15-16 digit desimal
 *  char     | 1 byte  | %c / %s  | karakter ASCII (0-127)
 */

/*
 * --- VARIABEL DAN KONSTANTA ---
 *
 *  Deklarasi   : int umur;
 *  Definisi    : umur = 20;
 *  Inisialisasi: int umur = 20;
 *
 *  Konstanta:
 *    const float PI = 3.14;   // variabel konstan
 *    #define MAX 100           // makro preprocessor
 */

/*
 * --- OUTPUT: printf() ---
 *
 *  printf("teks\n");
 *  printf("int: %d\n", n);
 *  printf("float: %.2f\n", f);   // 2 angka desimal
 *  printf("char: %c\n", c);
 *  printf("string: %s\n", str);
 */

/*
 * --- INPUT: scanf() ---
 *
 *  int n;
 *  scanf("%d", &n);     // & wajib: kirim ALAMAT variabel
 *
 *  float f;
 *  scanf("%f", &f);
 *
 *  char str[50];
 *  scanf("%s", str);    // array sudah berupa pointer, & tidak perlu
 */

/*
 * --- OPERATOR ARITMATIKA ---
 *
 *  +   penjumlahan      5 + 3  = 8
 *  -   pengurangan      5 - 3  = 2
 *  *   perkalian        5 * 3  = 15
 *  /   pembagian        10 / 3 = 3   (integer division, bukan 3.33)
 *  %   modulus (sisa)   10 % 3 = 1
 *
 *  Increment dan Decrement:
 *    i++  post-increment: gunakan dulu, baru tambah
 *    ++i  pre-increment : tambah dulu, baru gunakan
 *    i--  post-decrement
 *    --i  pre-decrement
 */

/*
 * --- OPERATOR RELASIONAL ---
 *
 *  ==  sama dengan          5 == 5 -> TRUE  (1)
 *  !=  tidak sama           5 != 3 -> TRUE  (1)
 *  >   lebih besar          5 >  3 -> TRUE  (1)
 *  <   lebih kecil          3 <  5 -> TRUE  (1)
 *  >=  lebih besar/sama     5 >= 5 -> TRUE  (1)
 *  <=  lebih kecil/sama     3 <= 5 -> TRUE  (1)
 */

/*
 * --- OPERATOR LOGIKA ---
 *
 *  &&  AND: TRUE jika KEDUA operan TRUE    (1 && 1 = 1)
 *  ||  OR : TRUE jika SALAH SATU TRUE      (0 || 1 = 1)
 *  !   NOT: membalik kondisi               (!1 = 0)
 */

/*
 * --- OPERATOR GABUNGAN (ASSIGNMENT) ---
 *
 *  a += b   setara a = a + b
 *  a -= b   setara a = a - b
 *  a *= b   setara a = a * b
 *  a /= b   setara a = a / b
 *  a %= b   setara a = a % b
 */

/* Contoh program Modul 0 */
void contoh_modul0() {
    /* Variabel dan tipe data */
    int umur = 20;
    float tinggi = 170.5;
    char inisial = 'B';
    char nama[] = "Budi";

    printf("=== Contoh Modul 0 ===\n");
    printf("Nama    : %s\n", nama);
    printf("Inisial : %c\n", inisial);
    printf("Umur    : %d tahun\n", umur);
    printf("Tinggi  : %.1f cm\n", tinggi);

    /* Operator aritmatika */
    int a = 10, b = 3;
    printf("\na = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d  (integer division)\n", a / b);
    printf("a %% b = %d  (sisa bagi)\n", a % b);

    /* Operator relasional dan logika */
    int x = 5, y = 3, z = 5;
    printf("\nx=%d, y=%d, z=%d\n", x, y, z);
    printf("x == z  : %d\n", x == z);
    printf("x > y   : %d\n", x > y);
    printf("x==z && x>y : %d\n", (x == z) && (x > y));
}

/*
 * --- SOAL LATIHAN MODUL 0 ---
 *
 *  Soal 1: Hitung umur dari tahun lahir dan tahun sekarang.
 *          Input : 2002 2023
 *          Output: 21
 *
 *  Soal 2: Bagi P potongan pizza ke N teman sama rata.
 *          Sisa dimakan Ghifari.
 *          Input : 11 3
 *          Output: Teman mendapat 3 potong, Ghifari mendapat 2 potong
 *
 *  Soal 3: Hitung (a+b)/c dengan 2 angka di belakang koma.
 *          Input : 5 6 3
 *          Output: 3.67
 *
 *  Soal 4: Hitung jumlah dan rata-rata dari 5 bilangan A B C D E.
 *          Input : 6 9 4 20 7
 *          Output: 46 9.2
 */


/* ============================================================
 *  MODUL 1: PERCABANGAN
 * ============================================================
 *
 *  Topik:
 *   1. if
 *   2. if-else
 *   3. if-else if
 *   4. switch-case
 *   5. Operator kondisional (?:)
 *
 * ============================================================ */

/*
 * --- IF ---
 *
 *  if (kondisi) {
 *      // dieksekusi jika kondisi TRUE
 *  }
 */

/*
 * --- IF-ELSE ---
 *
 *  if (kondisi) {
 *      // dieksekusi jika TRUE
 *  } else {
 *      // dieksekusi jika FALSE
 *  }
 */

/*
 * --- IF-ELSE IF ---
 *
 *  if (kondisi1) {
 *      // TRUE
 *  } else if (kondisi2) {
 *      // kondisi1 FALSE, kondisi2 TRUE
 *  } else {
 *      // semua kondisi FALSE
 *  }
 */

/*
 * --- SWITCH-CASE ---
 *
 *  switch (ekspresi) {
 *      case nilai1:
 *          statement;
 *          break;      // WAJIB! tanpa break, eksekusi lanjut ke case berikutnya
 *      case nilai2:
 *          statement;
 *          break;
 *      default:        // dieksekusi jika tidak ada case yang cocok
 *          statement;
 *  }
 */

/*
 * --- OPERATOR KONDISIONAL (?:) ---
 *
 *  Bentuk ringkas dari if-else (ternary operator).
 *
 *  (kondisi) ? (nilai_jika_true) : (nilai_jika_false)
 *
 *  Contoh:
 *    printf(x >= 0 ? "positif" : "negatif");
 */

/* Contoh program Modul 1 */
void contoh_modul1() {
    printf("\n=== Contoh Modul 1: Percabangan ===\n");

    /* if-else: cek kehadiran */
    int hadir = 1;
    if (hadir) {
        printf("Absen: V\n");
    } else {
        printf("Absen: X\n");
    }

    /* if-else if: nilai ke huruf */
    int nilai = 85;
    printf("Nilai %d = ", nilai);
    if      (nilai >= 85) printf("A\n");
    else if (nilai >= 70) printf("B\n");
    else if (nilai >= 55) printf("C\n");
    else if (nilai >= 40) printf("D\n");
    else                  printf("E\n");

    /* switch-case: plat nomor */
    char plat = 'L';
    printf("Plat '%c' = ", plat);
    switch (plat) {
        case 'L': printf("Surabaya\n");  break;
        case 'B': printf("Jakarta\n");   break;
        case 'D': printf("Bandung\n");   break;
        case 'N': printf("Malang\n");    break;
        default:  printf("Tidak diketahui\n");
    }

    /* operator kondisional */
    int mark = 80;
    printf("Nilai %d: %s\n", mark, mark >= 75 ? "Lulus" : "Tidak Lulus");
}

/*
 * --- SOAL LATIHAN MODUL 1 ---
 *
 *  Soal 1: Cek apakah bilangan 0-999 merupakan bilangan Armstrong.
 *          (153 = 1^3 + 5^3 + 3^3 = 153)
 *          Input : 153
 *          Output: Merupakan Bilangan Armstrong
 *
 *  Soal 2: Cetak terbilang dari angka 0-999.
 *          Input : 979
 *          Output: Sembilan ratus tujuh puluh sembilan
 *
 *  Soal 3: 7-segment display. Input 4 bit (I1 I2 I3 I4) sebagai
 *          notasi biner, output 7 sinyal A-G (1=menyala, 0=mati).
 *          Input : 0 0 0 0
 *          Output: 1 1 1 1 1 1 0
 */


/* ============================================================
 *  MODUL 2: PERULANGAN, ARRAY, DAN STRING
 * ============================================================
 *
 *  Topik:
 *   1. while loop
 *   2. do-while loop
 *   3. for loop
 *   4. nested loop
 *   5. break dan continue
 *   6. Array (1D dan 2D)
 *   7. String dan fungsi string
 *
 * ============================================================ */

/*
 * --- WHILE LOOP ---
 *
 *  Eksekusi kode selama kondisi TRUE.
 *
 *  // inisialisasi
 *  while (kondisi) {
 *      // kode
 *      // update iterator
 *  }
 */

/*
 * --- DO-WHILE LOOP ---
 *
 *  Kode dieksekusi minimal SATU KALI sebelum cek kondisi.
 *
 *  do {
 *      // kode
 *      // update iterator
 *  } while (kondisi);
 */

/*
 * --- FOR LOOP ---
 *
 *  Paling ringkas untuk loop dengan iterator.
 *
 *  for (inisialisasi; kondisi; update) {
 *      // kode
 *  }
 */

/*
 * --- BREAK DAN CONTINUE ---
 *
 *  break    : keluar dari loop sepenuhnya
 *  continue : lewati iterasi saat ini, lanjut ke berikutnya
 */

/*
 * --- ARRAY ---
 *
 *  Kumpulan data bertipe sama, diakses via indeks (mulai 0).
 *
 *  int arr[5];                          // deklarasi
 *  int arr[5] = {10, 20, 30, 40, 50};  // inisialisasi
 *  int arr[] = {1, 2, 3};              // ukuran otomatis
 *
 *  Akses: arr[0], arr[1], ..., arr[n-1]
 *
 *  Array 2D (matriks):
 *  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
 *  Akses: matrix[baris][kolom]
 */

/*
 * --- STRING ---
 *
 *  String = array char diakhiri '\0' (null terminator).
 *
 *  char nama[] = "Budi";
 *  char kata[20] = "Halo";
 *
 *  Fungsi string (#include <string.h>):
 *    strlen(str)         -> panjang string
 *    strcpy(dest, src)   -> salin src ke dest
 *    strcat(dest, src)   -> gabungkan src ke akhir dest
 *    strcmp(s1, s2)      -> bandingkan (0 jika sama,
 *                           <0 jika s1<s2, >0 jika s1>s2)
 */

/* Contoh program Modul 2 */
void contoh_modul2() {
    printf("\n=== Contoh Modul 2: Perulangan, Array, String ===\n");

    /* while loop */
    printf("while (i<5): ");
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    /* for loop */
    printf("for (1..10): ");
    for (int j = 1; j <= 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    /* break dan continue */
    printf("break di 5  : ");
    for (int k = 0; k < 10; k++) {
        if (k == 5) break;
        printf("%d ", k);
    }
    printf("\n");

    printf("skip 5      : ");
    for (int k = 0; k < 10; k++) {
        if (k == 5) continue;
        printf("%d ", k);
    }
    printf("\n");

    /* array */
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Array       : ");
    for (int k = 0; k < 5; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");

    /* string */
    char a[] = "Halo";
    char b[] = " Dunia";
    char c[20];
    strcpy(c, a);
    strcat(c, b);
    printf("strcat      : %s\n", c);
    printf("strlen      : %d\n", (int)strlen(c));
    printf("strcmp(a,a) : %d\n", strcmp(a, a));
    printf("strcmp(a,b) : %d\n", strcmp(a, b));
}

/*
 * --- SOAL LATIHAN MODUL 2 ---
 *
 *  Soal 1: Cetak "Ganjil"/"Genap" untuk setiap input.
 *
 *  Soal 2: Cetak '*' untuk angka genap, nilai asli untuk ganjil,
 *          dari 1 sampai n.
 *          Input : 6
 *          Output: 1 * 3 * 5 *
 *
 *  Soal 3: Cetak '*' untuk bilangan prima, nilai asli untuk non-prima,
 *          dari 2 sampai n.
 *          Input : 10
 *          Output: * * 4 * 6 * 8 9 10
 *
 *  Soal 4: Cetak N angka input secara terbalik.
 *          Input : 5 / 1 4 3 2 9
 *          Output: 9 2 3 4 1
 *
 *  Soal 5: Hitung jumlah tiap vokal (A/a, I/i, U/u, E/e, O/o)
 *          dalam string S.
 *
 *  Soal 6: Konversi snake_case ke camelCase.
 *          Input : player_score
 *          Output: playerScore
 */


/* ============================================================
 *  MODUL 3: FUNGSI DAN REKURSI
 * ============================================================
 *
 *  Topik:
 *   1. Pendefinisian fungsi
 *   2. Prototipe fungsi
 *   3. Parameter dan argumen
 *   4. Nilai return
 *   5. Fungsi rekursif (base case dan recursive case)
 *
 * ============================================================ */

/*
 * --- PENDEFINISIAN FUNGSI ---
 *
 *  return_type nama_fungsi(parameter1, parameter2, ...) {
 *      statement;
 *      return nilai;   // wajib jika return_type bukan void
 *  }
 *
 *  Contoh:
 *    void cetak() { printf("Halo\n"); }
 *    int jumlah(int a, int b) { return a + b; }
 */

/*
 * --- PROTOTIPE FUNGSI ---
 *
 *  Deklarasi tanpa definisi. Diletakkan sebelum main()
 *  agar fungsi bisa dipanggil sebelum didefinisikan.
 *
 *  int jumlah(int a, int b);   // prototipe
 */

/*
 * --- REKURSI ---
 *
 *  Fungsi yang memanggil dirinya sendiri.
 *  WAJIB punya dua komponen:
 *
 *  1. BASE CASE    : kondisi berhenti (terminating condition)
 *  2. RECURSIVE CASE: kondisi memanggil diri sendiri
 *
 *  Tanpa base case -> stack overflow!
 */

/* Prototipe */
int faktorial(int n);
int power(int a, int m);
int jumlah_m3(int a, int b);
void cetak_m3(char str[]);

/* Definisi fungsi Modul 3 */

int jumlah_m3(int a, int b) {
    return a + b;
}

void cetak_m3(char str[]) {
    printf("%s\n", str);
}

/* Faktorial rekursif: n! = n * (n-1)! dengan base case 0! = 1 */
int faktorial(int n) {
    if (n == 0) return 1;           /* BASE CASE */
    return n * faktorial(n - 1);   /* RECURSIVE CASE */
}
/*
 * Alur faktorial(5):
 *   5 * faktorial(4)
 *   5 * 4 * faktorial(3)
 *   5 * 4 * 3 * faktorial(2)
 *   5 * 4 * 3 * 2 * faktorial(1)
 *   5 * 4 * 3 * 2 * 1 * faktorial(0)
 *   5 * 4 * 3 * 2 * 1 * 1 = 120
 */

/* Perpangkatan rekursif: a^m = a * a^(m-1) dengan base case a^0 = 1 */
int power(int a, int m) {
    if (m == 0) return 1;           /* BASE CASE */
    return a * power(a, m - 1);    /* RECURSIVE CASE */
}

/* Contoh program Modul 3 */
void contoh_modul3() {
    printf("\n=== Contoh Modul 3: Fungsi dan Rekursi ===\n");

    printf("jumlah(5,3)    = %d\n", jumlah_m3(5, 3));
    printf("faktorial(5)   = %d\n", faktorial(5));
    printf("faktorial(0)   = %d\n", faktorial(0));
    printf("power(2,10)    = %d\n", power(2, 10));
    printf("power(3,4)     = %d\n", power(3, 4));
    cetak_m3("Halo dari fungsi cetak!");
}

/*
 * --- SOAL LATIHAN MODUL 3 ---
 *
 *  Soal 1: Fungsi rekursif untuk N! (N faktorial).
 *          Input : 5
 *          Output: 120
 *
 *  Soal 2: Deret 1, 5, 14, 30, ... Fungsi rekursif untuk
 *          menentukan bilangan ke-n.
 *          Input : 2
 *          Output: 5
 *
 *  Soal 3: Fungsi untuk mencari nilai terbesar dan terkecil
 *          dari array A dengan N bilangan.
 *          Input : 5 / 1 2 3 4 5
 *          Output: max: 5, min: 1
 */

int main() {
    contoh_modul0();
    contoh_modul1();
    contoh_modul2();
    contoh_modul3();
    return 0;
}
