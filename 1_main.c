//202510306219
//feiyu11_2025@qq.com
//杨昊澜

#include <stdio.h>

int main() {
    int n, is_prime = 1;//is_prime=1默认是质数，后续判断不满足则设为0

    //1.接收用户输入的小于50的正整数
    printf("请输入小于50的正整数作为密钥：");
    scanf("%d",&n);

    //先判断输入是否符合“小于50的正整数”基本要求
    if (n <= 0 || n >= 50){
        printf("密钥不安全，请重新输入\n");
        return 0;
    }
    //校验n是否为质数（只能被1和本身整除）（1不是质数）
    if (n==1) {
        is_prime = 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime == 1){
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}//
//
//
#include <stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
