#include<iostream>
#include<conio.h>

using namespace std;

// Sub function for liner search
int linear_search(int A[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(A[i] == x)
        {
            return i;
        }
    }

    i = -1;
    return i;
}

int main()
{
    int Arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(Arr) / sizeof(Arr[0]);
    int target = 3;

    int result = linear_search(Arr, length, target);

    if(result == -1)
    {
        cout << "Element is not founded!";
    }
    else{
        cout << "Element's index is " << result;
    }


    getch();
    return 0;
}
