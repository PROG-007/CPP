#include <iostream>
#include <string>
using namespace std;
int main()
{
	string uc{}, pr{};
	cout << "Enter the combination- " ;
	getline (cin, uc);
	
		/*
						 ~Structure of the output~
	
	if user enters... lets say, '12345', then output should be - 
   
	1
   121   
  12321
 1234321	
123454321

	And so on for other cases......	
	*/

	int spaces = uc.size() - 2 ;
	int s = uc.size()-1;
	string c(s, ' ');
	int a{0};
	 pr = pr + uc.at(a);
	cout << c << pr << endl;
	a++;
	for(size_t i{2};i <= uc.length();i++)
	{
		string b (spaces, ' ');
		pr = pr + uc.at(a);
		cout << b << pr;
		pr.erase(a);
		for (int a = pr.length() - 1; a >= 0; a--)
		{
			cout << pr.at(a);
		}
		cout << endl;
		pr = pr + uc.at(a) ;
		spaces--;
		a++;
	 }
		return 0;
	}