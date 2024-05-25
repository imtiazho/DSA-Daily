#include<iostream>

using namespace std;

bool binarySearch(int Arr[], int sizeOfArray, int target)
{
    int low = 0;
    int high = sizeOfArray - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(Arr[mid] == target)
        {
            return true;
        }
        else if(target > mid)
        {
            low = mid + 1;
        }
        else{
            // target < mid : Condition
            high = mid - 1;
        }
    }

    return false;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // Must be sorted
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int target = 91;


    if(binarySearch(arr, sizeOfArray, target))
    {
        cout << "Targeted value is found!";
    }
    else{
        cout << "Targeted value is not found!";
    }
    return 0;
}
