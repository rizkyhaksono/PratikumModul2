// Fungsi Balok
void fungsiBalok(){
	// Tipe data
    int luasBalok, volTabung;
    int panjang, lebar, tinggi;

    // Input data
    printf("Masukkan panjang balok : ");
    scanf("%d", &panjang);
    printf("Masukkan lebar         : ");
    scanf("%d", &lebar);
    printf("Masukkan tinggi        : ");
    scanf("%d", &tinggi);
    
    // Logika data
    volTabung = volume_Balok(panjang, lebar, tinggi);
    luasBalok = luas_Balok(panjang, lebar, tinggi);

    // Output data
    printf("\n========= Hasil =========\n");
    printf("Volume Balok         : %d cm3\n", volTabung);
    printf("Luas Permukaan Balok : %d cm2\n", luasBalok);
}

// Fungsi Tabung
void fungsiTabung(){
    // Tipe data
    float jari, volTabung, luasTabung;
    int tinggi;
    float phi = 3.14;

    // Input data
    printf("Masukkan jari-jari : ");
    scanf("%f", &jari);
    printf("Masukkan tinggi    : ");
    scanf("%d", &tinggi);

    // Logika data
    volTabung = volume_Tabung(phi, jari, tinggi);
    luasTabung = luas_Tabung(phi, jari, tinggi);

    // Output data
    printf("\n========= Hasil =========\n");
    printf("Volume Tabung : %2.f cm3\n", volTabung);
    printf("Luas Tabung   : %2.f cm2\n", luasTabung);
}

// Fungsi Kubus
void fungsiKubus(){
    // Tipe data
    int sisi;
    int volKubus, luasKubus;

    // Input data
    printf("Masukkan sisi : ");
    scanf("%d", &sisi);

    // Logika data
    volKubus = volume_Kubus(sisi);
    luasKubus = luas_Kubus(sisi);

    // Output data
    printf("\n========= Hasil =========\n");
    printf("Volume Kubus : %d cm3\n", volKubus);
    printf("Luas Kubus   : %d cm2\n", luasKubus);
}

// Fungsi Prisma Segitiga
void fungsiPrisma(){
    // Tipe data
    int alas, sisiAlas1, sisiAlas2, sisiAlas3, tinggi;
    int volPrisma, luasPrisma, kelilingAlas;

    // Input data
    printf("Masukkan alas   : ");
    scanf("%d", &alas);
    printf("Masukkan tinggi : ");
    scanf("%d", &tinggi);
    printf("\n========= Keliling Alas =========\n");
    printf("Masukkan sisi 1 : ");
    scanf("%d", &sisiAlas1);
    printf("Masukkan sisi 2 : ");
    scanf("%d", &sisiAlas2);
    printf("Masukkan sisi 3 : ");
    scanf("%d", &sisiAlas3);

    // Logika data
    volPrisma = volume_Prisma(alas, tinggi);
    kelilingAlas = kelilingAlas_Prisma(sisiAlas1, sisiAlas2, sisiAlas3);
    luasPrisma = luas_Prisma(alas, sisiAlas1, sisiAlas2, sisiAlas3, tinggi);

    // Output data
    printf("\n========= Hasil =========\n");
    printf("Luas Permukaan Prisma : %d cm2\n", luasPrisma);
    printf("Keliling Alas         : %d cm\n", kelilingAlas);
    printf("Volume Prisma         : %d cm3\n", volPrisma);
}

// Fungsi Kerucut
void fungsiKerucut(){
    // Tipe data
    float phi = 22.0/7.0;
    int tinggi, selimut;
    float jari, volKerucut, luasKerucut;

    // Input data
    printf("Masukkan jari-jari kerucut : ");
    scanf("%f", &jari);
    printf("Masukkan tinggi kerucut    : ");
    scanf("%d", &tinggi);
    printf("Masukkan sisi selimut      : ");
    scanf("%d", &selimut);

    // Logika data
    volKerucut = 1.0/3.0 * volume_Kerucut(phi, jari, tinggi);
    luasKerucut = luas_Kerucut(phi, jari, selimut);

    // Output data
    printf("\n========= Hasil =========\n");
    printf("Volume Kerucut         : %2.f cm3\n", volKerucut);
    printf("Luas Permukaan Kerucut : %2.f cm2\n", luasKerucut);
}