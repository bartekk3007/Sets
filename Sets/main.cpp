#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<char> sc1;
	
	sc1.insert('a');
	sc1.insert('b');

	if (sc1.find('a') != sc1.end())
	{
		cout << "Is in set\n";
	}
	else
	{
		cout << "Is not in set\n";
	}

	if (sc1.find('s') != sc1.end())
	{
		cout << "Is in set\n";
	}
	else
	{
		cout << "Is not in set\n";
	}

	return 0;
}