#include<iostream>

using namespace std;

void bubbleSort(int Arr[], int lengthOfArray)
{
    int i ,j , temp;
    for(i = 0; i < lengthOfArray; i++)
    {
        for(j = 0; j < lengthOfArray - i - 1; j++)
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
    int arr[] = {8, 7, 6, 5, 4, 6, 2, 4, 6};
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target = 91;
    bubbleSort(arr, sizeOfArray);

    for(int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}
