#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(){
    time_t start = time(0);
    printf("Prime-Finder\n");
    printf("Start Time: %d\n", start);

    int count = 0;
    int k = 0;

    while(1){
        k++;
        bool isPrime = true;
        for (int i = 2; i < k; i++){
            if (k % i == 0){
                //printf("%d is not a prime.\n", k);
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            //printf("%d is a prime.\n", k);
            count++;
            if (count % 1000 == 0){
               time_t current = time(0);
               int duration = current - start;
               printf("%d primes found, in %d seconds.\n", count, duration);
               if (duration > 0){
                   int average = count / duration;
                   printf("Average: %d primes per second.\n", average);   
               }
               
            }
        }

    }
    
    return 0;
}