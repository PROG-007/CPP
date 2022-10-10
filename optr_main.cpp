/*
This code will ask you to enter a monatary value in a INR.
Afterwards this program will calculate the change that is
possible in the same currency - according to different notes
of that currency(INR).
The year which the currency is being calculated in '2020'-as
currency values may vary in upcomming years!
########################### HAVE FUN ##################################
*/
#include <iostream>
using namespace std;
int main()
{
	int user_value{ 0 };
	const int two_thousand{ 2000 };
	const int five_hundred{ 500 };
	const int two_hundred{ 200 };
	const int one_hundred{ 100 };
	const int fifty{ 50 };
	const int twenty{ 20 };
	const int ten{ 10 };
	const int five{ 5 };
	const int two{ 2 };
	const int one{ 1 };


	cout << "Enter the amount:  ";
	cin >> user_value;


	int a = user_value / two_thousand;//
	int b = (user_value % two_thousand) / five_hundred;//
    //int c = (user_value % two_thousand) % five_hundred;
	int d = ((user_value % two_thousand) % five_hundred) / two_hundred;//
	//int e = ((user_value % two_thousand) % five_hundred) % two_hundred;
	int f = (((user_value % two_thousand) % five_hundred) % two_hundred) / one_hundred;//
	//int g = (((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred;
	int h = ((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) / fifty;//
	//int i = ((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty;
	int j = (((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) / twenty;//
	//int k = (((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty;
	int m = ((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) / ten;//
	//int n = ((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten;
	int o = (((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten) / five;//
	//int p = (((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten) % five;
	int q = ((((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten) % five) / two;//
	//int r = ((((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten) % five) % two;
	int s = (((((((((user_value % two_thousand) % five_hundred) % two_hundred) % one_hundred) % fifty) % twenty) % ten) % five) % two) / one;//

	cout << "The change that you can have for the amount of " << user_value << " is :" << endl;
	cout << " 2000 notes: " << a << endl;
	cout << " 500 notes: " << b << endl;
	cout << " 200 notes: " << d << endl;
	cout << " 100 notes: " << f << endl;
	cout << " 50 notes: " << h << endl;
	cout << " 20 notes: " << j << endl;
	cout << " 10 notes / coins: " << m << endl;
	cout << " 5 coins: " << o << endl;
	cout << " 2 coins: " << q << endl;
	cout << " 1 coins: " << s << endl;

	cout << "=============== Thank you for choosing us!=============== " << endl;
	cout << "================ Hope you are satisfied ================" << endl;


	return 0;
}