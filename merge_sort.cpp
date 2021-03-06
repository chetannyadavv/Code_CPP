#include <bits/stdc++.h>
using namespace std;
void merge(int *a, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1;
    int k = s;
    int temp[e + 1];

    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= e)
        temp[k++] = a[j++];
    for (int i = s; i <= e; i++)
        a[i] = temp[i];
    return;
}
void merge_sort(int a[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);
    merge(a, s, e);
    return;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}