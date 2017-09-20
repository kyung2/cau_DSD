/*
* The Graph class defines common behaviors and states of graphs.
*/
#include <vector>
#include "Node.h"

class Graph{
public :
	//constructors
	Graph();
	virtual ~Graph();

	//getters
	inline vector<Node> getNodeList(){ return node_list; }
	inline int** getAdjMatrix(){ return adj_matrix; }
	inline int getNodeCount(){ return n_node; }

	//setters
	inline void setNodeList(vector<Node> new_list){ this->node_list = new_list; }
	inline void setNodeCount(int new_count){ this->n_node = new_count; }
	void setAdjMatrix(int **new_matrix);		//needs to be implemented

private:
	vector<Node> node_list;	//list of nodes
	int **adj_matrix;		//adjacency matrix
	int n_node;				//number of nodes
};

//needs to be implemented
void setAdjMatrix(int **new_matrix){

}