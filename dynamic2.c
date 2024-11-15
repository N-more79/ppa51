#include<stdio.h>    // standard i/p o/p 
#include<stdlib.h>   // standard library

int main()
{
    int *ptr = NULL;

    // step 1 =  allocate the memory
    ptr =(int *) malloc(5 * sizeof(int));

    // step 2 = use the memory

    // step 3 = seallocate the memory 
    free(ptr);
    return 0;
}