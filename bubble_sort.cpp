#include <bits/stdc++.h> //O(n^2)
using namespace std;
void bubble_sort(int a[], int n)
{
    for (int itr = 1; itr <= n - 1; itr++)
    {
        for (int j = 0; j <= (n - itr - 1); j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bubble_sort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}