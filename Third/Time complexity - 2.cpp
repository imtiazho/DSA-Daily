#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    /*
    Example - 1: Check complexity
    {
        int i, j, n, count;
        count = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                count = count + 1;    => O(n^2)
            }
        }

        for(i = 0; i < n; i++)
        {
            count = count + 1;    => O(n)
        }
    }

    Its complexity is O(n^2) + O(n) = O(n^2 + n). Hence n^2 is significantly
    bigger than n then its complexity is O(n^2).
    .
    Theory:
    If coplexity is O(n! + n^2 + n) then the complxity will be O(n!)
    cause n! is bigger than n^2 and n.
    .
    If coplexity is O(4n^4 + 2n^2 + 5n) then the complxity will be O(n^4)
    cause n^4 is bigger than 5n and n.
    */
    getch();
    return 0;
}
