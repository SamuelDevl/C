#include <stdio.h>

#define ROZMER 10

void inicializuj(char* pole)
{
    int k = 0;
    for (int i = 0; i < ROZMER; i++)
    {
        for (int j = 0; j < ROZMER; j++)
        {
            pole[k] = '-';
            ++k;
        }

        pole[k] = '\n';
        ++k;
    }

    pole[k] = '\0'; // ukonceni retezce
}


void nakresli1(char *pole){
    for(int i = 0; i < ROZMER; i++){
        pole[i] = 'x';
        pole[i + (ROZMER -1)*(ROZMER+1)] = 'x';
    }
}

void nakresli2(char *pole){
    for(int i = 0; i < (ROZMER + 1) * ROZMER; i+= ROZMER + 1){
        pole[i] = 'x';
        pole[i + ROZMER - 1] = 'x';
    }
    
}

void nakresli3(char *pole){
    int k = 0;
    for(int i = 0; i < ROZMER; i++){
        for(int j = 0; j < ROZMER; j++){
        
            if(j == ROZMER - i - 1 || j == i){
                pole[k] = 'x';
            }
        ++k;
    }
    ++k;
    }
    
}


int main(void)
{

    char pole[(ROZMER * (ROZMER + 1)) + 1];

    inicializuj(pole); 

    // vykreslete obrazec

    //nakresli1(pole);
    //nakresli2(pole);
    nakresli3(pole);
    puts(pole);

    return 0;
}