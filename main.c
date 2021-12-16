#include <stdio.h>
#include "header/rumus.h"
#include "header/fungsi.h"

int data;

int balok = 1;
int tabung = 2;
int kubus = 3;
int prisma = 4;
int kerucut = 5;
int quit = 6;

int main(){

    printf("\n========= Kalkulator Penghitung Bangun Ruang =========\n");
    printf("\n|| BALOK  =  1 ||\n|| TABUNG  = 2 ||\n|| KUBUS   = 3 ||\n|| PRISMA  = 4 ||\n|| KERUCUT = 5 ||\n|| Quit    = 6 ||\n\n");

    printf("Masukkan Data : ");
    scanf("%d", &data);

    switch (data){
        case 1:
        // Input dan output balok
            printf("========= BALOK =========\n");
            fungsiBalok();
            goto cls;
            break; 
        case 2:
        // Input dan output tabung
            printf("\n========= TABUNG =========\n");
            fungsiTabung();
            goto cls;
            break;
        case 3:
        // Input dan output kubus
            printf("\n========= KUBUS =========\n");
            fungsiKubus();
            goto cls;
            break;
        case 4:
        // Input dan output prisma
            printf("\n========= PRISMA =========\n");
            fungsiPrisma();
            goto cls;
            break;
        case 5:
        // Input dan output kerucut
            printf("\n========= KERUCUT =========\n");
            fungsiKerucut();
            goto cls;
            break;
        case 6:
            exit(0);
        default:
            printf("\n========= Anda Salah Memasukkan Data! =========\n\n");
    }

    return 0;

    cls:
        printf("\n========= Kalkulator Penghitung Bangun Ruang =========\n");
        printf("\n|| BALOK  =  1 ||\n|| TABUNG  = 2 ||\n|| KUBUS   = 3 ||\n|| PRISMA  = 4 ||\n|| KERUCUT = 5 ||\n|| Quit    = 6 ||\n\n");

        printf("Masukkan Data : ");
        scanf("%d", &data);
}