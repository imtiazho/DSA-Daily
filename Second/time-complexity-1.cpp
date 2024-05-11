#include<iostream>

using namespace std;

int main()
{
    /*
        Time Complexity -1: Assume the time of a program.
        .
        There are many operation:
        1. Assignment Operation (=)
        2. Comparison Opearation (<, >)
        3. Methematical Opearation
        4. Function Call
        6. Statement in the function
        .
        We measure time complexity with Big O Notation O(1).
        .
        Example - 1:
        {
            int num1, num2, resultl
            num1 = 10; => 1 Opearation
            num2 = 20; => 1 Opearation
            result = num1 + num2; => 2 Opearation
        }
        What is the time complexity, 4? Nope never
        Time complexity is O(1). When quantity of operation is not depended
        on input size then we can define this complexity as O(1). Thats mean
        operation is constant.
        .
        Example - 2:
        {
            int n, result;
            result = n * (n + 1) / 2; => 4 operation
        }
        Whats the complexity of this program? 4? nope never its O(1)
        cause its operation is constant.
        .
        Example - 3:
        {
            int i, n, result;
            result = 0;
            for(i = 1; i <= n; i++)
            {
                result = result + i;
            }
        }
        Hints: Its a interesting that if i assign n = 2 then there will be 4 operation.
        If i assign 10 then there will be 20 operation.
        Like: O(2n) => 2O(n). Hence 2 is constant then i can ignore this.
        This is like linear complexity. Like Linear graphs.
        .
        Example - 4(Nested Loop):
        {
            int i, j, n, count;
            count = 0;
            for(i = 1; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    count = count + 1;
                }
            }
        }
        Whats the complexity of this program? If n = 2 then the count is 4. This
        is like square(^2) relation. O(n^2)
        .
        Example - 5(Another Nested Loop):
        {
            int i, j, k, n, count;
            count = 0;
            for(i = 1; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    for(k = 0; k < n; k++)
                    {
                        count = count + 1;
                    }
                }
            }
        }
        Whats the complexity of this program? If n = 2 then the count is 8. This
        is like square(^3) relation. O(n^3)
        ====
        .

    */
    return 0;
}
