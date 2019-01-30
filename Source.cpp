


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


	double miles, kilometers, meters, centimeters, millimeters;

	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes convert miles into kilometer" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input distance in mile: ";
	cin >> miles;
	
	//Compute kilometer into mile 
	kilometers = miles*1.6;
	meters = 1000 * kilometers;
		centimeters = 100 * meters;
		millimeters = 1000 * meters;
	
	//Display the distance kilometer 
	cout << " The distance in kilometer is = " << kilometers << "\n\n";
	cout << " The distance in meters is = " << meters << "\n\n";
	cout << " The distance in centimeters is = " << centimeters << "\n\n";
	cout << " The distance in millimeters is = " << millimeters << "\n\n";
	cout << "Program has ended"<<endl;

	/*
	*this the program will calculate the circonference of a cercle 
	*
	**/

	float radius, circonference;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes program will calculate the circonference of a cercle " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input raduis: ";
	cin >> radius;

	//Compute kilometer into mile 
	circonference = radius * PI * 2;
	 

	//Display the distance kilometer 
	cout << " The circonference is = " << circonference << "\n\n";
	cout << "Program has ended" << endl; 



	/*
	*this the program will  convert a temperature in degrees Celsius to degrees Fahrenheit.
	*
	**/

	float Fahrenheit, Celsius;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes program will convert temperature in degrees Celsius to degrees Fahrenheit " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input Celsius: ";
	cin >> Celsius;

	//Compute kilometer into mile 
	Fahrenheit = (9 / 5) * Celsius + 32;
	

	//Display the distance kilometer 
	cout << " The temperature Fahrenheit is = " << Fahrenheit << "\n\n";
	cout << "Program has ended" << endl;



	

	system("pause");
	
	return 0;
}
