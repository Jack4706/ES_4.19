#include <stdio.h>

int main() {

    int num, primo = 0;

    printf("inserire il numero:\n");
    scanf("%d", &num);

    for(int i = 2; i < num; i++) {
        if(num % i == 0) {
            primo = 1;
        }
    }
    if(primo) {
        printf("il numero non e' primo");
    }
    else {
        printf("il numero e' primo");
    }


    return 0;
}
