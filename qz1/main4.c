#include <stdio.h>

int main() {
    for (int i = 1,j = 1;i<=9;) {
        printf("%d*%d=%d\t", i , j , i*j);
        j++;
        while (j == 10){
            i++;
            j = 1;
            printf("\n");
        }
    }
}
