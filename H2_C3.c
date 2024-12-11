#include <stdio.h>

struct Student
{
    char* jmeno;
    double test1;
    double test2;
};

void vypis(const struct Student* const studenti, const int pocet)
{
    for (int i = 0; i < pocet; i++)
    {
        printf("%s test1: %lf test2: %lf\n", studenti[i].jmeno, studenti[i].test1, studenti[i].test2);
    }
}

void najdiNejlepsihoStudenta(const struct Student* const studenti, const int pocet)
{
    int indexNejlepsiho = 0;
    double nejlepsiSkore = studenti[0].test1 + studenti[0].test2;

    for (int i = 1; i < pocet; i++)
    {
        double aktualniSkore = studenti[i].test1 + studenti[i].test2;
        if (aktualniSkore > nejlepsiSkore)
        {
            nejlepsiSkore = aktualniSkore;
            indexNejlepsiho = i;
        }
    }

    printf("Student s nejlepsim vysledkem je: %s (skore: %lf)\n", studenti[indexNejlepsiho].jmeno, nejlepsiSkore);
}

int main(void)
{
    const struct Student studenti[] =
    {
        {"Karel", 70.0, 50.0},
        {"Jiri", 30.0, 50.0},
        {"Alena", 70.0, 90.0},
        {"Pavel", 50.0, 50.0}
    };

    vypis(studenti, 4);

    // Najdete a vypiste jmeno studenta s nejlepsim vysledkem ze dvou testu
    najdiNejlepsihoStudenta(studenti, 4);

    return 0;
}
