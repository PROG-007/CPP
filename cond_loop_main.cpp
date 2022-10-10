/*
Uses a collection (list) of integers and allows the user
	to select options from a menu to perform operations on the list.
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
	vector <int> vec{ 7,4 };
	char option{};

	do {
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "C - Clear the list(This action can't be undone!)" << endl;
		cout << "Q - Quit" << endl;
		cout << "\nEnter your choice: " << endl;
		cin >> option;
		switch (option) {

		case 'p':
		case 'P':
			if (vec.size() == 0) {

				cout << "[] - the list is empty" << endl;
			}
			else {
				cout << "[ ";
				for (auto val : vec) {
					cout << val << " ";
				}
				cout << "]" << endl;
			}
			cout << "---------------------" << endl;
			break;
		case 'a': {
		case 'A':
			int user_num;
			cout << "Enter a integer you would like to add to the list: ";
			cin >> user_num; 
			vec.push_back(user_num);
			cout << user_num << " has been added to the list" << endl;
			cout << "---------------------" << endl;
			break;
		}
		case 'm':
		case 'M':
			if (vec.size() == 0) {
				cout << "Unable to calculate the mean - no data" << endl;
			}
			else {
				double total{};
				for (auto val : vec) {
					total += val;
				}
				cout << fixed << setprecision(3);
					cout << "The mean / average of the values in the list is: " << static_cast <double> (total / vec.size()) << endl;

				

			}
			cout << "---------------------" << endl;
			break;
		case 's':
		case 'S':
			if (vec.size() == 0) {
				cout << "Unable to determine the smallest number - list is empty" << endl;
			}
			else {
				int smallest_num{ vec.at(0) };
				for (auto val : vec) {
					if (val < smallest_num)
						smallest_num = val;
				}
				cout << "The smallest number in the list is: " << smallest_num << endl;



			}
			cout << "---------------------" << endl;
			break;
		case 'l':
		case 'L':
			if (vec.size() == 0) {
				cout << "Unable to determine the largest number - list is empty" << endl;
			}
			else {
				int largest_num{ vec.at(0) };
				for (auto val : vec) {
					if (val > largest_num)
						largest_num = val;
				}
				cout << "The largest number in the list is: " << largest_num << endl;



			}
			cout << "---------------------" << endl;
			break;
		case 'q':
		case 'Q':
			cout << "Goodbye..." << endl;
			break;
		case 'c':
		case 'C':
			vec.clear();
			cout << "The data in list has been emptied permanently (This action can't be undone!)" << endl;
			break;
		default:
			cout << "This is an invalid option - choose again." << endl;
			cout << "---------------------" << endl;
			break;
			}


		
	} while (option != 'q' && option != 'Q');
		cout << endl;
		return 0;
	
}

