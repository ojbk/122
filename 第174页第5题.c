#include<stdio.h>
int main()
{
    char ch;
    int A,B,C,D,E;
    printf("输入你想要的大写英文字母并且你将会看到一个金字塔:");
    scanf("%c",&ch);
    B = ch;
    for (A=65;A<=B;A++)
    {
        for (C=A;C<B;C++)
        printf(" ");

             for (D=65;D<=A;D++)
             printf("%c",D);

                for (E=1;E<=A-65;E++)
                printf("%c",A-E);


        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}

