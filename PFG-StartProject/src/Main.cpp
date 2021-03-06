//**********************************************************//
//			Physics Simulation: Newton's Cradles			//
//			Created by Nikita Gribuska (s5065617)			//
//  	GitHub link: https://github.com/s5065617/Physics	//
//**********************************************************//

#include "Application.h"

/**
* The main function is the entry point of our program. 
* which initialises the application and runs it.
* Don't change this file !
* @file: Main.cpp 
*/

int main(int argc, char* argv[])
{
	std::cerr << "Loading application data !\n";
	// Get the application instance and run it
	return (Application::Instance()->Run() ? 0 : -1);
}

