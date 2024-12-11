#include <stdio.h>

void vypis(int* pole, int* delka){
    for(int i = 0; i < delka; i++){
        printf("%d\n", pole[i]);
    }
}

int main(void)
{
    int pole[] = { 7, 6, 4, 2, 7 };
    const int delka =  sizeof(pole) / sizeof(int);

    vypis(pole, delka);

    return 0;
}