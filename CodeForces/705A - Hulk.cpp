#include <iostream>
using namespace std;

int main()
{
    string strs[2] = {"I hate ", "I love "};

    int layers;
    cin >> layers;

    for (int i = 0; i < layers; i++)
    {
        i % 2 == 0 ? cout << strs[0] : cout << strs[1];
        
        i == layers -1 ? cout << " it " : cout << "that ";
    }
    
    return 0;
}