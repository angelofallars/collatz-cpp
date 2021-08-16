#include <iostream>
using namespace std;

int main()
{
	int n;
	int steps = 0;

	cout << "Collatz starting number: ";
	cin >> n;

	while (n != 1)
	{
		cout << n << "\n";	

		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = 3 * n + 1;
		}

		steps++;
	}

	cout << "Steps: " << steps << "\n";
		
	return 0;
}
