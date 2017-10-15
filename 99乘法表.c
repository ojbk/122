#include<stdio.h>//这个乘法表 累的一批利用了8个for循环不好！
int main(void)
{
    int n;
    printf("                                99乘法表\n");
    printf("%d*%d=1\n",n=1,n=1);
    printf("%d*%d=2\t%d*%d=4\n",n=1,n+1,n+1,n+1);
    for (n=1;n<=3;n++)
        printf("%d*%d=%d\t",n,3,3*n);
        printf("\n");

    for (n=1;n<=4;n++)
        printf("%d*%d=%d\t",n,4,4*n);
        printf("\n");

    for (n=1;n<=5;n++)
        printf("%d*%d=%d\t",n,5,5*n);
        printf("\n");

    for (n=1;n<=6;n++)
        printf("%d*%d=%d\t",n,6,6*n);
        printf("\n");

            for (n=1;n<=7;n++)
        printf("%d*%d=%d\t",n,7,7*n);
        printf("\n");
                    for (n=1;n<=8;n++)
        printf("%d*%d=%d\t",n,8,8*n);
        printf("\n");
                        for (n=1;n<=8;n++)
        printf("%d*%d=%d\t",n,8,8*n);
        printf("\n");

                             for (n=1;n<=9;n++)
        printf("%d*%d=%d\t",n,9,9*n);
        printf("\n");

        printf("打个乘法表贼吉儿累！");
    return 0;
}
