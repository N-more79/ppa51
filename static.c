#include<stdio.h>

void display()
{
    int i = 10;
    static int j = 10;

    i++;
    j++;


    printf("value of i : %d\n",i)
    printf("value of j : %d\n",j)

}


int main()
{
    display();
    display();
    display();
    display();


    return 0;
}