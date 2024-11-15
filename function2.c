#include<stdio.h>

//function defination
int Addition(int value1, int value2)
{
    int Result = 0; //local variable

    Result = value1 + value2;

    return Result;
}

int main()       // entry point function
{
    int No1 = 0, No2 = 0 , Ans = 0;     // local variable

    printf("enter first number :\n");
    scanf("%d" ,&NO1);

    printf("enter second number :\n");
    scanf("%d" ,&No2);

    Ans = Addition(No1,No2);    // function call

    printf("Addition is : %d\n",Ans);


    return 0;
}