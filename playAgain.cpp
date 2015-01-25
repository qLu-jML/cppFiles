// Play again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main() {
	char again;

	do
	{
		cout << "\n**Played an exciting game!**";
		cout << "\n Do you want to play again? (y/n): ";
		cin >> again;

	}
		while (again == 'y');
	

	cout << "\nOkay, bye!\n";

	return 0;
}