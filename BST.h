/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 24, 2017                                                                   *
* Description: This program fulfills the requirements for the sixth programming assignment *
********************************************************************************************/
#pragma once
#include <fstream>
#include "BSTNode.h"

using std::fstream;

class BST{
	
public:
	
	//Defualt constructor
	BST(BSTNode *passedRoot = nullptr, string passedEnglishText = "", string passedMorseText = "");
	
	//Default destructor
	~BST();

	//Public insert.. may switch to private as tree is created upon initializion
	void insert(BSTNode *&newNode);

	//Print the tree "in order", AKA inorder traversal L, P, R
	//Public version that calls the private version
	void printinOrder();

	//Public print by level order
	void printLevelOrder();

	//Public search function by character
	void search(string &targetCharacter);

	void convertTextFromFile();
		

private:
	//pointer to the root Node
	BSTNode *rootNode;

	string englishText;

	string morseText;

	//Helper function that spits out Nodes 
	BSTNode *makeNode(string englishChar, string morseChar);

	//Function called in the default constructor that pulls all the data from the file into the tree
	void BuildTree(fstream &inputFile);

	//Private insert, Recursive function
	void insert(BSTNode *&pTree, BSTNode *&newNode);

	//Print function that will print the tree in sorted order
	void printinOrder(BSTNode *& pTree) const;

	//Private search function, handles the printing of found/not found characters
	void search(BSTNode *&pTree, string &targetCharacter);

	//Private print by level order base function
	void printLevelOrder(BSTNode *&pTree);

	//Private print by level order extension function
	void printGivenLevel(BSTNode *&pTree, int level);


	string convertToEnglishFromFile(fstream &inputFile);


	void convertToMorseFromEnglish(string &inputString);

};




