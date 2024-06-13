#include <iostream>
#include<string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Construktor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;

	}
};

class Binarytree
{
public:
	Node* ROOT;

	Binarytree()
	{
		ROOT = nullptr; // initializing ROOT to null
	}

	void insert(string element) // inser a node in the binary search tree
	{
		Node* newNode = new Node(element, nullptr, nullptr); // Allocate memory for the new node
		newNode->info = element; // Asign value to the data field of the new data
		newNode->leftchild = nullptr; // Make the left child of the new data point to null
		newNode->rightchild = nullptr; // Make the right child of the new data point to null

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode); // locate the node which be the parent of the node to be inserted

		if (parent == nullptr) // if the parent is NULL (thee is empty)
		{
			ROOT = newNode;// Mark the new node as ROOT
			return; // exit
		}
		