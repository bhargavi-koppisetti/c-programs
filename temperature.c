#include <stdio.h>
int main() {
    int temp;
    printf("Enter the degrees of temperature:\n");
    scanf("%d", &temp);
    int summer;
    printf("Enter 1 for summer and 0 for notsummer:\n");
    scanf("%d", &summer);
    if (summer == 1) {
        if (temp>=60 && temp<=100)
        {
            printf("true");
        } else {
            printf("false");
        }
    } else {
        if (temp>=60 && temp <= 90) {
            printf("true");
        } else {
            printf("false");
        }
    }
}