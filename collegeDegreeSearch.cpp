#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
using namespace std;

	//Author: James Saylor
	//Description : This program will perform a search and display the applicable
	//				degree program

char firstLetter;
char secondLetter;
char thirdLetter;

int main ()
{
	cout << "Search for a degree program." << endl << endl;
	cout << "Please enter the first letter in your program abbreviation: ";
	cin >> firstLetter;
	cout << endl << endl;
	firstLetter = static_cast<char>(toupper(firstLetter));
	
	switch (firstLetter)
	{
		case 'B':
			cout << "Your program is BS in Business Technology Management(BTM)" << endl;
			break;
		case 'D':
			cout << "Your program is MS in Database Technologies(DT)" << endl;
			break;
		case 'E':
			cout << "Your program is Certificate in E-Security(ES)" << endl;
			break;
		case 'C':
			cout << "Please enter the second letter in your program abbreviation: ";
			cin >> secondLetter;
			cout << endl << endl;
			secondLetter = static_cast<char>(toupper(secondLetter));
			switch (secondLetter)
			{
				case 'I':
					cout << "Your program is BS in Computer Information Systems(CIS)" << endl;
					break;
				case 'N':
					cout << "Your program is BS in Computer Networking(CN)" << endl;
					break;
				case 'S':
					cout << "Your program is BS in Computer Science(CS)" << endl;
					break;
				default:
					cout << "Unknown Program" << endl;	
			}
			break;
			
		case 'I':
			cout << "Please enter the second letter in your program abbreviation ";
			cin >> secondLetter;
			cout << endl << endl;
			secondLetter = static_cast<char>(toupper(secondLetter));
			switch (secondLetter)
			{
				case 'A':
					cout << "Your program is MS in Information Assurance(IA)" << endl;
					break;
				case 'T':
					cout << "Your program is MS in Information Technology Management(ITM)" << endl;
					break; 
				default:
					cout << "Unknown Program" << endl;
			}
			break;	
				
		case 'S':
			cout << "Please enter the second and third letter in your program abbreviation ";
			cin >> secondLetter >> thirdLetter;
			cout << endl << endl;
			secondLetter = static_cast<char>(toupper(secondLetter));
			thirdLetter = static_cast<char>(toupper(thirdLetter));			
			switch (secondLetter)
			{
				case 'A':
					
					switch (thirdLetter)
					{
						case 'N':
							cout << "Your program is Certificate in Storage Area Networks(SAN)" << endl;
							break;
					}
					
				case 'E':
					
					switch (thirdLetter)
					{
						case 'P':
							cout << "Your program is MS in Software Engineering Practices(SEP)" << endl;
							break;
						case 'T':
							cout << "Your program is MS in Systems Engineering Technology(SET)" << endl;
							break;
								
					}
				default:
					cout << "Unknown Program" << endl;
			}
			break;
			
		default:
			cout << "Unknown Program" << endl;
	}
	
 	cout << endl << endl;
 	return 0;
}

