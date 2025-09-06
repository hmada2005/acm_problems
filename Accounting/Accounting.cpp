#include <iostream>

using namespace std;

int fact(int num)
{
	if (num == 0 || num == 1)
		return 1;
	else
		return num * fact(num - 1);
	
}

int main()
{
	int A; // income in year zero.
	int B; // income after n years.
	int n = 1; // number of years.
	double x; //groth.

	cin >> n;

	if (n >= 1 && n <= 10)
	{
		double p = 1.0;
		for (int i = 0; i < n; i++)
		{
			p *= p;
		}
		x = p;
	}

	cin >> A >> B;

	x = A / B;

	fact(x);

	if (x == (int)x)
	{
		cout << x;
	}
	else
		cout << " error ";




}