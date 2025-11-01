#include <stdio.h>

int main() {
    int arr[5] = {0};  // 定义长度为5的数组，初始化为0
    int i;

    // 输入当前记录的前4位学生学号
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    // 将数组元素整体后移一位（原第1-4位依次移至2-5位）
    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // 在第1位补0
    arr[0] = 0;

    // 输出更新后的完整数组（最后一位后无空格）
    for (i = 0; i < 5; i++) {
        if (i == 4) {
            printf("%d", arr[i]);
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
