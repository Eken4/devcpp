#include <iostream>

#include <manipulation_nombres.hpp>

int sum(int a, int b)
{
    return a + b;
}

int reverse(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void sum_in_third_pointers(int a, int b, int *c)
{
    *c = a + b;
}

void sum_in_third_references(int a, int b, int &c)
{
    c = a + b;
}

void fill_array(int array[], int length)
{
    srand(time(NULL));

    for (int i = 0; i < length; i++)
    {
        array[i] = rand();
    }
}

void print_array(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

void sort_array(int array[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if(array[j] < array[j+1]) {
                reverse(array[j], array[j+1]);
            }
        }
    }
}
