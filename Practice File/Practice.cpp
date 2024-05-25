#include<iostream>

using namespace std;

int linearSearch(int Arr[], int lengthOfArray, int target)
{
    int i;
    for(i = 0; i < lengthOfArray; i++)
    {
        if(Arr[i] == target)
        {
            return Arr[i];
        }
    }

    i = -1;
    return i;
}

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
    */

    /*
        // Class - 04(Space Complexity):
        Example - 01:
        {
            int n;
            if(n % 2 == 0)
            {
                cout << "Even" << " Its time complexity is O(1) and space complexity is also O(1)";;
            }
            else{
                cout << "Odd" << " Its time complexity is O(1) and space complexity is also O(1)";
            }
        }
        .
        Example - 02:
        {
            int n, i, even[11];
            for(i = 0; i < 11; i++)
            {
                even[i] = 0;
            }

            for(i = 0; i < 11; i += 2)
            {
                even[i] = 1;
            }

            cin >> n;

            if(even[n])
            {
                cout << "Even and space complexity is also O(n) cause its complexity is depend on n";
            }
            else{
                cout << "Odd and space complexity is also O(n) cause its complexity is depend on n";
            }
        }

        Example - 03:
        {
            int
            a[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            },
            b[3][3] = {
                {1, 2, 3},
                {4, 5, 6},
                {7, 8, 9}
            },
            s[3][3], i, j, n;

            cin >> n;

            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    s[i][j] = a[i][j] + b[i][j];
                    cout << s[i][j] << " ";
                }
                cout << endl;
            }

            cout << "Complexity is O(n^2)";
        }

    */

    /*
        // Class - 5(Linear Search): Linear search is a simple search algorithm
        that iterates through a list of items one by one, checking each element
        against the target value. It's like looking for a specific book in a bookshelf
        by checking each book from left to right until you find the one you're
        looking for.

    */

    int Arr[] = {1, 2, 3, 4, 5};
    int sizeOfArray = sizeof(Arr) / sizeof(Arr[0]);
    int target = 5;
    int result = linearSearch(Arr, sizeOfArray, target);
    if(result != -1)
    {
        cout << "Targeted number is found!";
    }else{
        cout << "Targeted number is not found!";
    }

    return 0;
}
