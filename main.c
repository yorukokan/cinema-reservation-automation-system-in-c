#include <stdio.h>
#include <stdlib.h>

/* Ad Soyad : Okan YORUK */

int main()
{
    int fiyatPulp_Fiction, fiyatFight_Club, fiyatScarface, fiyatFilm;
    fiyatPulp_Fiction = 80;
    fiyatFight_Club = 100;
    fiyatScarface = 120;

    int yas, pazartesi, diger_gunler, gun;
    pazartesi = 4;
    diger_gunler = 5;

    int sabah, ogle, aksam, cevapSeans;
    sabah = 1;
    ogle = 2;
    aksam = 3;

    float oranDublaj, oran3D, oranSabah, oranPzt, yeni_fiyat, indirimsiz_fiyat, indirim_tutari, indirim_ogrenci, indirim_yas;
    oranDublaj = 0.10;
    oran3D = 0.15;
    oranSabah = 0.05;
    oranPzt = 0.3;
    indirim_ogrenci = 0.2;
    indirim_yas = 0.5;

    char tus;
    char Pulp_Fiction, Fight_Club, Scarface;
    Pulp_Fiction = 'p';
    Fight_Club = 'f';
    Scarface = 's';

    char cevapD_A, cevapUD_ID, cevap_Ogrenci;
    char dublaj, altyazi, UcD, IkiD, Ogrenci, OgrenciDegil;
    dublaj = 'd';
    altyazi = 'a';
    UcD = 'u';
    IkiD = 'i';
    Ogrenci = 'e';
    OgrenciDegil = 'h';

    printf("Vizyonda Olan Filmlerimiz :\n"); // Filmler ve Fiyatlar Hakkinda Bilgi Verilir .
    printf("Film : Pulp Fiction[%c] Fiyat: %d \n", Pulp_Fiction, fiyatPulp_Fiction);
    printf("Film : Fight Club[%c] Fiyat : %d \n", Fight_Club, fiyatFight_Club);
    printf("Film : Scarface[%c] Fiyat : %d \n", Scarface, fiyatScarface);
    printf("Secmek Istediginiz Filmin Yanindaki Tusa Basiniz . :\n");
    scanf("%s", &tus);
    if (tus == 'p') // Film Secimi Yapilir .
    {
        printf("Sectiginiz Film Pulp Fiction .\n");
        printf("Filmin Indirimsiz Fiyati %d TL'dir.\n", fiyatPulp_Fiction);
        fiyatFilm = fiyatFight_Club;
    }
    else if (tus == 'f')
    {
        printf("Sectiginiz Film Fight Club .\n");
        printf("Filmin Indirimsiz Fiyati %d TL'dir.\n", fiyatFight_Club);
        fiyatFilm = fiyatFight_Club;
    }
    else if (tus == 's')
    {
        printf("Sectiginiz Film Scarface .\n");
        printf("Filmin Indirimsiz Fiyati %d TL'dir.\n", fiyatScarface);
        fiyatFilm = fiyatScarface;
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }

    printf("Filmi Dublajli Mi Altyazili Mi Izlemek Istersiniz ?\n"); // Dublaj veya Altyazi Secimi Yapilir .
    printf("Dublaj Icin [d] ,Altyazi Icin [a] Tusuna Basiniz . :\n");
    scanf("%s", &cevapD_A);
    if (cevapD_A == 'd')
    {
        printf("Dublajli Film Fiyati %.2f Daha Pahalidir.\n", oranDublaj);
        yeni_fiyat = fiyatFilm + fiyatFilm * oranDublaj;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else if (cevapD_A == 'a')
    {
        printf("Fiyat Degismemistir .\n");
        yeni_fiyat = fiyatFilm;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }

    printf("Filmi 3D Mi ,2D Mi Izlemek Istersiniz ?\n"); // 3D veya 2D Secimi Yapilir .
    printf("3D Icin [u],2D Icin [i] Tuslarina Basiniz . :\n");
    scanf("%s", &cevapUD_ID);
    if (cevapUD_ID == 'u')
    {
        printf("3D Film Fiyati %.2f Daha Pahalidir .\n", oran3D);
        yeni_fiyat = yeni_fiyat + yeni_fiyat * oran3D;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else if (cevapUD_ID == 'i')
    {
        printf("Fiyat Degismemistir .\n");
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }

    printf("Filmi Hangi Seans Izlemek Istersiniz ?\n"); // Seans Hakkinda Bilgi Verilir ve Secim Yapilir.
    printf("Sabah[1] , Ogle[2] , Aksam[3] Olmak Uzere 3 Seans Vardir .\n");
    printf("Lutfen Girmek Istediginiz Seansin Yanindaki Tusa Basiniz . :\n");
    scanf("%d", &cevapSeans);
    if (cevapSeans == 1)
    {
        printf("Sabah Film Fiyati %.2f Daha Ucuzdur .\n", oranSabah);
        yeni_fiyat = yeni_fiyat - yeni_fiyat * oranSabah;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else if (cevapSeans == 2 || cevapSeans == 3)
    {
        printf("Fiyat Degismemistir .\n");
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }

    printf("Ogrenci Misiniz ?\n"); // Ogrenci Durumu Sorgulanir ve Bilgi Verilir.
    printf("Ogrenci Iseniz [e] ,Ogrenci Degilseniz [h] Tusuna Basiniz :\n");
    scanf("%s", &cevap_Ogrenci);
    if (cevap_Ogrenci == 'e')
    {
        printf("Ogrenci Oldugunuz Icin %.2f Daha Ucuzdur .\n", indirim_ogrenci);
        yeni_fiyat = yeni_fiyat - yeni_fiyat * indirim_ogrenci;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else if (cevap_Ogrenci == 'h')
    {
        printf("Fiyat Degismemistir .\n");
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }

    printf("Kac Yasindasiniz ?\n"); // Yas Bilgisi Sorulur .
    scanf("%d", &yas);
    if (yas < 18)
    {
        printf("18 Yasindan Kucuk Oldugunuz Icin %.2f Daha Ucuzdur .\n", indirim_yas);
        yeni_fiyat = yeni_fiyat - yeni_fiyat * indirim_yas;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Fiyat Degismemistir .\n");
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }

    printf("Hangi Gun Izlemek Istersiniz ?\n"); // Gunler Hakkinda Bilgi Verilir ve Secim Yapilir.
    printf("Pazartesi Extra %.2f Daha Ucuzdur.\n", oranPzt);
    printf("Pazartesi Icin [4],Diger Gunler Icin [5] Tusuna Basiniz .:\n");
    scanf("%d", &gun);
    if (gun == 4)
    {
        printf("Pazartesi Extra %.2f Daha Ucuzdur .\n", oranPzt);
        yeni_fiyat = yeni_fiyat - yeni_fiyat * oranPzt;
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else if (gun == 5)
    {
        printf("Fiyat Degismemistir .\n");
        printf("Yeni Fiyat %.3f TL'dir.\n", yeni_fiyat);
    }
    else
    {
        printf("Belirtilen Tuslardan Birine Basiniz !.\n");
        return;
    }
    printf("Bilet Satin Alma Islemi Basariyla Gerceklestirilmistir.\n"); // Bilet Satin Alma Islemi Tamamlanir .
    printf("Iyi Seyirler :)\n\n");

    indirimsiz_fiyat = fiyatFilm + (fiyatFilm * oran3D) + (fiyatFilm * oranDublaj);
    printf("Indirimsiz Fiyatiniz : %f\n", indirimsiz_fiyat); /*Normal Fiyat , Indirimli Fiyat ve Indirim
                                                               Yapilan Tutar Hakkinda Bilgi Verilir .*/
    indirim_tutari = indirimsiz_fiyat - yeni_fiyat;
    printf("Indirim Tutariniz : %f\n\n", indirim_tutari);

    printf("Odeyeceginiz Fiyat : %.3f TL\n", yeni_fiyat);

    return 0;
}
