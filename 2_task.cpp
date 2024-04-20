#include <iostream>

void swap1(int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        temp = *(arr + i);
        *(arr + i) = *(arr + 9 - i);
        *(arr + 9 - i) = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    swap1(arr);
}