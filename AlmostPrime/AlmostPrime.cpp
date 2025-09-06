#include <iostream>
#include <set>

using namespace std;

bool isPrime(int x)
{
    int count = 0;

    for (int j = 1; j <= x; j++)
    {
        if (x % j == 0)
        {
            count++;
        }

    }
    return count == 2;
}

int main()
{
    int n;
    cin >> n;

    int count2 = 0;
    int count3 = 0;
   
    for (int j = 0; j <=n ; j++)
    {
        cout << j << ":\n";
        for (int i = 0; i <= j; i++)
        {
            if (isPrime(i))
            {
                cout << "  prime: " << i << endl;
                if (j % i == 0)
                {
                    count2++;
                    cout << j << " % " << i << " = 0  -- count2 " << count2 << "\n";
                }
            }
        }

        if (count2 == 2)
        {
            count3++;
        }
        count2 = 0;

    }

    cout << count3;
    

}


