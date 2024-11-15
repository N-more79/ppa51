#include<stdio.h>

struct demo
{
    int no;
    float f;
    double d;
    int i;
};

int main()
{
    struct demo obj;
    struct demo *ptr = &obj;

    ptr->no = 11;
    ptr-> f  = 3.33;
    ptr-> d = 20.3344;
    ptr-> i  = 21;

    printf("%d\n",ptr->no);


    return 0;
}