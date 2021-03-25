#include <stdio.h>

int printArr(int *p, int s)
{

    int *p2 = &p[s - 1];
    while (p <= p2)
    {
        printf("%d\n", *p);
        p = p + 1;
    }
    return 0;
}

int sumArr(int *arr, int s) // function declaration
{
    int *arr_start = arr; // pointer to the first cell
    printf("\nArray before summation :");
    printArr(arr, s);

    printf("\nArray after summation : ");
    int *arr_end = &arr[s - 1];
    int sum = 0;
    while (arr_start < arr_end)
    {
        sum = sum + *arr_start;
        printf("%d\n", sum);
        arr_start++;
    }
    return 0;
}

int findOddNumber(int *arr, int s)
{

    int *end = &arr[s - 1];
    int *start = arr;
    while (start <= end)
    {

        int num = 0, count = 1;
        for (int i = 0; i < s; i++)
        {
            int *x = &arr[i];
            if (x == start)
            {
                continue;
            }
            else
            {
                if (*x == *start)
                {
                    num = *x;
                    count++;
                }
            }
        }
        if (count % 2 != 0)
        {
            if (num != 0)
            {
                printf("the number appearing an odd number of times is: %d\n", num);
                printf("the number of times it appears is: %d\n", count);
                break;
            }
        }
        start++;
    }
}

int main()
{

    int Tab[9] = {7, 8, 7, 0, 2, 7, 4, 1, 5}; // declare and initialize an array with arr_len elements
    sumArr(Tab, 9);
    findOddNumber(Tab, 9);
    return 0;
}
