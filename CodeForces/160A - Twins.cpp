#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int coins, sum = 0, ans = 0, p = 0;
	cin >> coins;
	int* arr = new int[coins];

	for (int i = 0; i < coins; i++)
	{
		int temp; cin >> temp;
		sum += temp;
		arr[i] = temp;
	}
	sort(arr, arr + coins, greater<int>());
	for (int i = 0; i < coins; i++)
	{
		if (ans < (sum / 2) + 1)
		{
			ans += arr[i];
			p++;
			if (ans > (sum / 2))
			{
				break;
			}
		}
	}
	cout << p << endl;
	delete[] arr;
	return 0;
}