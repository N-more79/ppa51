#include<stdio.h>

int main()
{
    int A = 10, B = 10;
    int No1 = 0, No2 = 0;

    No1 = A++;  // post increment (first initialise then increment)
    printf("value of No1 : %d\n",No1); // 10
    printf("value of A : %d\n",A);    // 11

    No2 = ++B;  // pre increment (first increment then initialise)
    printf("value of No2 : %d\n",No2);  // 11
    printf("value of B : %d\n",B);     // 11



    return 0;
}