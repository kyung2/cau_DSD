/*
* Node class contains "name" of each station.
* Other variables can be added.
*/
#include <iostream>
using namespace std;

class Node{
public:
	Node(){ name = "NULL"; }
	Node(string name);
	~Node();

	string getName(){ return name; }
private:
	string name;
};