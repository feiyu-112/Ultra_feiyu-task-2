//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main() {
    int n, is_prime = 1;
    int i = 2;

    printf("请输入小于50的正整数作为密钥：");
    scanf("%d",&n);

    if (n <= 0 || n >= 50) {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }

    if (n == 1) {
        is_prime = 0;
    } else {
        while (i < n)
        {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
            i++;
        }
}
if (is_prime == 1){
    printf("密钥安全，设置密码成功\n");
} else {
    printf("密钥不安全，请重新输入\n");
}
return 0;
}
