#include "netlist_analyzer.h"


//////////////////////////////////////////////////////////////////////////
// class Node
Node::Node(int nodeId){
	this->nodeId = nodeId;
	this->adjNum = 0;
}
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// AdjList
AdjList::AdjList(){
}

AdjList::AdjList(int nodeNum){
	this->nodeNum = nodeNum;
}
AdjList::~AdjList(){
	for (unsigned int i=0; i<this->nodes.size(); i++)
	{
		delete nodes[i];
	}
	for (unsigned int i=0; i<this->edges.size(); i++)
	{
		delete edges[i];
	}
}
//////////////////////////////////////////////////////////////////////////

