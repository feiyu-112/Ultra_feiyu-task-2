//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;
    int i = 0;

    printf("请输入4个整数 （以空格分隔）：");
    while (i < 4) {
        scanf("%d",&arr[i]);
        sum += arr[i];
        i++;
    }

    arr[4] = sum;

    i = 0;
    while (i < 5){
        if (i == 4) {
            printf ("%d",arr[i]);
        }else{
            printf("%d", arr[i]);
        }
        i++;
    }
    return 0;
}
