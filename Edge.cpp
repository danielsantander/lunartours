
#include <cmath>

#include "Edge.h"

using namespace std;

// Constructor
Edge::Edge(Vertex *pVertex1, Vertex *pVertex2)
{
	// Validate incoming parameters
	if ((pVertex1 == NULL) || (pVertex2 == NULL))
	{
		throw invalid_argument("Error with Edge class constructor. Vertex pointers must not be null\n");
	}
	else if (pVertex1 == pVertex2)
	{
		throw invalid_argument("Error with Edge class construtor. Both vertex pointers must not point to the same object\n");
	}

	// Assigning parameters to the Edge Class data members
	this->pVertex1 = pVertex1;
	this->pVertex2 = pVertex2;

	// Calculating the distance between the two vertices using the haversine formula and the Moon's mean radius
	double distance =  0.0;
	double moonRadius = 1737.10; // units: km
	double latitudeDifference = pVertex2->LatitudeRadians - pVertex1->LatitudeRadians;
	double longitudeDifference = pVertex2->LongitudeRadians - pVertex1->LongitudeRadians;

	// Haversine formula:
	distance = (2)*(moonRadius)* (asin(sqrt((pow(sin(latitudeDifference / 2), 2)) + cos(pVertex1->LatitudeRadians) * cos(pVertex2->LatitudeRadians) * pow(sin(longitudeDifference / 2), 2))));

	// Do u set the distance as the 'weight' object member for this class?
}

Vertex* Edge::Vertex1() const
{
	return this->pVertex1;
}

Vertex* Edge::Vertex2() const
{
	return this->pVertex2;
}

double Edge::Weight() const
{
	return this->weight;
}