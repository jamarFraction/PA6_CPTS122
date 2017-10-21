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
	char character;
	string characterCode;

public:

	//default constructor
	BSTNode(char passedCharacter = '\0', string passedCharacterCode = "", BSTNode *left = nullptr, BSTNode *right = nullptr);

	//getter for the left Node
	BSTNode *GetLeftNode() const;

	//getter for the right Node
	BSTNode *GetRightNode() const;

	//setter for the left Node
	void SetLeft(BSTNode * const newNode);

	//setter for the right Node
	void SetRight(BSTNode * const newNode);

	//getter for the char
	char GetChar() const;

	//getter for the character code

	string GetCharacterCode() const;

	//setter for the char

	void SetChar(char passedChar);

	//setter for the character code

	void SetCharacterCode(string passedCharacterCode);

};

