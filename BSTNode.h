#pragma once
#include <iostream>
#include <string>
using std::string;

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

