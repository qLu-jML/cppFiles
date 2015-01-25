#include <iostream>
using namespace std;

int main() {

	//Score Rater Program
	// Demonstrates the if statement

	
	int score;
	cout << "Enter in a score please: ";
	cin >> score;


		if (score >= 1000) {
			cout << "You scored more than 1000.\n\n";
		}

		else if (score >=500) {
			cout << "You scored less than 1000.\n\n";
		}
		else if (score >= 250) {
			cout << "You scored 250 or more.";
		}
		else {
			cout << "You scored less than 250";
		}

	return 0;
}