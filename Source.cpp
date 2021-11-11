#include<iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;

void main(int argc, char* argv[], string start, string end, int steps) {
	//5 counters for the five vowels to detect number of vowels in the string readed
	int a=0, e=0,i=0,o=0,u=0;
	
	cout << setfill('*')<<setw(60)<<""<<endl;
	cout << setfill('*')<<setw(12)<<""<<" welcome to my letter count program "<< setfill('*')<<  setw(12) <<""<<endl;
	cout << setfill('*') << setw(60) << "" << endl << endl;
	// Create a text string, which is used to output the text file
	string myText;

	// Read from the text file
	ifstream MyReadFile(argv[1]);

	// Use a while loop together with the getline() function to read the file line by line
	cout << "Analayzing file '" << argv[1]<<"'"<< setfill('.')<<setw(3)<<""<<endl<<endl;
	while (getline(MyReadFile, myText)) {
		// Output the text from the file
		// tolowwer function to make the letter in lowwer case
		//string.at(i) gets the character at index i in the string
		for (int i = 0; i < myText.length(); i++) {
			if (tolower(myText.at(i))=='a') {
				a++;//every a we incremnent value of a's counter by 1
			}
			else if (tolower(myText.at(i)) == 'e') {
				e++;//every e we incremnent value of e's counter by 1
			}
			else if (tolower(myText.at(i)) == 'i') {
				i++;//every i we incremnent value of i's counter by 1
			}
			else if (tolower(myText.at(i)) == 'o') {
				o++;//every o we incremnent value of o's counter by 1
			}
			else if (tolower(myText.at(i)) == 'u') {
				u++;//every u we incremnent value of u's counter by 1
			}
		}
		
	}
	//print the statements of each vowels with its number of occurence
	cout << "The number of A's: " << setfill('.') <<setw(40) <<"" <<a<< endl;
	cout << "The number of E's: " << setfill('.') << setw(40) << "" << e << endl;
	cout << "The number of I's: " << setfill('.') << setw(40) << "" << i << endl;
	cout << "The number of O's: " << setfill('.') << setw(40) << "" << o << endl;
	cout << "The number of U's: " << setfill('.') << setw(40) << "" << u << endl;
	cout << "The vowel count is: " << setfill('.') << setw(39) << "" << a+e+i+o+u << endl;

	// Close the file
	MyReadFile.close();
}