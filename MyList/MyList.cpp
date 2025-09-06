// MyList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Sould have the functions
// - sort asc dec
// - sum
// - largest
// - smalest
// - largest
// - smalest
// Shold store up to 1000 Int
// +++ Should be extend to include double, long, float

#include <iostream>

using namespace std;

class MyList
{
public: 
	MyList()
	{
		// initialize MyList
		for (int i = 0; i < 1000; i++)
		{
			arr[i] = 0;
		}
		index = 0;
	}

	void insert(int x)
	{
		arr[index] = x;
		index++;
	}
	int read(int pos)
	{
		if (pos >= index || pos <0)
		{
			throw invalid_argument("position out of range");
		}
		return arr[pos];
	}

	void sortDec()
	{
		for (int i = 0; i < size()-1; i++)
		{
			for (int j = i+1; j < size(); j++)

			{

				int temp = 0;

				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}

			}
		}
	}


	void sortAec()
	{
		for (int i = 0; i < size() - 1; i++)
		{
			for (int j = i + 1; j < size(); j++)

			{

				int temp = 0;

				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}

			}
		}
	}

	int size()
	{
		return index;
	}

	int sum()
	{
		int result = 0;
		for (int i = 0; i < size(); i++)
		{

			result += arr[i];
		}
		return result;
	}
private :

	int arr[1000];
	int index;
};

int main()
{
	MyList list;
	list.insert(5);
	list.insert(6);
	list.insert(4);
	list.insert(3);

	list.sortAec();

	for (int i = 0; i < 4; i++)
	{
		cout << list.read(i) << endl;
	}

	cout << list.size();
	cout << list.sum();


}

