#include <stdio.h>
int main() {
    int age, student;
    scanf("%d %d", &age, &student);

    if (age < 12)
        printf("50");
    else if (age <= 60) {
        if (student == 1)
            printf("80");
        else
            printf("100");
    } else
        printf("60");

    return 0;
}
