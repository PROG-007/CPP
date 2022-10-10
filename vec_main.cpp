/*This code will show all the elements of a vector
according to how we toggle with it differently at
different lines of code !
 ################### HAVE FUN ###################
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int> vector1;
	vector <int> vector2;

	vector1.push_back(10);
	vector1.push_back(20);

	cout << "Elements of vector 1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << "Size of vector 1: " << endl;
	cout << vector1.size() << endl;

	vector2.push_back(100);
	vector2.push_back(200);

	cout << "Elements of vector 2: " << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << "Size of vector 2: " << endl;
	cout << vector2.size() << endl;

	vector<vector<int>> vector_2d;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "Elements of the  2-D vector: " << endl;
	cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

	vector1.at(0) = 1000;

	cout << "Upgraded elements of the  2-D vector: " << endl;
	cout << vector_2d.at(0).at(0) << "  " << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << "  " << vector_2d.at(1).at(1) << endl;

	cout << "Upgraded elements of vector 1: " << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

	return 0;
}