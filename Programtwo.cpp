// Cheesy Program 
// Zahedur Rahman


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {

	// insert text to screen
	cout << "*****************************************************************************" << endl;
	cout << "************************Welcome to My Cheesy Program*************************" << endl;
	cout << "*****************************************************************************" << endl;
	cout << endl;

	const double CONTAINER_CAPACITY = 2.76;
	const double COST_PER_CONTAINER = 4.12;
	const double PROFIT_PER_CONTAINER = 1.45;

	double totalCheese;
	cout << "Please enter the number of kilograms of cheese produced: ";
	cin >> totalCheese;

	// Calculate containers needed (rounded)
	int containers = static_cast<int>(round(totalCheese / CONTAINER_CAPACITY));

	cout << "The number of containers to hold cheese is: " << containers << endl;

	// Create strings with to_string
	string costText = "The cost of producing " + to_string(containers) + " container(s) of cheese is: ";
	string profitText = "The profit from producing " + to_string(containers) + " container(s) of cheese is: ";

	// Set widths for formatting
	const int labelWidth = 50;
	const int valueWidth = 10;

	// Print cost line
	cout << setw(labelWidth) << left << costText
		<< setw(valueWidth) << right << '$' << fixed << setprecision(2) << containers * COST_PER_CONTAINER << endl;

	// Print profit line
	cout << setw(labelWidth) << left << profitText
		<< setw(valueWidth) << right << '$' << fixed << setprecision(2) << containers * PROFIT_PER_CONTAINER << endl;

	return 0;
}
