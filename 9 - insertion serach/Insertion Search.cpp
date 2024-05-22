#include<iostream>

using namespace std;

void insertionSearch(int Arr[], int n)
{
    int i, j, item;
    for(i = 1; i < n; i++)
    {
        item = Arr[i];

        j = i - 1;
        while(j >= 0 && Arr[j] > item)
        {
            Arr[j + 1] = Arr[j];
            j = j - 1;
        }

        Arr[j + 1] = item;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    insertionSearch(arr, sizeOfArray);

    for(int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
