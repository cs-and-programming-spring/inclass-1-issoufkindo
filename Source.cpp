


/***********************************************
* Name: issouf kindo
* Email: kindoi67@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{


	double miles, kilometer;

	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes convert miles into kilometer" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input distance in mile: ";
	cin >> miles;
	
	//Compute kilometer into mile 
	kilometer = miles*1.6;
	
	//Display the distance kilometer 
	cout << " The distance in kilometer is = " << kilometer << "\n\n";
	cout << "Program has ended"<<endl;

	system("pause");
	
	return 0;
}