#include<stdio.h>

int main()
{

    int price[] = {67,66,88,99,44,77};

    printf("%d\n",price[0]);
    printf("%d\n",price[2]);
    printf("%d\n",price[5]);

    printf("%lu\n",sizeof(price));
    printf("%lu\n",sizeof(price[1]));
    printf("%lu\n",sizeof(price[3]));
    



    return 0;
}