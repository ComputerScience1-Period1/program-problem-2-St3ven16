/*
Steven Romero - 9-26-17 1st

Taking in data and using it to create variables
*/

// Libraries
#include <iostream> // gives access to cin, cout, cnd1, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
#include <math.h> // power function pow
// Namespaces
using namespace std; //*
// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '/n';
}
// MAIN
void main() {
	// Variables
	int potato
	float tomato;
	double tomatoes;
	bool beet_root = false; // assume no one has beet roots
	char frisk;
	int calc_1, calc_2, calc_3;

	// User Queries
	cout << "How many potatoes do you have? ";
	cin >> potato; //int
	cout << "How much tomato sauce doesthe recipe call for in ounces? ";
	cin >> tomato; // float?
	cout << "How many tomatoes do you think exist on the planet in mols? ";
	cin >> tomatoes;
	cout << "Do you have a beet root : Y/N ";
	cin >> frisk;
	if (frisk == 'Y' || frisk == 'y') {
		beet_root = ; // freely changes the value from false to true
	}

	// Print out stored data
	cout << "You have " << potato << "number of potatoes. \n"; 
	cout << "You need " << tomato << " ounces of tomato sauce for your recipe." << end1;
	cout << "You think approximately " << tomatoes * 6.022 * pow(10.0, 23) << "tomatoes exist on the earth." << '\n';
	cout << boolalpha << "The answer evaluation of you have beet root is " << beet_root << end1;

	// Change Values

	cout << "2";
	cin >> calc_1;
	cout << "1";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << "=" << calc_1 + calc_2 << end1;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << "*" << calc_2 << "=" << calc_3 << end1;
	// Pause
	pause();
}

