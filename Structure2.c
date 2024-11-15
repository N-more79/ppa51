#include<stdio.h>

#pragma pack(1)
struct demo
{
    int no;
    float f;
    double d;
    int i;
};

int main()
{
    struct demo obj1;
    struct demo obj2;


    printf("%d\n",sizeof(obj1));

    obj1.no=11;
    obj1.f=3.33;
    obj1.d=6.9999;
    obj1.i=21;


    obj2.no = 101;
    obj2.f = 10.22;
    obj2.d = 90.9999;
    obj2.i = 111;

    printf("%d\n",obj1.no);
    printf("%d\n",obj2.no);
    return 0;
}