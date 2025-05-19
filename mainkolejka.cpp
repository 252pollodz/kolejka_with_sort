#include <stdio.h>
#include "kolejka.h"

void menu(void)
{
    printf("\n");
    printf("1 - Dodaj do kolejki (add)\n");
    printf("2 - odczytaj pierwsza wartosc z kolejki (first)\n");
    printf("3 - usun z kolejki (del)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("Kolejka - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isKolejkaFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    add(temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pelna!!!\n\n");
                }

                break;

            case 2:
                if (!isKolejkaEmpty()) {
                    temp = first();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }

                break;

            case 3:
                if (!isKolejkaEmpty()) {
                    temp = del();
                    printf("Usunieta wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona STOS pusty!!!\n\n");
                }
                break;

            case 4:
                if (isKolejkaEmpty()) {
                    printf("Kolejka jest pusta.\n");
                }
                else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isKolejkaFull()) {
                    printf("Kolejka jest pelny.\n");
                }
                else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}//
// Created by student on 19.05.2025.
//
