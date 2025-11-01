//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main() {
    int arr[5];  // 存储5个偶数的数组
    int count = 0;  // 已收集的偶数数量
    int num;       // 临时存储输入的数字

    printf("请输入数字（仅收集偶数，共需要5个）：\n");

    // 循环收集5个偶数
    while (count < 5) {
        scanf("%d", &num);  // 读取输入的数字
        if (num % 2 == 0) {  // 判断是否为偶数
            arr[count] = num;  // 是偶数则存入数组
            count++;           // 计数加1
        }
        // 如果是奇数则不存入数组，继续循环等待下一个输入
    }

    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);  // 最后一个数
        } else {
            printf("%d ", arr[i]); 
        }
    }
    printf("\n");

    return 0;
}
