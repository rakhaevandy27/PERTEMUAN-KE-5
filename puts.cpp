#include<iomanip>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char nama[20], alamat[20], umur[20], berat[20], tinggi[20];

    printf("Masukkan nama anda: ");
    puts(nama);
    printf("Masukkan umur anda: ");
    puts(umur);
    printf("Masukkan alamat anda: ");
    puts(alamat);
    printf("Masukkan tinggi anda: ");
    puts(tinggi);
    printf("Masukkan berat anda: ");
    puts(berat);

    printf("===================\n");
    printf("=     BIODATA     =\n");
    printf("===================\n");
    printf("Nama    : %s\n",nama);
    printf("Umur    : %s\n",umur);
    printf("Alamat  : %s\n",alamat);
    printf("Tinggi  : %s\n",tinggi);
    printf("Berat   : %s\n",berat);
    
    return 0;
}
