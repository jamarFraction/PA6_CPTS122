/*******************************************************************************************
* Programmer: Jamar Fraction                                                               *
* Class: CptS 122, Fall  2017; Lab Section 05											   *
* Programming Assignment: PA5															   *
* Date: October 24, 2017                                                                   *
* Description: This program fulfills the requirements for the sixth programming assignment *
********************************************************************************************/
#pragma once
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class BSTNode{

private:
	//pointers to the left, and right nodes
	BSTNode *leftNode;
	BSTNode *rightNode;

	//private data members
	string EnglishCharacter;
	string morseCharacter;

public:

	//default constructor
	BSTNode(string passedEnglishCharacter = "", string passedMorseCharacter = "", BSTNode *left = nullptr, BSTNode *right = nullptr);

	//deafault deconstructor
	~BSTNode();

	//getter for the left Node
	BSTNode *&GetLeftNode();

	//getter for the right Node
	BSTNode *&GetRightNode();

	//setter for the left Node
	void SetLeft(BSTNode *&newNode);

	//setter for the right Node
	void SetRight(BSTNode *&newNode);

	//getter for the char
	string GetEnglishChar() const;

	//getter for the EnglishCharacter code
	string GetMorseCharacter() const;

	//setter for the char
	void SetEnglishCharacter(string passedChar);

	//setter for the EnglishCharacter code
	void SetMorseCharacter(string passedCharacterCode);

};

