#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   	int gpu;  // To hold gpu speed
   	int cpu;  // To hold cpu speed
   	int core;  // To hold number of cores
   	int choice; // To hold a selction choice.
   	
	double multiplier; // to assign mulitpler based on user input for screen resolution
	double score; // performance score
	
	string resolution;
	string quality;
	
	// Constants for selection.
	const int  x1280_x_720 = 1,
			   x1920_x_1080 = 2,
			   x2560_x_1440 = 3,
			   x3840_x_2160 = 4;
			
	// Set the numeric ouput formatting.
    cout << fixed << showpoint << setprecision(2);
	
	//Get gpu speed 
   	cout << "Please enter the clock speed (in Megahertz) of your graphics card: ";
	cin >> gpu;
	if (gpu <= 0)
      {
         cout << "Invalid graphics card speed entered. Program will terminate.";
         return 0;
	  }
   
    //Get cpu speed 
	cout << "Please enter the clock speed (in Megahertz) of your processor: ";
	cin >> cpu;
	if (cpu <= 0)
      {
         cout << "Invalid processor speed entered. Program will terminate.";
         return 0;
	  }  
	
	//Get number of cores 
	cout << "Please enter the number of cores of your processor: ";
	cin >> core;
	if (core <= 0)
      {
         cout << "Invalid number of cores entered. Program will terminate.";
         return 0;
	  }  
	  
	//Get monitor resolution   
	cout << "What is the resolution of your monitor?" << endl;
	cout << "        1. 1280 x 720" << endl;
	cout << "        2. 1920 x 1080" << endl;
	cout << "        3. 2560 x 1440" << endl;
	cout << "        4. 3840 x 2160" << endl;
	cout << "Please select from the options above: ";
	cin >> choice;
	cout << endl << endl;
	if (choice < x1280_x_720 || choice > x3840_x_2160)
      {
         cout << "Invalid Resolution menu choice. Program will terminate.";
         return 0;
	  }
	  
	// assigning multiplier and resolution depending upon the choice of the user
	if (choice == 1)
	{
	multiplier = 1;
	resolution = "1280 x 720";
	}
	else if (choice == 2)
	{
	multiplier = .75;
	resolution = "1920 x 1080";
	}
	else if (choice == 3)
	{
	multiplier = .55;
	resolution = "2560 x 1440";
	}
	else if (choice == 4)
	{
		multiplier = .35;
	resolution = "3840 x 2160";
	}
	
	// calculating the Performace score
	score = ((5 * gpu) + (core * cpu)) * multiplier;

	// determining the quality depending upon the Performace score
	if (score > 17000)
	{
	quality = "Ultra";
	}
	else if (score > 15000 && score <= 17000)
	{
	quality = "High";
	}
	else if (score > 13000 && score <= 15000)
	{
	quality = "Medium";
	}
	else if (score > 11000 && score <= 13000)
	{
	quality = "Low";
	}
	else
	{
	quality = "Unable to Play";
	}
	
	// printing the details	
	cout << "Computer Hardware Graphics Quality Recommendation Tool" << endl << endl;
	cout << "GPU Clock Speed: " << gpu << " MHz" << endl;
	cout << "CPU Clock Speed: " << cpu << " MHz" << endl;
	cout << "Number of cores: " << core << endl;
	cout << "Monitor Resolution: " << resolution << endl;
	cout << "Performace Score: " << score << endl;
	cout << "Recommended Graphics Quality: " << quality << endl;
    


}
