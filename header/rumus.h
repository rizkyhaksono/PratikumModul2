// Luas & Volume Balok
int luas_Balok(int panjang, int lebar, int tinggi) {
    int luasBalok;
    luasBalok = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    return luasBalok;
}
int volume_Balok(int panjang, int lebar, int tinggi) {
    int volumeBalok;
    volumeBalok = panjang * lebar * tinggi;
    return volumeBalok;
}

// Luas & Volume Tabung
float luas_Tabung(float phi, float jari, int tinggi) {
    int luasTabung;
    luasTabung = (2 * (phi * jari)) * ( jari + jari ); //(2 * phi * jari * jari * tinggi) + (2 * phi * jari * jari * tinggi);
    return luasTabung;
}
float volume_Tabung(float phi, float jari, int tinggi) {
    int volumeTabung;
    volumeTabung = phi * jari * jari * tinggi;
    return volumeTabung;
}

// Luas & Volume Kubus
int luas_Kubus(int sisi){
    int luasKubus;
    luasKubus = 6 * (sisi * sisi); 
    return luasKubus;
}
int volume_Kubus(int sisi){
    int volumeKubus;
    volumeKubus = sisi * sisi * sisi;
    return volumeKubus;
}

// Luas & Volume & Keliling Alas Prisma
int luas_Prisma(int alas, int sisiAlas1, int sisiAlas2, int sisiAlas3, int tinggi){
    int luasPrisma;
    luasPrisma = (2 * alas) + ((sisiAlas1 + sisiAlas2 + sisiAlas3) * tinggi);
    return luasPrisma;
}
int volume_Prisma(int alas, int tinggi){
    int volumePrisma = alas * tinggi;
    return volumePrisma;
}
int kelilingAlas_Prisma(int sisiAlas1, int sisiAlas2, int sisiAlas3){
    int kelilingAlas = sisiAlas1 + sisiAlas2 + sisiAlas3;
    return kelilingAlas;
}

// Luas & Volume Kerucut
float luas_Kerucut(float phi, float jari, int selimut){
    int luasKerucut;
    luasKerucut = phi * jari * (jari + selimut);
    return luasKerucut;
}
float volume_Kerucut(float phi, float jari, int tinggi){
    int volumeKerucut;
    volumeKerucut = phi * (jari * jari) * tinggi;
    return volumeKerucut;
}