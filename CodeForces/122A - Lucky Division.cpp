#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; cin >> n;
	if (n % 4 == 0 || n % 7 == 0 || n % 44 == 0 || n % 47 == 0 || n % 77 == 0 || n % 74 == 0) 
        cout << "YES\n";
	else
	{	
		int p = 0;
		string str = to_string(n);
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != '4')
			{
				if (str[i] != '7')
				{
					p++;
				}
			}
		}
		if (p == 0) 
            cout << "YES\n";
		else 
            cout << "NO\n";
	}
	return 0;
}