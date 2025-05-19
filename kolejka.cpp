#define KOLEJKA_SIZE 5
#include "Stack.h"
int kol_table[KOLEJKA_SIZE] = { 0 };
int kol_index = 0;
int del_index = 0;
int isKolejkaEmpty(void)
{
    return (kol_index == 0) ? 1 : 0;
}

int isKolejkaFull(void)
{
    return (kol_index == (KOLEJKA_SIZE)) ? 1 : 0;
}

int del(void)
{
    if (!isKolejkaEmpty())
    {
        del_index++;
        return kol_table[del_index-1];
    }

    return kol_table[0];
}

int first(void)
{
    if (!isKolejkaEmpty())
    {
        return kol_table[del_index];
    }

    return kol_table[0];
}

void add(int val)
{
    if (!isKolejkaFull())
    {
        kol_table[kol_index] = val;
        kol_index++;
    }
}//
// Created by student on 19.05.2025.
//
