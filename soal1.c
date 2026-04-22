/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 - Data Manipulation and External File
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Angelika Nainggolan (13224085)
 *   Nama File           : Modul2.c
 *   Deskripsi           : Fungsi analISIs tersebut agar mesin dapat melaporkan jumlah, rata-rata, nilai maksimum, dan posISI pertama kemunculan nilai maksimum dengan benar.
 *   KondISI/Aturan 
 *   1. Fungsi harus menerima:  
 *    • pointer ke elemen pertama array  
 *    • jumlah elemen  
 *    • pointer output untuk SUM, average, MAX, dan first index of MAX  
 *    2. Indeks 0-based  
 *    3. Rata-rata dicetak dua digit desimal  
 *    4. Jika maksimum muncul beberapa kali, ambil indeks kemunculan pertama
 */
 #include <stdio.h>
 void Semogajalan (int n, int *ISI, int *MAX, int *SUM, float *AVG, int *IDX){
    *SUM = 0;
    *IDX = 0;
    *MAX = ISI[0];
    int i;
    for (int i = 0; i < n; i++){
        *SUM += ISI[i];
        if (ISI[i] > *MAX){
           *MAX = ISI[i];
           *IDX = i; 
        }
    *AVG = (float)*SUM/n;
    }
 }
 int main(){
    int n;
    scanf ("%d", &n);
    int ISI[n];
    for (int i = 0; i < n; i++){
        scanf ("%d", &ISI[i]);
    }
    int SUM;
    int IDX;
    int MAX;
    float AVG;
    Semogajalan (n, ISI, &MAX, &SUM, &AVG, &IDX);
    printf ("SUM %d\n", SUM);
    printf ("AVG %.2f\n", AVG);
    printf ("MAX %d\n", MAX);
    printf ("IDX %d\n", IDX);
    return 0;
}
// referensi https://www.geeksforgeeks.org/c/array-of-pointers-in-c/
 
