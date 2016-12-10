
#include <iostream>
#include <fstream>

#include "Graph.h"

using namespace std;

void ShowUsageAndExit(void)
{
	cout << "Usage: \n\tlunartours lunarsites siteconnections requestedtours output\n" << endl;
	cout << "Where lunartours is the name of the executable program, \n"
		<< "lunarsites is the path name of an input text file containing lunar site names with their selenographic coordinates,\n"
		<< "siteconnections is the path name of an input text file containing a list of pairs of lunar site names between which direct flights are available,\n"
		<< "requestedtours is the path name of an input text file containing pairs of lunar sites for which your program needs to determine the shortest path,\n"
		<< "and output is the path name of an output text file where your program will write its results." << endl;

	exit(-1);
}

int main(int argc, char* argv[])
{
	if (argc != 5)
	{
		ShowUsageAndExit();
	}






	return 0;
}