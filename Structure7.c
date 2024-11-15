#include<stdio.h>

struct Demo
{
    int no;
    float f;
    int *p;
    float *q;
};
int main()
{
    struct Demo obj;
    int i = 11;
    float marks = 90.99;

    obj.no = 61;
    obj.f = 3.33;
    obj.p = &i;
    obj.q = &marks;

    printf("%d\n",*(obj.p)); //11
    printf("%f\n",*(obj.q)); // 90.99
    

    return 0;  

}