#include<stdio.h>
int main()
{
    char ch;
    int A,B,C,D,E;
    printf("��������Ҫ�Ĵ�дӢ����ĸ�����㽫�ῴ��һ��������:");
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

