#include <stdio.h>

int main() {
    int i = 3101;

    int additional = i - 1500;
    if (additional <= 0) {
        printf ("70元");
    }
        else if (additional <= 100) {
            printf("80元");    
        }    
        else {
            int count = additional/100;
            int left = additional%100;
            if (left > 0){
                left = 1;
            }
            int sum = (left + count)*10 + 70;
            printf ("%d元\n", sum);
        }
    return 0;
    }

