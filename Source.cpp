
/***********************************************
* Name: issouf kindo
* Email: kindoi67@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>
#include <string>
using namespace std; 

const  float PI = 3.14159;


int up = 0;
int down = 0;
int left = 0;
int right = 0;

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
	*/
		

	float radius, circonference;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program will calculate the circonference of a cercle " << endl;
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
	cout << " This program will convert temperature in degrees Celsius to degrees Fahrenheit " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input Celsius: ";
	cin >> Celsius;

	//Compute kilometer into mile 
	Fahrenheit = (9 / 5) * Celsius + 32;
	

	//Display temperature in Fahrenheit
	cout << " The temperature in Fahrenheit is = " << Fahrenheit << "\n\n";
	cout << "Program has ended" << endl;


	/*
	*this the program will take a given person age in years computes the equivalent number of months, days, hours, minutes, and seconds. 
	*
	**/

	float years, months, days,hours, minutes, seconds;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program will convert person age in years to the equivalent number of months, days, hours, minutes, and seconds. " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input age (number of years): ";
	cin >> years;

	//Compute kilometer into mile 
	months = 12 * years;
	days = 365.25 * years;
	hours = 24 * days ;
	minutes = 60 * hours;
	seconds = 60 * minutes;
	
	//Display temperature in Fahrenheit
	
	cout << "number of  years = " << years << "\n\n";
		cout << "number of  months = " << months << "\n\n";
			cout << "number of  days = " << days << "\n\n";
				cout << "number of  minutes = " << minutes << "\n\n";
					cout << "number of  seconds = " << seconds << "\n\n";					
	                    cout << "Program has ended" << endl;


	/*
	*this the program will print your first initial as a block letter. 
	*
	**/
	
	
	char response;
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program will  print my first initial as a block letter(this program can hanldle 6 characters: issouf ). " << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "do you want to see it?(enter n to skip): ";
	cin >> response;

    if (response != 'n'){
    cout << "1 2 3 4 5 6" << endl;   
    cout <<2<< "  *******  "<< endl;
    cout <<3<< "     *"<< endl;       
    cout <<4<< "     *"<< endl;
    cout <<5<< "     *"<< endl; 
    cout <<6<< "  *******  "<< endl;
	
	cout << "1 2 3 4 5 6" << endl;   
    cout <<2<< "    ****** "<< endl;
    cout <<3<< "  *"<< endl;       
    cout <<4<< "    *****"<< endl;
    cout <<5<< "         *"<< endl; 
    cout <<6<< "  *******  "<< endl;
    
	cout << "1 2 3 4 5 6" << endl;
    cout <<2<< "   ******  "<< endl;
    cout <<3<< "  *"<< endl;       
    cout <<4<< "    *****"<< endl;
    cout <<5<< "         *"<< endl; 
    cout <<6<< "  *******  "<< endl;
    
    cout << "1 2 3 4 5 6" << endl;    
    cout <<2<< "   ******  "<< endl;
    cout <<3<< "  *      *"<< endl;       
    cout <<4<< "  *      *"<< endl;
    cout <<5<< "  *      *"<< endl; 
    cout <<6<< "   ******  "<< endl;
    
    cout << "1 2 3 4 5 6" << endl;    
    cout <<2<<" *      *  "<< endl;
    cout <<3<< "  *   *"<< endl;       
    cout <<4<< "  *   *"<< endl;
    cout <<5<< "  *   *"<< endl; 
    cout <<6<< "   ***  "<< endl;
    
      cout << "1 2 3 4 5 6" << endl;    
    cout <<2<< "   ******  "<< endl;
    cout <<3<< "  *      "<< endl;       
    cout <<4<< "  *******"<< endl;
    cout <<5<< "  *      "<< endl; 
    cout <<6<< "  * "<< endl;
}else{
    cout << "okay, I understand.Bye now!\n";
    }
	system("pause");
	
	return 0;
}
