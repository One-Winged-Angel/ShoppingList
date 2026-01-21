#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> shoppingList;
	string item;
	cout << "What would you like to add to the list:\n";
	getline(cin, item);
	while (item != "done")
	{
		shoppingList.push_back(item);
		cout << "What would you like to add to the list:\n";
		getline(cin, item);
	}

	for (auto items : shoppingList)
	{
		cout << "You need " << items << ".\n";
	}

	return 0;
}