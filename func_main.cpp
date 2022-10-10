/*
Uses a collection (list) of integers and allows the user
	to select options from a menu to perform operations on the list.
*/
//###################This time by defining my own functions############################

#include <iostream>
#include <vector>
#include <iomanip>
#include <typeinfo>
#include <string>

using namespace std;

void upper(char&);
void listprint(vector <double>);
void addnum(vector <double>&, double);
double average(vector <double>);
double s(vector <double>);
double smallest(vector <double>vec);
double largest(vector <double>vec);
void deletevec(vector <double>&);
bool duplicate_check(vector <double>, double);
int index_finder(vector <double>vec, double a);
void deleteint(vector <double>& vec, double f);

int main()
{
	vector<double> list{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	char sl{};

	do {
		cout << "P - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallest number" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "C - Clear the list(This action can't be undone!)" << endl;
		/*cout << "R - To display the number of times all the values repeat in the list" << endl;*/
		cout << "E - To erase a particular value" << endl;
		cout << "Q - Quit" << endl;
		cout << "\nEnter your choice (No duplicate entries): " << endl;
		cin >> sl;
		upper(sl);
		switch (sl)
		{
		case 'P':
		{
			if (list.size() == 0) {
				cout << "Sorry the list is empty - []" << endl;
			}
			else {
				listprint(list);
			}
		}
		break;
		case 'A':
		{
			int a{};
			cout << "Enter the number of values that you want to add into the list: ";
			cin >> a;
			for (int t{ 1 }; t <= a; t++)
			{
				double s{};
				cout << "Enter value no. " << t << " that you want to add to the list: ";
				cin >> s;
				bool r = duplicate_check(list, s);
				if (r == 1) {
					do {
						cout << "The number you have entered in alredy there - no duplicate entries are allowed!" << endl;
						cout << "Enter value no. " << t << " that you want to add to the list: ";
						cin >> s;
					} while (duplicate_check(list, s) == 1);
					addnum(list, s);
					cout << s << " Has been added to the list" << endl;
				}
				else {
					addnum(list, s);
					cout << s << " Has been added to the list" << endl;
				}



			}

				 


			
		}
		break;
		case 'M':
		{
			if (list.size() == 0) {
				cout << "Sorry the list is empty - [] ; unable to calculate mean / average of the list" << endl;
			}
			else {
				cout << "The mean of the list is: " << average(list) << endl;
			}
		}
		break;
		case 'S':
		{
			if (list.size() == 0) {
				cout << "Sorry the list is empty - [] ; unable to determine the smallest number" << endl;
			}
			else {
				cout << "The smallest number of the list is: " << smallest(list) << endl;
			}

		}
		break;
		case 'L':
		{
			if (list.size() == 0) {
				cout << "Sorry the list is empty - [] ; unable to determine the largest number" << endl;
			}
			else {
				cout << "The laregst number of the list is: " << largest(list) << endl;
			}
		}
		break;
		case 'C':
		{
			if (list.size() == 0) {
				cout << "The list is already empty" << endl;
			}
			else {
				deletevec(list);
				cout << "The data in the list has been cleared" << endl;
			}
		}
		break;
		case 'E':
		{
			double s{};
			cout << "Which value would you like to erase ?: ";
			cin >> s;
					duplicate_check(list, s);
					if (duplicate_check(list, s) == true) {
						deleteint(list, s);
						cout << s << " was removed from the list" << endl;
					}
					else
					{
						cout << "Unable to erase value - The number " << s << " isn't there in the list" << endl;
					}
				
			

		}
		break;
		case 'Q':
		{
			cout << "Goodbye....." << endl;

		}
		break;
		default:
		{
			cout << "Enter Again - Wrong Choice" << endl;
		}
		break;

		}


	} while (sl != 'Q');
	//cout << sl;
	cout << endl;
	return 0;
}

void upper(char& conv)
{
	conv = toupper(conv);

}
void listprint(vector <double> vec)
{
	cout << "[ ";
	for (auto g : vec) {
		cout << g << " ";
	}
	cout << "]" << endl;
}
void addnum(vector <double>& vec, double f)
{
	vec.push_back(f);
}
double s(vector <double>v)
{
	double result{};
	for (auto d : v) {
		result += d;
	}
	return result;
}
double average(vector <double> vec)
{
	cout << fixed << setprecision(5);
	double average = static_cast <double> (s(vec)) / (vec.size() + 1);
	return average;
}
double smallest(vector <double>vec)
{
	double smallest_num{ vec.at(0) };
	for (auto i : vec) {
		if (i < smallest_num) {
			smallest_num = i;
		}
	}
	return smallest_num;
}
double largest(vector <double>vec)
{
	double largest{ vec.at(0) };
	for (auto h : vec) {
		if (h > largest) {
			largest = h;
		}
	}
	return largest;

}
void deletevec(vector <double>& vec)
{
	vec.clear();
}
bool duplicate_check(vector <double>vec, double a)
{
	bool r{};

	for (double d : vec) {
		if (d == a) {
			r = 1;
			return r;
		}
		else if (d != a) {
			r = 0;
		 }
	
	 
	}

}
int index_finder(vector <double>vec, double a)
{
	int index{ 0 };
	for (auto i : vec)
	{
		if (i == a)
		{
			return index;
		}
		else {
			index++;
		}

	}
	
}
void deleteint(vector <double>& vec, double f)
{
	
	int I = index_finder(vec, f);
	vec.erase(vec.begin() + I);

}