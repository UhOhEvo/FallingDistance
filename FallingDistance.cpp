// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB3_1
Project Name:
File Name: .cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
double fallingDistance(double);

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int	time;

	// Inform user what program does


	// Prompt user to enter data needed by the program
	cout << "This program prints the distance an object travels over 10 seconds.\n" << endl;

	// A software algorithm would typically be executed after all data has been input
	//fallingDistance();

	// Program output done at end of program
	cout << "Seconds\t\t" << "Distance\n";
	cout << "========================\n";
	
	for (time = 1; time <= 10; time++) // loop to print results of fallingDistance function for each time until it reaches 10
	{
		cout << time << "\t\t"
			<< fallingDistance(time) // function
			<< "\tmeters" << endl;
	}

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

double fallingDistance(double time) // function taking in a time value to perform the calculation below
{
	const double GRAV = 9.8;

	double dist = (1.0 / 2.0) * GRAV * time * time; // calculate distance USING DOUBLES for the 1/2 calculation
	
	return dist;
}


// PROOF
// Program output copied into the below comment section
/*

*/