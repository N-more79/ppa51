#include<stdio.h>

int main()
{
    char c = 'v';
    int i=10;
    float f= 9.7;
    double d = 79.997797;

    
    printf("%d\n",sizeof(c)); //1
    printf("%d\n",sizeof(i)); //4
    printf("%d\n",sizeof(f)); //4
    printf("%d\n",sizeof(d)); //8

   return 0; 
}