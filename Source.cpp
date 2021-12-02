#include<iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    //5 counters for the five vowels to detect number of vowels in the string readed
    int a=0, e=0,i=0,o=0,u=0,l=0,m=0,g=0;

    cout << setfill('*')<<setw(60)<<""<<endl;
    cout << setfill('*')<<setw(12)<<""<<" Welcome to my letter count program "<< setfill('*')<<  setw(12) <<""<<endl;
    cout << setfill('*') << setw(60) << "" << endl << endl;

    // Read from the text file
    ifstream MyReadFile;

    //Open the file
    MyReadFile.open("Constitution_of_the_United_States.html" , ios :: in ) ;

    cout << "Analyzing file '"<<setfill('.')<<setw(3)<<"'"<<endl<<endl;

    //Create char to go through the file
    char ch ;

    //While loop to go through the file until eof()
    while (!(MyReadFile.eof()))
    {
        MyReadFile >> ch ;
        // Output the text from the file
        // tolower function to make the letter in lowwer case

            if (tolower(ch)=='a')
            {
                a++;//every a we incremnent value of a's counter by 1
            }
            else if (tolower(ch) == 'e')
            {
                e++;//every e we incremnent value of e's counter by 1
            }
            else if (tolower(ch) == 'i')
            {
                i++;//every i we incremnent value of i's counter by 1
            }
            else if (tolower(ch) == 'o')
            {
                o++;//every o we incremnent value of o's counter by 1
            }
            else if (tolower(ch) == 'u')
            {
                u++;//every u we incremnent value of u's counter by 1
            }
            else if (tolower(ch) == 'm')
            {
                m++;//every u we incremnent value of m's counter by 1
            }
            else if (tolower(ch) == 'g')
            {
                g++;//every u we incremnent value of g's counter by 1
            }
            else if (tolower(ch) == 'l')
            {
                l++;//every u we incremnent value of l's counter by 1
            }

    }
    //print the statements of each vowels with its number of occurence
    cout << "The number of A's: " << setfill('.') <<setw(40) <<"" <<a<< endl;
    cout << "The number of E's: " << setfill('.') << setw(40) << "" << e << endl;
    cout << "The number of I's: " << setfill('.') << setw(40) << "" << i << endl;
    cout << "The number of O's: " << setfill('.') << setw(40) << "" << o << endl;
    cout << "The number of U's: " << setfill('.') << setw(40) << "" << u << endl;
    cout << "The vowel count is: " << setfill('.') << setw(39) << "" << a+e+i+o+u << endl;
    cout << "The number of L's: " << setfill('.') << setw(40) << "" << l << endl;
    cout << "The number of M's: " << setfill('.') << setw(40) << "" << m << endl;
    cout << "The number of G's: " << setfill('.') << setw(40) << "" << g << endl;

    // Close the file
    MyReadFile.close();

    return 0 ;
}
