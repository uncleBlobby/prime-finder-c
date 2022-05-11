#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("Hello, C\n");

    int k = 0;

    for (int i = 0; i < 10; i++){

        printf("%d\n", i);
    }

    while(1){
        k++;
        bool isPrime = true;
        for (int i = 2; i < k; i++){
            if (k % i == 0){
                printf("%d is not a prime.\n", k);
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d is a prime.\n", k);
        }
    }
    
    return 0;
}