#include <iostream>
#include <string>
using namespace std;

int main()
{
	int year;
	cin >> year;
	year++;

	while (true)
	{
		string str = to_string(year);
		if (str[0] != str[1] && str[2] != str[3] && str[0] != str[2] && str[1] != str[3] && str[0] != str[3] && str[1] != str[2]) 
            break;
		else 
            year++;
	}
	cout << year << endl;
	return 0;
}