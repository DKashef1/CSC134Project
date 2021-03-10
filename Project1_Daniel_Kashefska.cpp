#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   int gpu;  // To hold gpu speed
   int clock;  // To hold clock speed
   int core;  // To hold number of cores
   int choice; // To hold a selction choice.
	
	// Constants for selection.
	const int  x1280_x_720 = 1,
			   x1920_x_1080 = 2,
			   x2560_x_1440 = 3,
			   x3840_x_2160 = 4;
	

   cout << "Please enter the clock speed (in Megahertz) of your graphics card: ";
	cin >> gpu;
	cout << "Please enter the clock speed (in Megahertz) of your processor: ";
	cin >> clock;
	cout << "Please enter the number of cores of your processor: ";
	cin >> core;
	cout << "What is the resolution of your monitor?" << endl;
	cout << "1. 1280 x 720" << endl;
	cout << "2. 1920 x 1080" << endl;
	cout << "3. 2560 x 1440" << endl;
	cout << "4. 3840 x 2160" << endl;
	cout << "Please select from the options above: ";
	cin >> choice;
	
}
