// =================================================================================
// File: symarray.cpp
// =================================================================================
// Programmer: Jennifer King
// Date: 3/18/2018
// Project: Pointers & Arrays
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This program determines whether or not an array is symmetrical.
// =================================================================================
#include <stdio.h>

int SymArray(int array[], int numElems);

int main(void)
{
    int array[5];

    printf("Enter 5 ints to be in an array.\n");
    for(int index = 0; index < 5; index++)
    {
        scanf("%d", &array[index]);
    }

    if(SymArray(array, 5) == 1)
    {
        printf("This array is symmetrical!\n");
    }
    else
    {
        printf("This array is not symmetrical.\n");
    }

    return 0;
}

int SymArray(int array[], int numElems)
{
    auto int symmetry = 1;
    auto int elems = (numElems-1);
    auto int *arrPtr;
    arrPtr = &array[0];
    auto int *endPtr;
    endPtr = &array[elems];
    auto int *midPtr;
    midPtr = &array[0] + ((numElems+1)/2);
    //printf("arrPtr is %p and array is %p\n", arrPtr, &array[0]);
    //printf("arrPtr is %p and midPtr is %p and endPtr is %p\n", arrPtr, midPtr, endPtr);
    while(arrPtr < midPtr)
    {
        if(*arrPtr != *endPtr)
        {
            //printf("arrPtr is %d and endPtr is %d\n", *arrPtr, *endPtr);
            symmetry = 0;
        }
        arrPtr ++;
        endPtr --;
        //printf("arrPtr is now %p and endPtr is now %p\n", arrPtr, endPtr);
    }
    //printf("arrPtr is now %p and endPtr is now %p\n", arrPtr, endPtr);
    return symmetry;
}
