#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        int k;
        cin >> k;
        arr[i] = k;
    }
    int ans = 0, max = 0, min = arr[0];
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            if (i == 0) {}
            else ans++;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            if (i == 0) {}
            else ans++;
        }
    }
    delete[] arr;
    cout << ans << endl;
    return 0;
}