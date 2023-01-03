#include <iostream>
using namespace std;
int main()
{
	int a, b=1, c=1;
	while (a < 3, b <= 10 && c <= 10)
	{
		cout << "enter your result-- ";
		cin >> a;
		if (a == 1 )
		{
			cout << "pass " << b << endl;
			b++;
			if (b == 9)
			{
				cout << "increase schoolarship !!!!!!!";
				break;
			}
		}
		else if (a == 2 )
		{
			cout << "fail " << c << endl;
			c++;
		}
	}
	
	return 0;
}