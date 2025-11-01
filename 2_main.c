//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main(){

    for (int num = 100; num <= 999; num++) {

        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;

        if (hundreds * hundreds * hundreds + 
        tens * tens * tens +
        units * units * units == num) {
            if (num == 153) {
                printf("%d",num);
            } else {
                printf("%d",num);
            }
        }
    }
    printf("\n");
    return 0;
}
