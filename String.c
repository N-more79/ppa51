#include <stdio.h>
#include<String.h>

int main()
{
    char arr[] = {'H','e','l','l','l','o','\0'};

    char brr = 'Hello';

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(brr));

    printf("lenght of String is : %d\n",strlen(arr));
    printf("lenght of String is : %d\n",strlen(brr));

    return 0;
}