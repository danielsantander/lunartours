#define _USE_MATH_DEFINES

#include <cmath>
#include <limits>

#include "Vertex.h"

using namespace std;

// Vertex class constructor:d
Vertex::Vertex(const string &name, double latitudeDegrees, double longitudeDegrees)
{
	if (name.empty())
	{
		throw invalid_argument("Error with Vertex parameter. Name must not be emtpy\n");
	}

	else if ((latitudeDegrees > 90) || (latitudeDegrees < -90))
	{
		throw invalid_argument("Error with Vertex parameter. Latitude argumentmust be higher than -90 and below 90.\n");
	}

	else if ((longitudeDegrees > 180) || (longitudeDegrees < -180))
	{
		throw invalid_argument("Error with Vertex parameter. Longitude argurment must be lower than 180 and higher than -180.\n");
	}


	this->name = name;

	this->latitudeRadians = (latitudeDegrees)* ((M_PI) / 180);
	this->longitudeRadians = (longitudeDegrees)* ((M_PI) / 180);

	PrepareForShortestPathAlgorithm();
}

const string& Vertex::Name() const
{
	return this->name;
}

double Vertex::LatitudeRadians() const
{
	return this->LatitudeRadians;
}

double Vertex::LongitudeRadians() const
{
	return this->LongitudeRadians;
}

void Vertex::PrepareForShortestPathAlgorithm()
{
	shortestPathEstimate = numeric_limits<double>::infinity();	// set to infinity, defined in the limits header.

	isWhite = true;

	pParent = NULL;
}