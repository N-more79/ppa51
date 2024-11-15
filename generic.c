#include<stdio.h>

int main()
{
    char ch = 'a';
    int i = 11;
    float f = 7.77;
    double d = 80.8899;


    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;

    printf("%c\n",*cp);
    printf("%i\n",*ip);
    printf("%d\n",*dp);
    printf("%f\n",*fp);

    vp = &ch;
    printf("%c\n",*(char *)vp);

    vp = &i;
    printf("%d\n",*(int *) vp);

    return 0;
}