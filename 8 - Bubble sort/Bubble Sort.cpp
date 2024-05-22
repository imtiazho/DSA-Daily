#include<iostream>
#include<conio.h>

using namespace std;

void bubbleSort(int Arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}


int main()
{
    int arr[] = {9, 8, 6, 5, 2, 5, 7, 8, 1, 4};
    int sizeOfArray = sizeof(arr) / sizeof(arr)[0];
    bubbleSort(arr, sizeOfArray);
    for(int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
