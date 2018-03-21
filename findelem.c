// =================================================================================
// File: symarray.cpp
// =================================================================================
// Programmer: Jennifer King
// Date: 3/19/2018
// Project: Pointers & Arrays
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//      This program should find an int within an array of ints.
// =================================================================================
#include <stdio.h>

int *FindElem(int array[], int numElems, int target);

int main(void)
{
    int target;
    int array[5];

    printf("Enter 5 ints to be in an array.\n");
    for(int index = 0; index < 5; index++)
    {
        scanf("%d", &array[index]);
    }

    printf("Enter a target to search for: ");
    scanf("%d", &target);

    if(FindElem(array, 5, target) == NULL)
    {
        printf("The target was not found.\n");
    }
    else
    {
        int index = 0;
        while(array[index] != target)
        {
            index ++;
        }
        printf("The target is at index %d.\n", index);
    }
    return 0;
}

int *FindElem(int array[], int numElems, int target)
{
    auto int elems = numElems - 1;
    auto int *ptr;
    ptr = NULL;
    auto int *arrPtr;
    auto int *endPtr;
    arrPtr = &array[0];
    endPtr = &array[elems];
    while(arrPtr < endPtr)
    {
        if(*arrPtr == target)
        {
            ptr = &target;
            return ptr;
        }
        arrPtr ++;
    }
    return ptr;
}
