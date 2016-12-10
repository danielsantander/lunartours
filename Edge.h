/******************************************************************************

Edge.h

Copyright � 2001-2016 Kenneth S. Gregg. All rights reserved.

*******************************************************************************/

#ifndef EDGE_H_USED_
#define EDGE_H_USED_

#include <string>

#include "Vertex.h"

// This class defines an edge in the graph, representing a direct connection 
// between two lunar locations (vertices). The weight of the edge is the 
// distance between the two locations, and is computed by the constructor.

class Edge
{
public:

	Edge(Vertex *pVertex1, Vertex *pVertex2);	// constructor

	Vertex *Vertex1() const;					// read-only access to private member
	Vertex *Vertex2() const;					// read-only access to private member
	double Weight() const;						// read-only access to private member

private:

	Vertex *pVertex1;
	Vertex *pVertex2;
	double weight;
};

#endif