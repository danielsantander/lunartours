/******************************************************************************

Graph.h

Copyright � 2001-2016 Kenneth S. Gregg. All rights reserved.

*******************************************************************************/

#ifndef GRAPH_H_USED_
#define GRAPH_H_USED_

#include <string>
#include <vector>

#include "Vertex.h"
#include "Edge.h"

class Graph
{
public:

	~Graph();

	void AddVertex(const string &name, double latitudeDegrees, double longitudeDegrees);
	void AddEdge(const string &name1, const string &name2);
	string ShortestPathBetween(const string &name1, const string &name2) const;

private:

	Vertex *FindVertexByName(const string &name) const;
	bool EdgeExists(const Vertex *pVertex1, const Vertex *pVertex2) const;

	vector<Vertex *> vertices;
	vector<Edge *> edges;
};

#endif