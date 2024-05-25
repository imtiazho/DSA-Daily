#include<iostream>

using namespace std;

void insertionSort(int Arr[], int lengthOfArray)
{
    int i, j, item;
    for(i = 1; i < lengthOfArray; i++)
    {
        item = Arr[i];
        j = i - 1;
        while(j >= 0 && Arr[j] > item )
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = item;
    }
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 6, 2, 4, 6};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target = 91;
    insertionSort(arr, sizeOfArray);

    for(int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}
