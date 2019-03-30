
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "zadania.h"
#define _ROZM_ 16

void bohater1(void)
{
    printf("1 Michal - po ukonczeniu prestizowej SGH, uciekasz na poludnie i szukasz pracy w malopolskim hubie \n informatycznym. Jestes charyzmatyczny, ale tez wyczerpany po studiach\n");
}
void bohater2(void)
{
    printf("2 Szymon - dorastales w kamienicy na Srodmiesciu, ukonczyles ASP i byles przez 2 lata poeta,\n ale nie bylo to zbyt dochodowe zajecie. Pouczyles sie troche z internetu - to co prawda nie do konca twoj swiat,\n ale masz spore zapasy energii\n");
}

void komunikat_energia(void)
{
    system("cls");
    printf("Praca w korporacji wykonczyla Cie psychicznie. W obawie o wlasne zycie dobrowolnie rezygnujesz z niej\n");
}

void komunikat_awans(void)
{
    system("cls");
    printf("Twoj sposob wykonywania zadan sprawil, ze w tej korporacji trafiles na slepy zaulek. \n Twoja kariera niestety bardziej sie juz nie rozwinie\n");
}

void endgame(int *a)
{
    a[0]=10; //awansowosc
    a[1]=10; //energia
    a[2]=10; //uznanie
    a[3]=0; //postep
    a[4]=0;  // sprawa recepcjonistki
    a[5]=0; //poznanie Kamila
    a[6]=0; //pomoc z rowerem, punkty relacji z K
    a[7]=0; //bycie złym człowiekiem
    a[8]=0; // 1 = 16 a, 2 = b, 3 = c
    a[9]=0; //1 przełożenie
    a[10]=0; //18A 1 = a, 2 = b, 3 = c (A,B jest średnie; C jest agresywne)
    a[11]=0; //18B 1 = a, 2 = b, 3 = c (A i C są neutralne, b - średnie)
    a[12]=0; //18C 1 = a , 2 = b , 3 =c (A i B są agresywne, C - neutralne)
    a[13]=0;// do kasacji
    a[14]=0;
    a[15]=0;
}

void zapis (int *a)
{
                int i;
                FILE *fp;
                fp=fopen("zapis.txt","w");

                for (i=0;i<_ROZM_;i++)
                {
                    fprintf(fp, "%d\n",a[i]);
                }
                fclose(fp);
                printf("dziekujemy za gre");
}

void odczyt(int *a)
{
        int i;
        FILE *fp;
        fp=fopen("zapis.txt","r");
        for (i=0;i<_ROZM_;i++)
        {
            fscanf(fp, "%d",&a[i]);
        }
        fclose(fp);
}
void zad1(int *a)
{
	int wybor;
	printf("Pytanie 1: Twoj pierwszy dzien w pracy. Godzina 8:09, jestes spozniony 9 minut przez remont na rondzie Mogilskim. Odczuwasz duzy stres w zwiazku z czym wchodzac do budynku nie zauwazasz stojacego po drugiej stronie drzwi mezczyzny i tracasz go drzwiami. Mezczyzna upada. Niewiele myslac:"
		"\n1. Pomimo spoznienia i mozliwych konsekwencji zatrzymujesz sie, przepraszasz potraconego mezczyzne i oferujesz mu pomoc;"
		"\n2. Nie zatrzymujesz sie, jedynie zerkajac na potraconego mezczyzne, wypowiadasz cichym tonem przepraszam;"
		"\n3. Ignorujesz zaistniala sytuacje i idziesz dalej;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
	a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=2;
          a[1]-=1;
          a[2]+=1;
          a[5]+=1;
	  break;
	}
	case 2:
	{
	    a[5]+=2;
	  break;
	}
	case 3:
	{
      a[0]-=1;
      a[1]+=1;
      a[2]-=1;
      a[5]+=3;
	  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}


    return;
}

void zad2(int *a)
{
	int wybor;
	printf("Kierujesz sie do windy....Po wyjechaniu na 5 pietro, pukasz do wskazanych przez recepcjonistke drzwi i wchodzisz do pomieszczenia:"
	    "\n1. Zaczynasz od razu tlumaczyc sie, ze spozniles sie przez korki na rondzie Mogilskim i bardzo przepraszasz za zaistaniala sytuacje;"
		"\n2. Probujesz zrzucia wine na recepcjonistke mowiac ze byles punktualnie lecz recepcjonistka nie mogla znalezc twoich danych w systemie;"
		"\n3. Unikasz tematu swojego spoznienia i przedstawiasz sie;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=1;
          a[1]-=2;
          a[2]+=1;
          a[4]+=1;
          break;
	}
	case 2:
	{
          a[0]+=1;
          a[1]-=2;
          a[2]+=1;
          a[4]+=2;
          a[7]+=1;
		  break;
	}
	case 3:
	{
          a[0]-=1;
          a[2]-=1;
          a[4]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad3(int *a)
{
	int wybor;
	printf("Pracodawca zrozumial twoje spoznienie i udzielil Ci rady aby dzien wczesniej sprawdzac w internecie czy na naszej trasie  nie sa planowane jakies roboty drogowe.Nastêpnie dostales indetyfikator oraz sluzbowego laptopa.Pol godziny pozniej znajdowales sie  juz na 3 pietrze przy swoim biurku, po wlaczeniu laptopa zobaczyles 5 zadañ w systemie:"
		"\n1. Pytasz najblizej siedzaca osobe o pomoc w wykonywaniu tych zadan tlumaczac sie ze to Twój pierwszy dzien;"
		"\n2. Zaczynasz sam wykonywaæ zadania, lecz bez pewnosci ze robisz je dobrze;"
		"\n3. Zaczynasz, lecz po bezowocnej godzinie pracy poddajesz sie;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=1;
          a[1]+=1;
          a[2]+=1;
		break;
	}
	case 2:
	{
          a[0]+=2;
          a[1]-=1;
          a[2]+=2;
		  break;
	}
	case 3:
	{
          a[1]-=2;
          a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad4(int *a)
{
	int wybor;
	printf("Dzien pierwszy minal.Kolejny dzien pracy, jestes punktualnie w firmie.Poznales kilka osob z naszego pietra. Pracujaca obok nas Sylwia organizuje urodzinowa imprezê na Kazimierzu i zaprasza Cie na przyjêcie:"
		"\n1. Odmawiasz, wiedzac ze impreza moze wymknac sie spod kontroli a jutro  zaczynasz prace o 7:00;"
		"\n2. Zgadasz sie, lecz o godzinie 22:00 dziekujesz solizantce za udana impreze i udajesz sie do domu, chcac wyspac sie na nastepny dzien;"
		"\n3. Zgadasz sie a nastepnie dajesz poniesc sie imprezie w skutek czego przeginasz z alkoholem...\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=2;
          a[1]+=1;
		break;
	}
	case 2:
	{
          a[0]+=2;
          a[1]-=1;
          a[2]+=2;
		  break;
	}
	case 3:
	{
          a[1]-=2;
          a[2]-=2;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad5(int *a)
{
	int wybor;
	printf("(tydzien pozniej) Szef zlecił ci dodatkowe zadanie i zasugerował wziąć do pomocy kilka osób, ponieważ jest to zadanie bardzo wymagające.Po przeanalizowaniu zadania wiesz, że jest ono poza twoimi możliwościami.Co robisz w takiej sytuacji:"
	    "\n1. Zajmujesz się sam powierzonym ci zadaniem, ponieważ chcesz pokazać szefowi, jak bardzo jesteś pracowity;"
		"\n2.Dobierasz sobie zespół kilku osób, z którymi najlepiej się dogadujesz i próbujesz się nimi „wysłużyć”, nie pokazując po sobie, że nie masz pojęcia, o co chodzi w tymże zadaniu;"
		"\n3. Sugerujesz szefowi, że nie jesteś odpowiednią osobą do wykonania tegoż zadnia;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=3;
          a[1]-=2;
          a[2]+=2;
		break;
	}
	case 2:
	{
          a[0]+=2;
          a[1]+=1;
          a[2]+=1;
		  break;
	}
	case 3:
	{
          a[0]-=2;
          a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad6(int *a)
{
	int wybor;
	printf("(6 miesiecy pozniej) BRAWO !!!Awansowales na team lidera jesteś jednym z najlepszych pracowników w firmie, o czym świadczą zdobywane przez ciebie nagrody. Lecz od pewnego czasu otrzymujesz oferty od konkurencji. Do wczoraj odrzucałeś wszystkie, lecz nagłe pojawiła się jak dotąd najkorzystniejsza, dzięki której będziesz mógł się jeszcze bardziej rozwinąć, jak zachowasz się w takiej sytuacji:"
	    "\n1. Odrzucasz jednak bez wahania nową ofertę, wiedząc, że kontrakt obowiązuje cię jeszcze przez 2 lata;"
		"\n2. Rozmawiasz o tym z szefem, który odradza ci przenosiny i wspólnie podejmujecie decyzję o pozostaniu;"
		"\n3. Gdy już wiadomość o twojej propozycji rozeszła się po firmie, ty dopiero wtedy, ogłaszasz decyzję o swoim pozostaniu, chcąc pokazać wszystkim twoje przywiązanie do firmy;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=1;
          a[2]+=1;
		break;
	}
	case 2:
	{
          a[0]+=2;
          a[1]-=1;
          a[2]+=1;
		  break;
	}
	case 3:
	{
          a[0]-=1;
          a[1]-=1;
          a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad7(int *a)
{
	int wybor;
	printf("(rok poznieJ) Ostatnio wszystko idzie po Twojej mysli lecz tego dnia ktos wlamal sie do Twojego mieszkania i ukradl firmowego laptopa.Zdajesz sobie sprawe z powagi sytuacji i postanawiasz:"
	    "\n1. Z własnej kieszeni odkupisz laptopa zanim widomość dojdzie do szefa;"
		"\n2. Za wszelką cenę będziesz chciał znaleźć winnego, obwiniajac znajomych ze to ich sprawka;"
		"\n3. Porozmawiasz z szefem na ten temat i jeśli trzeba będzie poniesiesz surowe konsekwencje;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[1]-=2;
		break;
	}
	case 2:
	{
          a[0]-=2;
          a[1]-=2;
          a[2]-=2;
          a[7]+=1;
		  break;
	}
	case 3:
	{
          a[1]-=1;
          a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad8(int *a)
{
	int wybor;
	printf("3 lipiec, kolejny upalny dzien.Klimatyzacja przestala dzialac, po dwoch godzinach zaczyna robic sie duszno..Nagle Jan z działu marketingu idac po wode zemdlal:"
		"\n1. Podbiegasz pod Jana a nastepnie sprawdzasz w jakim jest stanie jednoczesnie proszac aby ktos zadzwonil po pogotowie;"
		"\n2. Nie znasz sie na pierwszej pomocy w zwiazku z czym udajesz ze tego nie zauwazyles, majac nadzieje ze ktos inny mu pomoze;"
		"\n3. Podbiegasz pod Jana lecz jestes tak roztrzesiony ze nie jestes w stanie rozpoczac pierwszej pomocy, wolasz kogos innego;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=1;
          a[1]-=1;
          a[2]+=2;
		break;
	}
	case 2:
	{
          a[2]-=1;
          a[7]+=1;
		  break;
	}
	case 3:
	{
          a[0]+=1;
          a[1]-=2;
          a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad9(int *a)
{
	int wybor;
	printf("10 sierpnia, konczysz bardzo wazny projekt ktory moze byc kamieniem milowym dla Twojego przyszlego awansu.O godzinie 12:00 podchodzi do Ciebie szef i prosi o skserowanie dokumentacji dotyczacej kolejnego projektu:"
		"\n1. Odmawiasz szefowi tlumaczac sie ze jestes w kluczowym momencie projektu i niestety ale nie jestes w stanie teraz wykonac tego zadania;"
		"\n2. Wstrzymujesz sie z praca nad projektem i zgadzasz sie zrobic ksero otrzymanej dokumentacji;"
		"\n3. Zgadzasz sie zrobic ksero otrzymanej dokumentacji lecz tlumaczysz szefowi ze zrobisz to dopiero pod koniec dnia;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]-=2;
          a[2]-=1;
		break;
	}
	case 2:
	{
          a[0]+=2;
          a[1]-=2;
          a[2]+=1;
		  break;
	}
	case 3:
	{
          a[0]+=1;
          a[1]+=1;
          a[2]+=2;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad10(int *a)
{
	int wybor;
	printf("(2 tygodnie pozniej) Wychodzisz z pracy, na parkingu widzisz kobiete która nie moze odpiac blokady od swojego roweru. Postanawiasz:"
		"\n1. Pomoc jej;"
		"\n2. Isc prosto na autobus, majac nadzieje ze kobieta sama sobie poradzi;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=2;
          a[1]-=1;
          a[2]+=1;
          a[6]=1;
		break;
	}
	case 2:
	{
          a[7]+=1;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad11(int *a)
{
	int wybor;
	printf("1 wrzesnia(poniedzialek), dzien, w ktorym dostales 10 zadan do wykonania z czego 2 zadania sa pilne, 4 zadania powinny byc na wykonanane w przeciagu tygodnia, a pozostale 4 wymagaja wspolpracy z innymi pracownikami(czas do konca miesiaca, lecz wymagaja wiele pracy).Tego dnia postanawiasz:"
	    "\n1. zrobić 2 zadania pilne i 2 na ktore masz czas do piatku;"
		"\n2. zrobic 1 zadanie pilne i zaczac kompletowac zespol do zadan z deadlinem na koniec miesiaca;"
		"\n3. zrobic 2 zadania pilne a pozostale nastepnego dnia.Chcesz odpoczac;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=2;
          a[1]-=2;
          a[2]+=2;
		break;
	}
	case 2:
	{
          a[0]+=1;
          a[1]-=1;
          a[2]+=1;
		  break;
	}
	case 3:
	{
          a[0]+=2;
          a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zadquest1(int *a)
{

	int wybor;
	printf("Sylwia pyta się Ciebie czy kojarzysz dziewczynę która codziennie jeździ rowerem do sąsiedniego biurowca. Mówi że to jej koleżanka ze studiów i szuka mężczyzny który pomógł jej z blokadą. Odpowiadasz jej że:"
        "\n1.Tak, pomogłeś jej, prosisz Sylwię aby przekazała jej twój nr telefonu "
        "\n2.Przyznajesz się do pomocy, ale prosisz Sylwię, aby nie przekazywała koleżance tej wiadomości "
        "\n3.Nie przyznajesz się i wracasz do pracy \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[1]-=1;
          a[6]+=1;
		  break;
	}
	case 2:
	{
		  break;
	}
	case 3:
	{
          a[2]-=1;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}

}

void zad12(int *a)
{
	int wybor;
	printf("Czwartek, jeszcze jeden dzien i piatek!Wszystko sie uklada lecz nie masz juz sily bo tak intensywnym tygodniu.Planujesz dzisiaj:"
	    "\n1. zrobic podstawowe zadania, ciezsze zostawic na jutro;"
		"\n2. postarac sie zrobic wszystkie powierzone zadania pijac przy tym hektolitry kawy(mozesz popelnic drobne bledy);"
		"\n3. nie robić nic, dzieki czemu zregenerujesz sie i jutro bedziesz pelen sił;\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=1;
          a[2]+=1;
		break;
	}
	case 2:
	{
          a[0]+=1;
          a[1]-=1;
          a[2]+=1;
		  break;
	}
	case 3:
	{
          a[1]+=2;
          a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zadquest2(int *a)
{

	int wybor;
	printf("Tuż po awansie dzwoni telefon. Koleżanka Sylwii, Kinga, zaprasza Cię na kolację."
        "\n1.Z powodu nawału pracy prosisz o przesunięcie spotkania "
        "\n2.Chętnie zgadzasz się, bo pozostałe zadania jakoś się zrobi "
        "\n3.Dziwi Cię ta nachalność i postanawiasz odmówić \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[1]+=1;
          a[9]+=1;
		  break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[1]-=1;
	    a[6]+=1;
		  break;
	}
	case 3:
	{
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}

}

void zadquest3(int *a)
{
	int wybor;

    {
	printf("Tydzień na nowym stanowisku zakończył się sukcesem, postanawiasz dobrze się bawić. Spędzasz cudowny wieczór i czujesz się wyśmienicie. Po powrocie do mieszkania patrzysz w lustro i musisz podjąć decyzję:"
        "\n1.Postanawiasz spróbować kontynuować znajomość i wysyłasz do Kingi czułego SMSa z podziękowaniem "
        "\n2.Patrzysz sobie w oczy i wiesz że nie dasz rady pogodzić związku z pracą. Dzwonisz do Kingi i przepraszasz, że nic z tego nie będzie \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]-=1;
	    a[1]+=1;
	    a[6]+=1;
        break;
	}
	case 2:
	{
	    a[0]+=1;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
}

void zad13(int *a)
{
	int wybor;
	printf("BRAWO!!! ZOSTAŁEŚ KIEROWNIKIEM!!! Wraz z awansem przybylo Ci sporo obowiazkow, a wszystkie podejmowane przez Ciebie decyzje musza byc dobrze przemyslane. Powodzenia!"
        "(miesiac pozniej) Zostales wyslany do recepcji, aby zaniesc dokumenty dotyczace jednego z kluczowych klientow korporacji.\n\n");
	if (a[4]==1 || a[4]==3)
    {
        a[4]=0;
        printf("1.Zanosisz wspomniane wczesniej dokumenty i z usmiechem na twarzy zyczysz Pani w recepcji milego dnia. "
               "\n2. Zanosisz wspomniane wczesniej dokumenty i bez slowa wracasz do stanowiska. ");
        printf("Co wybierasz (1 czy 2: \n");
	    scanf("%d", &wybor);
        a[3]++;
	    switch (wybor)
	    {
	    case 1:
	    {
          a[2]+=1;
          a[4]+=1;
		break;
	    }
	    case 2:
	    {
          a[4]+=2;
		  break;
	    }
       default:
       {
        a[3]--;
        break;
       }
	   }
    }
    else if (a[4]==2)
    {
         printf("Niestety pierwszego dnia Pani z recepcji uslyszala jak powiedziles szefowi ze to z jej winy spozniles sie (spotkaly ja z tego powodu nieprzyjemnosci). Kobieta widzac ze awansowales chce polozyc kres Twojej karierze, rozpowiadajac wszystkim w korporacji ze jestes klamca. Postanawiasz:"
                "\n1. wreczyc kobiecie 200zl w ramach rekompensaty i przeprosić ja za swoje fatalne zachowanie "
                "\n2. zignorowac ja, czujac ze Twoja pozycja jest do nie zachwiania \n\n");
                printf("Co wybierasz (1 czy 2: \n");
	     scanf("%d", &wybor);
         a[3]++;
	     switch (wybor)
	     {
	     case 1:
	     {
          a[1]-=1;
		  break;
	     }
	     case 2:
	     {
          a[1]-=1;
          a[2]-=2;
		  break;
	     }
        default:
        {
        a[3]--;
        break;
        }
	    }
    }
}

void zad14(int *a)
{
	int wybor;
	if (a[5]==2 || a[5]==3)
    {
        printf("(tydzien pozniej) Wchodzisz do pracy i widzisz  ze na naszym pietrze szef rozmawia z Kamilem, zartuja miedzy soba."
                "Pytasz sie Sylwii kim jest ten mlody chlopak stosojacy kolo szefa. Myslasz pamietasz nieprzyjemna sytuacje z pierwszego dnia."
                "Okazuje sie ze Kamil to syn naszego szefa, ktory dopiero co skonczyl studia i zaczyna prace u ojca. Probujesz sie nie wychylac aby Kamil cie nie dostrzegl , niestety zegnajac sie z ojcem a nastepnie idac do windy dostrzegl Cie i popatrzyl z pogarda."
               "\n1. udajesz ze nie  zauwazyles jego wzroku i nadal pracujesz nad powierzonymi zadaniami;"
               "\n2. korzystajac z okazji starasz sie złapać Kamila zanim wejdzie do windy i przepraszasz go za zaistaniala w przeszlosci sytuacje;\n\n");
        printf("Co wybierasz (1 czy 2: \n");
	    scanf("%d", &wybor);
        a[3]++;
	    switch (wybor)
	    {
	    case 1:
	    {
          a[0]-=2;
          a[1]-=1;
          a[2]-=1;
		break;
	    }
	    case 2:
	    {
          a[1]-=1;
          a[2]+=1;
		  break;
	    }
       default:
       {
        a[3]--;
        break;
       }
	   }
    }
    else if (a[5]==1)
    {
         printf("Pytasz się  Sylwii kim jest Kamil , ze ma tak dobre relacje z szefem. Okazuje sie ze Kamil to syn naszego szefa , ktory dopiero co skonczyl studia i zaczyna prace u ojca. Akurat w tym czasie zaczyna ci się przerwa i idziesz zrobic kawę . Przechodzac obok nich , Kamil podaje Ci reke."
                "\n1. z wzajemnoscia usciskujesz reke Kamila i zyczysz mu milego dnia.  Zyskujesz aprobate w oczach szefa. "
                "\n2. dostrzegasz zagrozenie ze strony Kamila w zwiazku z czym szybko usciskujesz mu reke i bez slow odchodzisz \n\n");
                printf("Co wybierasz (1 czy 2: \n");
	     scanf("%d", &wybor);
         a[3]++;
	     switch (wybor)
	     {
	     case 1:
	     {
          a[0]+=1;
          a[2]+=2;
		  break;
	     }
	     case 2:
	     {
          a[2]-=1;
		  break;
	     }
        default:
        {
        a[3]--;
        break;
        }
	    }
    }
}

void zad15(int *a)
{
	int wybor;
	printf("Lecisz do Norwegii na bal podczas ktorego poznasz swojego najwiekszego kontrahenta... Po przylocie na miejsce i przygotowaniu sie na wieczor docierasz na bal. Twoja strategia na wieczor jest:"
        "\n1.Nawiazac jak najwiecej kontaktow a przede wszystkim zamienic pare zdan z Mr.Voogel oraz podziękować mu za wspolprace "
        "\n2.Dobrze sie bawić, zjesc i potanczyc. Przy okazji porozmawiac z Mr.Voogel "
        "\n3.Postawić tylko na dobra zabawe, nie chcesz nawiazywac nowych kontatkow \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[0]+=2;
          a[1]-=2;
          a[2]+=2;
		break;
	}
	case 2:
	{
          a[0]+=1;
          a[1]+=1;
          a[2]+=2;
		  break;
	}
	case 3:
	{
          a[1]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad16(int *a)
{
	int wybor;
	printf("Na balu jesteś świadkiem kilku spotkań Kamila z czołowymi osobistościami z waszej branży. Jednak te spotkania bardziej przypominają ci knucie potajemnej intrygi niż zwykłe wymiany zdań między konkurentami. Masz złe przeczucia co do intencji Kamila, więc:"
        "\n1.Postanawiasz porozmawiać z Kamilem sam na sam i wyjaśnić całą sytuację "
        "\n2.Udajesz, że nic nie wiesz i starasz się zapomnieć o całej sytuacji "
        "\n3.Zaczynasz uważnie obserwować Kamila, jednak nie próbujesz wyjaśnić z nim zaistniałej sytuacji \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
          a[1]-=1;
          a[8]+=1;
		break;
	}
	case 2:
	{
          a[2]-=1;
          a[8]+=2;
		  break;
	}
	case 3:
	{
          a[0]+=1;
          a[1]-=2;
          a[8]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad17(int *a)
{
	int wybor;
	printf("Po powrocie z Norwegii bierzesz udzial w negocjacjach dotyczacych przetargu na zaprojektowanie 20 000 tys m^2 przetrzeni biurowej. Zdajesz sobie sprawe z duzej konkurencji na rynku dlatego postanawiasz:"
        "\n1.tydzien przed negocjacjami przygotujesz wstepny kosztorys, ktory szczegolowo opracujesz i zoptymalizujesz aby miec pewnosc ze Twoja oferta bedzie najlepsza "
        "\n2.jestes pochloniety na co dzien w skutek czego poswiecasz jedynie jeden wieczor na przygotowanie oferty "
        "\n3.jestes przekonany ze Twoja firma posiada najlepsza oferta, dlatego udajesz sie  na negocjacje bez jakiegokolwiek przygotowania \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=2;
        a[1]-=1;
        a[2]+=2;
		break;
	}
	case 2:
	{
	    a[0]+=1;
	    a[1]-=2;
        a[2]+=1;
        break;
	}
	case 3:
	{
        a[0]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad18(int *a)
{
	int wybor;
	if (a[8]==1)
    {
	printf("Kamil, po rozmowie z tobą w Norwegii i wyparciu się stawianych przez ciebie zarzutów, zachowuje się coraz dziwniej. Zaczyna, za twoimi plecami, wypytywać twoich kolegów z pracy o twoje kompetencje i pracowitość oraz relacje z podwładnymi. W tej sytuacji:"
        "\n1.Ponownie zapraszasz go do siebie, ale tym razem grozisz mu, że powiesz o wszystkim jego ojcu (czyli twojemu szefowi)"
        "\n2.Od razu idziesz do szefa i opowiadasz o swoich spostrzeżeniach "
        "\n3.Wiedząc, że Kamil może mieć duży wpływ na twoją dalszą pracę, zaczynasz  obmyślać plan, jak się go pozbyć \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]-=1;
        a[1]-=1;
        a[2]+=1;
        a[10]+=1;
		break;
	}
	case 2:
	{
	    a[0]-=1;
        a[2]-=1;
        a[10]+=2;
        break;
	}
	case 3:
	{
        a[0]-=1;
        a[1]-=1;
        a[10]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
	}
	else if (a[8]==2)
    {
	printf("Dalej udajesz, że nic się nie stało, lecz Sylwia w twoim zachowaniu zauważa coś dziwnego. Przy pierwszej okazji zadaje ci pytanie, co cię gnębi, a ty:"
        "\n1.Za wszelką cenę próbujesz unikac tematu "
        "\n2.Opowiadasz jej wprost o swoich złych przeczuciach dotyczących Kamila, lecz ona bagatelizuje cala sprawe. Ty jednak jestes pewny swego i nie odpuszczasz "
        "\n3.Opowiadasz jej wprost o swoich złych przeczuciach dotyczących Kamila, lecz ona bagatelizuje cała sprawę. Wierzysz jej i kończysz temat Kamila \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
        a[1]-=1;
        a[11]+=1;
		break;
	}
	case 2:
	{
        a[2]-=1;
        a[11]+=2;
        break;
	}
	case 3:
	{
        a[2]+=1;
        a[11]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
	}
	else if (a[8]==3)
    {
	printf("Po powrocie z Norwegii starasz się ustalić, co Kamil planuje, bo czujesz, że ewidentnie coś tu jest nie tak. W tym celu:"
        "\n1.Zbierasz grupe zaufanych ci osob w firmie i obmyślacie plan, który pomoże wam zdemaskować Kamila"
        "\n2.W obawie o swoją pozycje po cichu szukasz przyczyn dziwnego zachowania syna twojego szefa "
        "\n3.Wydaje ci się, że najlepszym wyjściem będzie jednak odpuszczenie tej sprawy\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
        a[2]+=1;
        a[12]+=1;
		break;
	}
	case 2:
	{
	    a[0]+=1;
        a[1]-=1;
        a[12]+=2;
        break;
	}
	case 3:
	{
        a[0]-=1;
        a[1]+=1;
        a[12]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
	}
}

void zad19(int *a)
{
	int wybor;
	printf("Korporacja w której jestes kierownikiem rozrasta się. W przyszlym miesiacu przejmujecie swojego najwiekszego konkurenta. W cale to przedsiewziecie zaangazowanych jest mnostwo osob, to idealna okazja kiedy mozesz poszerzyc swoje umiejetnosci kierownicze, więc:"
        "\n1.kontaktujesz sie z Rada Nadzorcza korporacji informujac ich o swojej gotowosci do pomocy a takze posiadanych kompetencjach "
        "\n2.na biezaco interesujesz sie sprawa, lecz z braku czasu nie kontaktujesz sie z Rada Nadzorcza"
        "\n3.zdajesz sobie sprawe z powagi sytuacji, ale nie chcesz angazować sie w nowe przedsiewziecie\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=2;
        a[1]-=1;
        a[2]+=1;
		break;
	}
	case 2:
	{
	    a[0]+=1;
        break;
	}
	case 3:
	{
        a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zadquest4(int *a)
{


	int wybor;
	printf("Kinga dzwoni znów w nieodpowiednim momencie – gdy w korporacji wrze przez planowane przejęcie. Postanawiasz:"
        "\n1.Znów przełożyć spotkanie"
        "\n2.Mimo wątpliwości zgodzić się\n\n");
	printf("Co wybierasz (1 lub 2: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[1]+=1;
	    a[9]+=1;
        break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[1]-=1;
	    a[9]+=2;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}

}

void zadquest5(int *a)
{
    if (a[9]==2)
    {
	int wybor;
	printf("W pewien pochmurny dzień spotykasz się w  pracy ze złym spojrzeniem Sylwii. Domyślasz się co się stało."
        "\n1.Przepraszasz i wysyłasz Kindze kwiaty, głównie aby po firmie nie rozniosły się plotki "
        "\n2.Udajesz że nic się nie stało "
        "\n3.Prosisz Sylwię, aby nie wtrącała się w nie swoje sprawy \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=2;
	    a[1]-=1;
	    a[2]-=1;
        break;
	}
	case 2:
	{
	    a[1]-=1;
	    a[2]-=2;
		  break;
	}
	case 3:
    {
        a[1]-=1;
	    a[2]-=3;
	    a[7]+=1;
    }
	default:
    {   a[3]--;
        break;
    }
	}
    }
    else if (a[9]==3)
    {
	int wybor;
	printf("Spotkanie przebiegło w miłej, lecz nieco chłodnej atmosferze. Zdajesz sobie sprawę, że jego przesunięcie to był błąd. W tej sytuacji:"
        "\n1.Odpuszczasz i nie robisz w tej kwestii nic więcej."
        "\n2.Postanawiasz przynajmniej przeprosić za swoje zachowanie – być może poczujesz ulgę.\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[1]-=1;
        break;
	}
	case 2:
	{
	    a[1]+=2;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
}

void zad20(int *a)
{
	int wybor;
	printf("Polecono Ci zorganizowanie targow pracy. Wydarzenie to jest planowane dla 2tys. osób głownie studentów. Nie chcesz marnowac czasu wiec od razu postanawiasz:"
        "\n1.Powołac zespol, ktory stworzy stanowiska pod targi, zespol do marketingu, a także kampanii w social mediach. Osobiscie planujesz regularne dogladanie postepow "
        "\n2.Zajmujesz sie organizacja tych targow sam. Zdajesz sobie sprawe ze jest to ogromne wyzwanie, z niektorych rzeczy musisz zrezygnować "
        "\n3.Wykonujesz podstawowe rzeczy pod targi, bez marketingu i dobrej reklamy. \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=2;
		break;
	}
	case 2:
	{
	    a[0]+=1;
	    a[1]-=2;
	    a[2]+=1;
        break;
	}
	case 3:
	{
        a[1]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zad21(int *a)
{
    if (a[10]==1 || a[10]==2)
    {
	int wybor;
	printf("BUM!!! Poniedziałek rano, przychodzisz do firmy, a na twoim biurku leży wezwanie do szefa. Podczas rozmowy dowiadujesz się, że Kamil poskarżył się na ciebie szefowi, a, że jest jego synem, to ty stajesz się winny całej sytuacji. Podczas rozmowy szef zarzuca ci zbyt małe zaangażowanie w wykonywanie swoich obowiązków, a ty:"
        "\n1.Wymieniasz ostatnie sukcesy, jak targi pracy licznie odwiedzane przez studentów i innych gości, przejęcie głównego konkurenta w ostatnim czasie, w którym miałeś także swój udział, itp."
        "\n2.Probujesz przekonać szefa do swoich racji, zwierzając się ze swoich ostatnich spostrzeżeń "
        "\n3.Probujesz dowiesc, ze jest inaczej niż uważa szef, jednak o zachowaniu Kamila nic nie wspominasz \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=1;
		break;
	}
	case 2:
	{
	    a[1]-=1;
	    a[2]-=1;
        break;
	}
	case 3:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
    else if (a[10]==3 || a[11]==2 || a[12]==1 || a[12]==2)
    {
	int wybor;

	printf("BUM!!! Poniedziałek rano, przychodzisz do firmy, a na twoim biurku leży wezwanie do szefa. Podczas rozmowy dowiadujesz się, że Kamil poskarżył się na ciebie szefowi, że za jego plecami szukasz na niego jakiegoś „haka”. W tej sytuacji:"
        "\n1.Próbujesz przekonać szefa do swoich racji, zwierzając się ze swoich ostatnich spostrzeżeń "
        "\n2.Tylko próbujesz się bronić przed zarzutami \n\n");
	printf("Co wybierasz (1 lub 2: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
        a[1]-=1;
        a[2]-=1;
		break;
	}
	case 2:
	{
	    a[0]-=2;
	    a[1]-=1;
	    a[2]-=1;
        break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }

}

void zad22(int *a)
{
    if (a[10]==1 || a[10]==2 || a[10]==3 || a[11]==2 || a[12]==1 || a[12]==2)
    {
	int wybor;
	printf("Otrzymałeś od szefa ostrzeżenie, żeby nie doprowadzać do już więcej do takich sytuacji, dlatego postanawiasz już odpuścic temat Kamila."
        "Natomiast korporacja, w ktorej jestes kierownikiem postanawia otworzyć nowa filie. Jestes juz bardzo doswiadczonym kierownikiem i posiadasz spore umiejetnosci. Planujesz:"
        "\n1.przeprowadzic szkolenia dla przyszlych menedzerow i przekazac im wiele praktycznej wiedzy, ktora samodzielnie zdobyles "
        "\n2.stwierdzasz ze zdobycie kwalifikacji kosztowalo Cie wiele pracy dlatego tez nie masz ochoty dzielic sie swoja cenna wiedza "
        "\n3.jestes zdania ze najlepsza wiedze zdobywa sie samodzielnie więc nie pomagasz nowej kadrze a jedynie motywujesz ich do ciezkiej pracy \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=2;
		break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[2]-=2;
	    a[7]+=1;
        break;
	}
	case 3:
	{
        a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
    else if (a[11]==1 || a[11]==3 || a[12]==3)
    {
	int wybor;
	printf("Korporacja, w ktorej jestes kierownikiem postanawia otworzyć nowa filie. Jestes juz bardzo doswiadczonym kierownikiem i posiadasz spore umiejetnosci. Planujesz:"
        "\n1.przeprowadzic szkolenia dla przyszlych menedzerow i przekazac im wiele praktycznej wiedzy, ktora samodzielnie zdobyles "
        "\n2.stwierdzasz ze zdobycie kwalifikacji kosztowalo Cie wiele pracy dlatego tez nie masz ochoty dzielic sie swoja cenna wiedza "
        "\n3.jestes zdania ze najlepsza wiedze zdobywa sie samodzielnie więc nie pomagasz nowej kadrze a jedynie motywujesz ich do ciezkiej pracy \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=2;
		break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[2]-=2;
	    a[7]+=1;
        break;
	}
	case 3:
	{
        a[2]-=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
}

void zad23(int *a)
{
	int wybor;
	printf("Dostales najwieksze zlecenia z jakim kiedykolwiek miales do czynienia. To ogromna szansa dla Twojej kariery, ale musisz pamietac ze zle wykorzystana moze Cie pograzyc. Podejmujesz sie wyzwania i chcesz to zrobic w nastepujacy sposob:"
        "\n1.Znasz wieszkosc ludzi w firmie wiec starannie dobierasz zespoly dla kazdego procesu "
        "\n2.Wiesz ze mozesz duzo stracic dlatego wszystkim zajmujesz sie osobiscie, pracujesz w pelnym wymiarze godzin wraz z nadgodzinami a takze w weekendy w domu ( brakuje Ci obiektywnego spojrzenia na sprawe)"
        "\n3.Pracujesz w malym zespole,  majac pewnosc ze wszystko zostanie wykonane zgodnie z planem lecz w troche skromniejszej wersji \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=2;
        a[1]-=1;
        a[2]+=1;
        a[15]+=1;
		break;
	}
	case 2:
	{
	    a[0]+=1;
	    a[1]-=3;
	    a[2]+=1;
	    a[15]+=2;
        break;
	}
	case 3:
	{
	    a[0]+=2;
        a[1]-=2;
        a[2]+=2;
        a[15]+=3;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zadquest6(int *a)
{


	int wybor;
	printf("Jesteś już w związku od kilkunastu miesięcy. Zaczynasz dostrzegać jak wiele sił wysysa z Ciebie korporacja. Prace nad projektem ida pelna para. Kinga zaczyna się o ciebie niepokoić"
        "\n1.Postanawiasz wytłumaczyć twojej dziewczynie ile to dla ciebie znaczy i obiecujesz że później będzie tylko lepiej (-1,0,0)"
        "\n2.Postanawiasz poświęcić jej odpowiednią ilość uwagi, nawet kosztem przyszłości (-5,2,1)\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]-=1;
        break;
	}
	case 2:
	{
	    a[0]-=5;
	    a[1]+=2;
	    a[2]+=1;
		  break;
	}
	default:
    {   a[3]--;
        break;
    }
	}

}

void zad24(int *a)
{
    if (a[15]==1)
    {
	int wybor;
	printf("Zlecenie dobiegło końca, a ty przewidujesz jego ogromny sukces. Jednak będąc już w domu, po godzinach, odbierasz nagle telefon od szefa, że kontrahent wycofał się ze zlecenia, któremu przewodziłeś. Jesteś pewien, że wszystko było w porządku, więc natychmiast kontaktujesz się ze zleceniodawcą. Od niego dowiadujesz się, że osoby odpowiedzialne za wysłanie gotowego projektu spóźniły się z wysyłką, a oni nie tolerują takiego zachowania. Co robisz:"
        "\n1.Wyciągasz konsekwencje, a grupa odpowiedzialna za wysyłke dostaje srogie kary "
        "\n2.Bierzesz całą winę na siebie "
        "\n3.Bierzesz winę na siebie, jednak od grupy odpowiedzialnej za wysyłke oczekujesz zwrotu firmie poniesionych strat ze względu na zerwanie kontraktu \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
	    a[0]+=1;
	    a[7]+=1;
		break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[1]-=2;
	    a[2]+=2;
        break;
	}
	case 3:
	{
	    a[0]+=1;
        a[1]-=1;
        a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
    else if (a[15]==2)
    {
	int wybor;
	printf("Projekt gotowy, wysłany, lecz ty jesteś wyczerpany dwoma tygodniami ciągłego stresu, spania zaledwie 3-4 godziny dziennie, do tego ciągle z tyłu głowy masz dawną sprawę z Kamilem. W takiej sytuacji:"
        "\n1.Poddajesz się i bierzesz tydzień wolnego (-2,3,0)"
        "\n2.Mimo ogromnego zmęczenia dalej normalnie pracujesz (2,-3,2)"
        "\n3.Oddajesz czesc swoich obowiązków Sylwii, a sam starasz się brac teraz mniej zleceń (1,2,-2)\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
        a[0]-=2;
        a[1]+=3;
		break;
	}
	case 2:
	{
	    a[0]+=2;
	    a[1]-=3;
	    a[2]+=2;
        break;
	}
	case 3:
	{
	    a[0]+=1;
	    a[1]+=2;
	    a[2]-=2;
        break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
    else if (a[15]==3)
    {
	int wybor;
	printf("Projekt nie do końca spotkał się z uznaniem kontrahenta, ponieważ według niego był po prostu zbyt skromny. W tej sytuacji szef wzywa cię „na dywanik”, a ty:"
        "\n1.Starasz się przekonać szefa, że projekt choć jest skromny, to jednak bardzo dopracowany (1,-1,0)"
        "\n2.Zrzucasz wine na zespół, który, wedłud ciebie, mógł bardziej przyłożyć się do projektu (1,0,-1)"
        "\n3.Bierzesz wine na siebie, uzasadniając sprawę tym ze popełniłeś bląd przy doborze grup i ludzi do zadań (-1,-1,2) \n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
        a[0]+=1;
        a[1]-=1;
		break;
	}
	case 2:
	{
	    a[0]+=1;
	    a[2]-=1;
	    a[7]+=1;
        break;
	}
	case 3:
	{
	    a[0]-=1;
	    a[1]-=1;
	    a[2]+=2;
        break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
    }
}

void zad25(int *a)
{
	int wybor;
	printf("Jutro najwazniejszy dzien w Twojej karierze, dzień, w którym zostanie wybrany nowy CEO firmy. Możesz to być właśnie ty. Dlatego twój wybor na dzisiejszy wieczór: "
        "\n1.planujesz wypoczac po inwesywnym miesiacu (0,2,0)"
        "\n2.idziesz na impreze, gdzie planujesz sie odstresowac (-1,1,0)"
        "\n3.pozostajesz w ciaglym skupieniu i przygotowujesz na wszelki wypadek mowę na bankiet (2,-2,1)\n\n");
	printf("Co wybierasz (1, 2 lub 3: \n");
	scanf("%d", &wybor);
    a[3]++;
	switch (wybor)
	{
	case 1:
	{
        a[1]+=2;
		break;
	}
	case 2:
	{
	    a[0]-=1;
	    a[1]+=1;
        break;
	}
	case 3:
	{
	    a[0]+=1;
	    a[1]-=2;
        a[2]+=1;
		break;
	}
	default:
    {   a[3]--;
        break;
    }
	}
}

void zakonczenie1(void)
{
    printf("Co prawda nie udało Ci się dojść na sam szczyt, ale zajmujesz przyzwoite stanowisko, a także znalazłeś swoją drugą połówkę."
           "Swietnie ulozyles sobie zycie – GRATULACJE ");
}
void zakonczenie2(void)
{
    printf("Nie udało Ci się spelnic swojego marzenia, pomimo podejmowania nadludzkich wysilkow."
           "Powinienes odpowiedzieć sobie na pytanie: Quo vadis ?");
}
void zakonczenie3(void)
{
    printf("Kraków stal się twoja ziemia obiecana. Znalazles tu wszystko co potrzebne do zycia."
           "Jestes teraz na szczycie, tylko teraz uważaj aby nie spaść – GRATULACJE");
}
void zakonczenie4(void)
{
    printf("Spełniłeś swoje marzenie i jesteś CEO. Lecz jednak dazyles po trupach do celu. \nMusisz nauczyć się bardziej szanować innych ludzi, inaczej twoja kariera może się szybko skonczyc.");
}

void zakonczenie5(void)
{
    printf("Spełniłeś swoje marzenie i jesteś CEO. W drodze na szczyt towarzyszyli ci inni ludzie.\nDzięki wzajemnej pomocy i twojej ciężkiej pracy zaszedles tak daleko. Dzieki temu bez wyrzutow sumienia możesz spogladac na Krakow ze swojego apartamentu.  Gratulacje 😉" );
}
