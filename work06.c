#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int ray[10];
    ray[0] = 0;

    srand(time(NULL));
    int i;
    for (i = 1; i < 10; i++){
        ray[i] = rand();
    }
    
    for (i = 0; i < 10; i++){
        printf("ray[%d] = %d\n", i, ray[i]);
    }

    printf("===========================\n");

    int ar[10];

    int *rayp = &ray;
    int *arp = &ar;

    for (i = 0; i < 10; i++){
        *(arp + i) = *(rayp + 9 - i);
    }
    for (i = 0; i < 10; i++){
        printf("*(arp + %d) = %d\n", i, *(arp + i));
    }
}

