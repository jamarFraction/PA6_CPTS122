#pragma once
#include <fstream>
#include "BSTNode.h"

using std::fstream;

class BST{
	
public:
	
	BST(BSTNode *passedRoot = nullptr);
	void insert(BSTNode *&newNode);
		

private:
	//pointer to the root Node
	BSTNode *rootNode;

	void BuildTree(fstream &inputFile);
	BSTNode *makeNode(string englishChar, string morseChar);
	void insert(BSTNode *&pTree, BSTNode *&newNode);
	
};

//fstream & operator >> (fstream &lhs, BSTNode *&rhs);



