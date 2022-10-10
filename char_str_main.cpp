#include <iostream>
#include <string>
using namespace std;
int main()
{
	string alphabet_encoding{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string secret_code{ "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA" };
	string user_input{};
	string encoded_message{};
	string decoded_message{};
	cout << "Enter the alphabet encoding: ";
	getline(cin, user_input);

		cout << "Encoding....." << endl;

		 for (char a : user_input) {
		int index = alphabet_encoding.find(a);
		if (index != string::npos) {
			encoded_message += secret_code.at(index);
		}
		else
		{
			encoded_message += a;
		}

	}
	 
	cout << "The encoded message is :" << encoded_message << endl;

		cout << "Decoding....." << endl;
		 
	
	for (char p : encoded_message) {
		int index2 = secret_code.find(p);
		if (index2 != string::npos)
		{
			decoded_message += alphabet_encoding.at(index2);
		}
		else
		{
			decoded_message += p;
		}

	}
	cout << "The decoded message is: " << decoded_message;
	return 0;

}

