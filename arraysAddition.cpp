#include <iostream>

void arraysAdd(const int* arr1, const int* arr2, int* arr3, int size)
{
    while(size > 0)
        while(size--)
            *arr3++ = *arr1++ + *arr2++;
}

int main()
{
    const int size = 5;
    int arr1[size] = {1, 4, 3, 5, 2}; 
    int arr2[size] = {2, 1, 3, 5, 3}; 
    int arr3[size];
    arraysAdd(arr1, arr2, arr3, sizeof(arr1)/sizeof(int));

    for(auto el : arr3)
        std::cout << el << " ";
    std::cout << std::endl;
    return 0;
}