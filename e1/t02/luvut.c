#include <stdio.h>
#include <math.h>

int TWO   = 2;
int THREE = 3;
int FIVE  = 5;

int filter(int i) {
    if(i % TWO == 0 || i % THREE == 0 || i % FIVE == 0 ) {
        return 1;
    }
    else {
      return 0;
    }
}

int main(void) {
    int i;
    for (i = 1; i < 101; i++) {
        
        if(filter(i) == 0) {
            if(i != 1){ 
                printf(" ");
            }
            printf("%i", i);
        }
    }
    printf("\n");
    return 0;
}

