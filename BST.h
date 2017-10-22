#pragma once
#include <fstream>
#include "BSTNode.h"

using std::fstream;

class BST{
	
public:
	
	//Defualt constructor
	BST(BSTNode *passedRoot = nullptr);
	
	//Default destructor
	~BST();

	//Public insert.. may switch to private as tree is created upon initializion
	void insert(BSTNode *&newNode);

	//Print the tree "in order", AKA inorder traversal L, P, R
	//Public version that calls the private version
	void printinOrder();

	void printLevelOrder();

	void search(string targetCharacter);
		

private:
	//pointer to the root Node
	BSTNode *rootNode;

	//Function called in the default constructor that pulls all the data from the file into the tree
	void BuildTree(fstream &inputFile);

	//Helper function that spits out Nodes 
	BSTNode *makeNode(string englishChar, string morseChar);

	//Private insert, Recursive function
	void insert(BSTNode *&pTree, BSTNode *&newNode);

	//Print function that will print the tree in sorted order
	void printinOrder(BSTNode *& pTree) const;

	void search(BSTNode *&pTree, string &targetCharacter) const;

	void printLevelOrder(BSTNode *&pTree);

	void printGivenLevel(BSTNode *&pTree, int level);
};




