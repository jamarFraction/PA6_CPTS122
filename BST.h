#pragma once
#include <fstream>
#include "BSTNode.h"

using std::fstream;

class BST{
	
public:
	
	BST(BSTNode *passedRoot = nullptr);
		

private:
	//pointer to the root Node
	BSTNode *rootNode;

	void BuildTree(fstream &inputFile);
	BSTNode *makeNode(char englishChar, string morseChar);
	
};

//fstream & operator >> (fstream &lhs, BSTNode *&rhs);



