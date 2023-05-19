#include <bits/stdc++.h>

using namespace std;

void minimize(int arr[], int n, int k)

{

    for (int i = 0; i < n - 1 && k > 0; i++)

    {

        int pos = i;

        for (int j = i + 1; j < n; j++)

        {

            if (j - i > k)

                break;

            if (arr[j] < arr[pos])

                pos = j;
        }

        for (int j = pos; j > i; j--)

            swap(arr[j], arr[j - 1]);

        k -= pos - i;
    }
}

int main()

{

    int test;

    cin >> test;

    while (test--)

    {

        int n, k, i;

        cin >> n >> k;

        int arr[n];

        for (i = 0; i < n; i++)

        {

            cin >> arr[i];
        }

        minimize(arr, n, k);

        for (i = 0; i < n; i++)

        {

            cout << arr[i] << " ";
        }

        cout << endl;
    }
}
