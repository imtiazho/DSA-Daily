#include<iostream>

using namespace std;

void selectionSort(int Arr[], int lengthOfArray)
{
    for(int i = 0; i < lengthOfArray - 1; i++)
    {
        int index_min = i;
        for(int j = i + 1; j < lengthOfArray; j++)
        {
            if(Arr[j] < Arr[index_min])
            {
                index_min = j;
            }
        }

        if(index_min != i)
        {
            int temp = Arr[i];
            Arr[i] = Arr[index_min];
            Arr[index_min] = temp;
        }
    }
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 6, 2, 4, 6};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target = 91;
    selectionSort(arr, sizeOfArray);

    for(int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}
