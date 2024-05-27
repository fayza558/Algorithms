#include <iostream>
#include <climits>

using namespace std;
//Time Complexity O(n)
//Counting Sort is Stable

int main()
{
    int n;
    cin >> n;
    int arrA[n];
    int max_elementt = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
        if (arrA[i] > max_elementt)
        {
            max_elementt = arrA[i];
        }
    }

    int arrC[max_elementt + 1];
    for (int i = 0; i <= max_elementt; i++)
    {
        arrC[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        ++arrC[arrA[i]];
    }

    for (int i = 1; i <= max_elementt; i++)
    {
        arrC[i] = arrC[i] + arrC[i - 1];
    }

    int arrB[n];
    for (int j = n - 1; j >= 0; j--)
    {
        arrB[arrC[arrA[j]] - 1] = arrA[j];
        --arrC[arrA[j]];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arrB[i] << " ";
    }

    return 0;
}

