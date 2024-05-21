#include<iostream>
#include<conio.h>

using namespace std;

bool binarySearch(int Arr[], int sizeOfArray, int targetNumber)
{
    int low = 0;
    int high = sizeOfArray - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(Arr[mid] == targetNumber)
        {
            return true;
        }
        else if(Arr[mid] < targetNumber)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false; // Target not found
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // Must be sorted
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target = 91;
    if(binarySearch(arr, sizeOfArray, target))
    {
        cout << "Target found in array";
    }
    else{
        cout << "Target not found in array";
    }


    getch();
    return 0;
}
