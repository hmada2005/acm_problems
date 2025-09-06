#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A; // income in year zero.
	int B; // income after n years.
	int n = 1; // number of years.

	// assuming -100 <= x <= 100
	cin >> A >> B >> n;

	bool found = false;

	for (int x = -1000; x < 1000; x++)
	{
		if (pow(x, n) == B / A)
		{
			cout << x;
			found = true;
			break;
		}
	}

	if (!found)
		cout << "no";
	
}