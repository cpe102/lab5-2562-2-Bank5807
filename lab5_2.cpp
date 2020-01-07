#include <iostream>
#include <string>
using namespace std;

string mixText(string A, string B)
{
    string y;
    int i = 0, L1 = A.size(), L2 = B.size();
    if(L1 == L2)
    {
        while(i < L1)
        {
        cout << A[i];
        cout << B[i];
        i++;
        }
        return y;
    }else{
        return "E";
    }
}

int main()
{
    cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";
	cout << mixText("Y","XX") << "\n";
    return 0;
}
