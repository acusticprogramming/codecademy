#include <stdio.h> //ćwiczenia z rozdzialu 2 - wstęp do C

//int main(void) //zadanie 1
// {
//    printf("Aleksander Sienkiewicz\n");
//    printf("Aleksander\nSienkiewicz\n");
//    printf("Aleksander ");
//    printf("Sienkiewicz");
//    return 0;
//}
//int main(void) //zadanie 2
//{
//    printf("Aleksander Sienkiewicz\nWiosny Ludow 3/11\nSzczecin 71-471");
//    return 0;
//}
//int main(void) //przeliczanie lat na dni
//{
//    int lataNaDni = 365 * 23;
//    printf("23 lata na dni to: %d dni",lataNaDni);
//    return 0;
//}
//void wolaj(void);//wypisanie "Panie Janie!"
//void wstan(void);//wypisanie "Rano wstań!"
//
//int main(void)//zadanie 4 wypisanie z dwoma osobnymi funkcjami
//{
//    wolaj();
//    wolaj();
//    wstan();
//    return 0;
//}
//
//void wolaj(void)
//{
//    printf("Panie Janie!\n");
//}
//
//void wstan(void)
//{
//    printf("Rano wstan!\n");
//}
//void br(void);//wypisanie Brazylia, Rosja
//void ic(void);//wypisanie Indie, Chiny
//int main(void) //zadanie 5, wypisanie z dwoma funkcjami krajów
//{
//    br();
//    printf(", ");
//    ic();
//    printf("\n");
//    ic();
//    printf("\n");
//    br();
//}
//
//void br(void)
//{
//    printf("Brazylia, Rosja");
//}
//
//void ic(void)
//{
//    printf("Indie, Chiny");
//}
//int main(void)//zadanie 6 - tworzenie zmiennej liczba o wartosci 10, podwojenie jej oraz kwadrat. Wypisanie na końcu
//{
//    int liczba = 10;
//    int podwojona = liczba * 2;
//    int kwadrat = liczba * liczba;
//    printf("Wartosc zmiennej liczba: %d\nWartosc podwojna: %d\nWartosc kwadratowa: %d",liczba,podwojona,kwadrat);
//    return 0;
//}
//void usmiech(void);
//int main(void)//zadanie 7 - wyswietlanie "Usmiech! przez zewnetrzna funkcje.
//{
//    usmiech();
//    usmiech();
//    usmiech();
//    printf("\n");
//    usmiech();
//    usmiech();
//    printf("\n");
//    usmiech();
//    return 0;
//}
//
//void usmiech(void)
//{
//    printf("Usmiech!");
//}
//void raz_trzy(void); // funkcja ktora wyswietla "raz" wywoluje funkcje dwa i wyswietla "trzy"
////void dwa(void); // funkcja wyswietlajaca "dwa"
////int main(void) // zadanie 7 funkcje wywolujace inny funkcje
////{
////    printf("zaczynamy:\n");
////    raz_trzy();
////    printf("koniec!");
////    return 0;
////}
////
////void raz_trzy(void)
////{
////    printf("raz\n");
////    dwa();
////    printf("trzy\n");
////}
////
////void dwa(void)
////{
////    printf("dwa\n");
////}