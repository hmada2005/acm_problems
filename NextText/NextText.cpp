#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;

    //set<int> numbers_set; //تعريف مجموعة لتخزين الاعداد

    //for (int i = 0; i < N; i++)
    //{
    //    int Numbers;
    //    cin >> Numbers;
    //    numbers_set.insert(Numbers);
    //}

    //int next_index = 1;
    //while (numbers_set.count(next_index))
    //{
    //    next_index++;
    //}

    //cout << next_index << endl;

    int arr[3000];

    for (int i = 0; i < N; i++)
    {
        cin >>arr[i] ;
    }

    for (int i = 0; i < N-1; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    bool found = false;

    for (int i = 1; i <= 3000; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j] == i)
            {
                break;
            }

            if (i<arr[j])
            {
                cout << i;
                found = true;
                break;
            }

            if (j == N - 1)
            {
                cout << i;
                found = true;
                break;
            }

        }
        if (found == true)
        {
            break;
        }

    }
    return 0;

}


