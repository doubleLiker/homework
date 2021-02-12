// RuleBreakers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
    int arr[10];
    int* p2 = arr;
    *(p2++) = 0;
    *(p2++) = 1;
    arr[3] = p2 - arr;


    int const y = 2;
    int& j = const_cast<int&>(y);
    j = 3;

    return 0;
}

