#include <bits/stdc++.h> //O(log n)
using namespace std;
int binary_search(int a[], int element, int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == element)
            return mid;
        if (a[mid] > element)
            e = mid - 1;
        if (a[mid] < element)
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int element;
    cin >> element;
    int count = binary_search(a, element, n);
    if (count == -1)
        cout << "Element not found";
    else
        cout << "Element found at : " << count;
}