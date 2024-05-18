/*
    Example - 01:
    {
        int n;
        if(n % 2 == 0)
        {
            cout << "Even";
        }
        else{
            cout << "Odd";
        }
    }
    Note: Complexity O(1)
    .
    Example - 02:
    {
        int i, n, even[101];
        for(i = 0; i < 101; i++)
        {
            even[i] = 0;
        }
        for(i = 0; i < 101; i += 1)
        {
            even[i] = 1;
        }

        cin >> even[n];

        if(even[n])
        {
            cout << "Even";
        }
        else{
            cout << "Odd";
        }

    }
    Note: Complexity O(n)
    .
    Example - 03:
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j = ++)
            {
                s[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    Note: Complexity O(n^2)
*/
