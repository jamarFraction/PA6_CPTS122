#include "BSTNode.h"

//defualt constructor
BSTNode::BSTNode(string passedEnglishCharacter, string passedMorseCharacter, BSTNode *left, BSTNode *right){

	//set the default values for the Node, see below for defaults:
	//EnglishCharacter = \0
	//morseCharacter = ""
	//leftNode = nullptr
	//rightNode = nullptr
	EnglishCharacter = passedEnglishCharacter;

	morseCharacter = passedMorseCharacter;

	leftNode = left;

	rightNode = right; 
}

//deafult destructor
BSTNode::~BSTNode() {

	//delete the left, then right Node of the current Node
	delete leftNode;
	delete rightNode;

}

BSTNode*& BSTNode::GetLeftNode() {

	//return a reference to a pointer to the left BSTNode
	return leftNode;

}

BSTNode*& BSTNode::GetRightNode() {

	//return a reference to a pointer to the right BSTNode
	return rightNode;

}

void BSTNode::SetLeft(BSTNode *&newNode){

	//set the left Node to the passed in pointer to a BSTNode
	leftNode = newNode;

}

void BSTNode::SetRight(BSTNode *&newNode){

	//set the right Node to the passed in pointer to a BSTNode
	rightNode = newNode;

}

string BSTNode::GetEnglishChar() const{
	//return the Node's EnglishCharacter
	return EnglishCharacter;
}

string BSTNode::GetMorseCharacter() const{
	//return the EnglishCharacter code for this Node
	return morseCharacter;
}

void BSTNode::SetEnglishCharacter(string passedChar)
{
	//set the Node's EnglishCharacter to the passed in EnglishCharacter
	EnglishCharacter = passedChar;

}

void BSTNode::SetMorseCharacter(string passedCharacterCode){

	//set the Node's EnglishCharacter code to the passed in code
	morseCharacter = passedCharacterCode;

}

