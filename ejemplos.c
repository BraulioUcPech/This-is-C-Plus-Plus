#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("teclea un numero ");
    scanf("%d",&num);

    if (num % 3 == 0){
        printf("es divisbile %d",num);

    }
    if (num > 0){
        printf("es positivo %d",num);
    }
    if (num < 0){
        printf("negativo %d",num);
    }


    system("pause");
    return 0;
}
