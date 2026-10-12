#include <stdio.h>

int main() {
    /* TUM DEGISKENLER EN BASTA TANIMLANDI (C89 UYUMLU) */
    float urun_tutari = 0.0;
    float odenen_para = 0.0;
    float para_ustu = 0.0;

    int hatali_kurus = 0;
    int dogru_kurus = 0;
    int kalan = 0;

    int a200, a100, a50, a20, a10, a5, a1;
    int k50, k25, k10, k5, k1;
    int toplam_kupur_sayisi = 0;

    /* GIRDILER */
    printf("Urun tutarini giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen parayi giriniz (TL): ");
    scanf("%f", &odenen_para);

    para_ustu = odenen_para - urun_tutari;

    /* HASSASIYET VE YUVARLAMA HESABI */
    hatali_kurus = (int)(para_ustu * 100.0f);
    dogru_kurus = (int)(para_ustu * 100.0f + 0.5f);

    printf("\n--- PARA USTU DETAYI ---\n");
    printf("Toplam Para Ustu: %.2f TL\n\n", para_ustu);

    kalan = dogru_kurus;

    /* IF VE FOR KULLANMADAN BOLME VE MOD ILE HESAPLAMA */
    a200 = kalan / 20000;
    kalan = kalan % 20000;

    a100 = kalan / 10000;
    kalan = kalan % 10000;

    a50 = kalan / 5000;
    kalan = kalan % 5000;

    a20 = kalan / 2000;
    kalan = kalan % 2000;

    a10 = kalan / 1000;
    kalan = kalan % 1000;

    a5 = kalan / 500;
    kalan = kalan % 500;

    a1 = kalan / 100;
    kalan = kalan % 100;

    k50 = kalan / 50;
    kalan = kalan % 50;

    k25 = kalan / 25;
    kalan = kalan % 25;

    k10 = kalan / 10;
    kalan = kalan % 10;

    k5 = kalan / 5;
    kalan = kalan % 5;

    k1 = kalan / 1;
    kalan = kalan % 1;

    /* EKRANA YAZDIRMA */
    printf("Verilecek Kupurler:\n");
    printf("- 200 TL Banknot : %d adet\n", a200);
    printf("- 100 TL Banknot : %d adet\n", a100);
    printf("- 50 TL Banknot : %d adet\n", a50);
    printf("- 20 TL Banknot : %d adet\n", a20);
    printf("- 10 TL Banknot : %d adet\n", a10);
    printf("- 5 TL Banknot : %d adet\n", a5);
    printf("- 1 TL Madeni : %d adet\n", a1);
    printf("- 50 Kurus Madeni: %d adet\n", k50);
    printf("- 25 Kurus Madeni: %d adet\n", k25);
    printf("- 10 Kurus Madeni: %d adet\n", k10);
    printf("- 5 Kurus Madeni : %d adet\n", k5);
    printf("- 1 Kurus Madeni : %d adet\n", k1);

    toplam_kupur_sayisi = a200 + a100 + a50 + a20 + a10 + a5 + a1 + k50 + k25 + k10 + k5 + k1;
    printf("\nToplam Verilen Kupur Sayisi: %d adet\n", toplam_kupur_sayisi);

    /* RAPOR CIKTISI */
    printf("\n==================================================\n");
    printf("RAPOR: Floating Point Hassasiyet Aciklamasi\n");
    printf("==================================================\n");
    printf("Ornek: Urun = 18.70 TL, Odenen = 20.00 TL\n");
    printf("Hatali (int)((20.0 - 18.7) * 100) Sonucu : %d kurus\n", hatali_kurus);
    printf("Dogru (int)((20.0 - 18.7) * 100 + 0.5) : %d kurus\n", dogru_kurus);

    return 0;
}
