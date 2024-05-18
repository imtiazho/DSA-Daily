#include<iostream>

using namespace std;

int main()
{
    /*
        // Class - 1(Definition):
        Data structure: when we solve a problem in programming we can use
        different data structure to distribute data.
        .
        Algorithm: Some proven and tested step of CS to solve a problem.
    */

    /*
        // Class - 02(Time Complexity):
        There are many operation of time complexity.
        1. Assignment Operation
        2. Comparison Operation
        3. Mathematical Operation
        4. Function Call
        5. Statement in function
        .
        We can measure time complexity by Big O Notation Like O(1)
        .
        Example - 1:
        {
        int num1, num2, result = 0;
        num1 = 10;
        num2 = 20;
        result = num1 + num2;
        cout << result << " Here time complexity is O(1). When quantity of operation is not depended" <<
        " on input size then we can define this complexity as O(1). Thats mean " << "operation is constant";
        }
        .
        Example - 2:
        {
            int n = 2, result;
            result = n * (n + 1) / 2;
            cout << result << " Here time complexity is O(1). When quantity of operation is not depended" <<
        " on input size then we can define this complexity as O(1). Thats mean " << "operation is constant";;
        }
        .
        Example - 3:
        {
            int n = 2, i, result = 0;
            for(i = 1; i <= n; i++)
            {
                result = result + i;
            }
            cout << result << " Its a interesting that if i assign n = 2 then there will be 4 operation."
                 << "If i assign 10 then there will be 20 operation." << " Here O(2n) => 2O(n). Hence 2 is constant then i can ignore this. " <<
                  " This is like linear complexity. Like Linear graphs. O(n)" << " Main part is opeartion is depended on input size";
        }
        .
        Example - 4(Nested Loop):
        {
            int i, n = 2, j, counter = 0;
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= n; j++)
                {
                    counter = counter + 1;
                }
            }
            cout << counter << " If n = 2 then the count is 4. This is like square(^2) relation. O(n^2)";
        }
        .
        Example - 5(Another nested loop):
        {
            int i, n = 2, j, k, counter = 0;
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= n; j++)
                {
                    for(k = 1; k <= n; k++)
                    {
                        counter = counter + 1;
                    }
                }
            }
            cout << counter << " If n = 2 then the count is 8. This is like square(^3) relation. O(n^3)";
        }

    */

    /*
        // Class - 3:
        Theory:
        If coplexity is O(n! + n^2 + n) then the complxity will be O(n!)
        cause n! is bigger than n^2 and n.
        .
        If coplexity is O(4n^4 + 2n^2 + 5n) then the complxity will be O(n^4)
        cause n^4 is bigger than n^2 and n. And 4, 2, 5 is constant thats why we can ignore this
        .
        Example - 1(Nested and double loop):


    */
    int i, j, n = 3, counter = 0;
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            counter = counter + 1;
        }
    }

    for(j = 1; j <= n; j++)
    {
        counter = counter + 1;
    }

    cout << counter << " Its complexity is O(n^2) + O(n) = O(n^2 + n). Hence n^2 is significantly " <<
    "bigger than n then its complexity is O(n^2).";
    return 0;
}
