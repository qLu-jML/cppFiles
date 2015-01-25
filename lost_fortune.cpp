// Lost Fortune
// A Personalized Adventure

#include <iostream>
#include <string>

using namespace std;

int main() {

	const int gold_pieces = 900;
	int adventurers, killed, survivors;
	string leader;

	//get the information from the player

	cout << "Welcome to Lost Fortune \n\n";
	cout << "Please enter the following information for your personalized adventure!\n";

	cout << "Enter a number: ";
	cin >> adventurers;

	cout << "Enter a number smaller than before: "
	cin >> killed;

	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	cin >> leader;

	//tell the story

	cout << "\nA brave group of " << adventurers << " set out on a quest.";
	cout << "-- in search of the lost treasure of the ancient dwarves. ";
	cout << "The group was led by the legendary rogue, " << leader << ".\n";
	cout << "Along the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under " << leader <<"'s leadership, and the ogres were defeated - but at a cost";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout 

}