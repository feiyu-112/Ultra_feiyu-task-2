//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main() {
    int num = 100;          // 循环起始值（100），用于遍历所有三位数
    int first_flag = 1;     // 标记是否为第一个水仙花数，控制输出空格
    int hundreds, tens, units;  // 存储百位、十位、个位数字

    // while循环：遍历100到999的所有数
    while (num <= 999) {
        // 提取当前数的百位、十位、个位
        hundreds = num / 100;
        tens = (num / 10) % 10;
        units = num % 10;

        // 判断是否为水仙花数（各位立方和等于原数）
        if (hundreds * hundreds * hundreds + 
            tens * tens * tens + 
            units * units * units == num) {
            
            // 控制输出格式：第一个数无前置空格，后续数有前置空格
            if (first_flag == 1) {
                printf("%d", num);
                first_flag = 0;  // 第一个数输出后，标记置0
            } else {
                printf(" %d", num);
            }
        }

        num++;  // 数字自增，进入下一次循环
    }

    printf("\n");  // 输出结束后换行，符合控制台习惯
    return 0;
}
