// quick sort 
//Write a program to implement Quick sort algorithm for sorting a list of integers in ascending order

#include <stdio.h>
#include <iostream>
void show(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {   
        std::cout<<"\n "<<A[i];
    }
    std::cout<<"\n";
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; 

    if (low < high)
    {
        partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // left sub array 
        quickSort(A, partitionIndex + 1, high); // right sub array
    }
}

int main()
{
    
    int A[] = {9, 41, 4, 8, 7, 5, 6};
    int n = 9;
    n =7; char m[]="Unsorted ";
    std::cout<<m;
    show(A, n);
    quickSort(A, 0, n - 1);
    char mm[]="sorted ";
    std::cout<<mm;
    show(A, n);
    return 0;
}
