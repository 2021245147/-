#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    int birth_year;

    scanf("%d", &age);

    birth_year = 2024 - age;

    printf("%d\n", birth_year);

    return 0;
}
