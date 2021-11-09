#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//declaring the variables 
	double Fahrenheit;
	double Celsius;
	cout <<"WELCOME! THIS IS A PROGRAM THAT COVERTS FAHRENHEIT TO CELCIUS\n";
	cout << "ENTER THE FAHRENHEIT TEMPRETURE\n";
	cin>>Fahrenheit;//giving the user an option to enter the fahrenheit tempreture
	Celsius=5.0/9.0*(Fahrenheit-32.0);//initializing the variables 
	cout << "THE TEMPRETURE CONVERTED TO CELSIUS ="<<Celsius << endl;//printing out the convertion
	return 0;
}
