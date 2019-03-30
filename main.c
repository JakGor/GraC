#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"zadania.h"
#include "zadania.c"
#define _ROZM_ 16

//Uwaga na początek - w tabeli stats [0] to awansowość, [1] to energia, [2] to uznanie, [3] to postęp


int main ()
{
    setlocale("Polish_Poland", "");
    int i, wybormenu, stats[_ROZM_],flaga=1,opcja,bohater;
    printf("Witaj w grze RPG\n");
    printf("1 - Nowa gra\n 2 - Wczytaj ostatni zapis\n");
    scanf("%d",&wybormenu);
    switch (wybormenu) //Tutaj wybieramy nowa gra / odczyt
    {
    case 1: // nowa gra - resetujemy tablice ze statami do wartosci domyslnych
        {
            endgame(stats);// Odkryłem że endgame może być używany też do resetowania statystyk w nowej grze

            printf("Wybierz postac:\n(Wcisniecie innego przycisku spowoduje, ze twoja postacia bedzie niewyrozniajacy sie szeregowy Kowalski)\n");
            bohater1(); // sato 2 funkcje, które zwracają nam opis tekstowy bohaterów
            bohater2();
            scanf("%d",&bohater);
            switch(bohater) // wybór bohatera ma wpływ na pocątkowe statystyki
            {
                case 1:
                    {
                        stats[1]-=2;
                        stats[2]+=2;
                        break;
                    }
                case 2:
                    {
                        stats[1]+=2;
                        stats[2]-=2;
                        break;
                    }
                default: {break;}// zły wybór bohatera nie spowoduje zmian w statystykach( "szeregowy Kowalski")
            }
            break;

        }
    case 2: // wczytaj - odczyt wartości z pliku txt
        {
            odczyt(stats);// odczyt też wpakowalem do funkcji
            break;
        }

    }

    while(flaga==1) // główna pętla, kręci się tak długo aż nie zmnienimy flagi
    {
        system("cls");
        printf("Wybierz opcje :\n1 - Nastepna przygoda\n2 - Podglad statystyk\n3 - wyjscie");
        scanf("%d",&opcja);
        switch (opcja)
        {
            case 1:// tutaj wczytujemy kolejne zadanie na podstawie "postępu". W ten sposób chciałbym serwować graczom wszystkie zadania. Na początku zwykła inkrementacja
                    //: 1,2,3,.... W momencie jak sięrozgałęzia, dodamy np 1 z przodu ( jak linie autobusowe xD ) np 120 - 20 zadanie ścieżki 1, 321 - 21 zadanie ścieżki 3
                    //IMO jest to proste i skuteczne
                {
                    system("cls");
                    switch(stats[3])
                    {
                        case 0:
                        {
                            zad1(stats);// funkcja wczytująca zadanie - ich definicje są pliku zadania.c
                            getchar(); //Te dwa getchary odpowiadaj¹ za "zatrzymanie" wyœwietlenia napisu, do czasu kolejnego, dowolnego klikniêcia
                            getchar();
                            break;
                        }
                        case 1:
                        {
                            zad2(stats);
                            getchar();
                            getchar();
                            break;
                        }
                        case 2:
                        {
                            zad3(stats);

                            getchar();
                            getchar();
                            break;
                        }

                        case 3:
                        {
                            zad4(stats);

                            getchar();
                            getchar();
                            break;
                        }

                        case 4:
                        {
                            zad5(stats);
                            if (stats[0]<18 && stats[1]<5)
                            {
                                endgame(stats);
                                zapis(stats);
                            }

                            getchar();
                            getchar();
                            break;
                        }
                        case 5:
                        {
                            zad6(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 6:
                        {
                            zad7(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 7:
                        {
                            zad8(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 8:
                        {
                            zad9(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 9:
                        {
                            zad10(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 10:
                        {
                            zad11(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 11:
                        {   if (stats[6]==1)
                        {
                                zadquest1(stats);
                                getchar();
                                getchar();
                                break;
                        }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }

                        }
                        case 12:
                        {
                            zad12(stats);
                            if (stats[0]<=15 && stats[1]<=15)
                            {
                                endgame(stats);
                                komunikat_awans();
                                zapis(stats);
                                flaga = 0;
                            }

                            getchar();
                            getchar();
                            break;
                        }

                        case 13:
                        {
                            if (stats[6]==2)
                            {
                                zadquest2(stats);
                                getchar();
                                getchar();
                                break;
                            }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }



                        }
                        case 14:
                        {
                            if (stats[6]==3)
                            {
                                zadquest3(stats);
                                getchar();
                                getchar();
                                break;
                            }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }

                            }
                        case 15:
                        {
                            zad13(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 16:
                        {
                            zad14(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 17:
                        {
                            zad15(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 18:
                        {
                            zad16(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 19:
                        {
                            zad17(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 20:
                        {
                            zad18(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 21:
                        {
                            zad19(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 22:
                        {
                            if (stats[9]==1)
                            {
                                zadquest4(stats);
                                getchar();
                                getchar();
                                break;
                            }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }


                        }
                        case 23:
                        {
                            if(stats[9]>1)
                            {
                                zadquest5(stats);
                                getchar();
                                getchar();
                                break;
                            }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }
                        }
                        case 24:
                        {
                            zad20(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 25:
                        {   if(stats[11]==1 || stats[11]==3 || stats[12]==3)
                            {
                                stats[3]+=1;
                                break;
                            }
                            else
                            {
                                zad21(stats);
                                getchar();
                                getchar();
                                break;
                            }



                        }
                        case 26:
                        {
                            zad22(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 27:
                        {
                            zad23(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 28:
                        {
                            if (stats[6]==4)
                            {
                                zadquest6(stats);
                                getchar();
                                getchar();
                                break;
                            }
                            else
                            {
                                stats[3]+=1;
                                break;
                            }

                        }
                        case 29:
                        {
                            zad24(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 30:
                        {
                            zad25(stats);

                            getchar();
                            getchar();
                            break;
                        }
                        case 31:
                        {   if (stats[0]<=30 && stats[2] <=27 && stats[6]==4)
                               {
                                  zakonczenie1();
                               }
                            else if (stats[0] <=30 && stats[2]<=27 && stats[6] !=4)
                            {
                                zakonczenie2();
                            }
                            else if ( stats[0]> 30 && stats[2]> 27 && stats[6]==4)
                            {
                                zakonczenie3();
                            }
                            else if ( stats[0]> 30 && stats[2]> 27 && stats[6]!=4)
                            {
                                if (stats[7]>2)
                                    {zakonczenie4();}
                                else {zakonczenie5();}
                            }
                            printf("\nTak oto konczy sie ta historia...");
                            getchar();
                            getchar();
                            break;
                        }

                    }
                    break;
                }
            case 2:
                {
                    system("cls");
                    printf("Podglad statystyk: \nAwansowosc %d\nEnergia %d\nUznanie%d",stats[0],stats[1],stats[2]);//Po prostu podgląd
                    getchar();
                    getchar();
                    break;
                }
            case 3:
            {
                system("cls");
                flaga = 0;// flaga równa 0 oznacza że pętla WHILE sięjużnie obróci kolejny raz
                zapis(stats);// funkcja zapisująca zawartość statystyk i postępu do pliku
            }
        }

        if (stats[1]<=0)
        {
            endgame(stats);// funkcja kończąca grę - póki co z braku energii - będzie rozbudowana
            komunikat_energia();
            zapis(stats);
            flaga=0;
        }
    }


}

