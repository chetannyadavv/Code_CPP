#include <bits/stdc++.h> //O(n)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int element;
    cin >> element;
    int count = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == element)
            count = i;
    }
    if (count == -1)
        cout << "Element not found";
    else
        cout << "Element found at : " << count;
}