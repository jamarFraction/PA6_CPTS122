#include "BSTNode.h"

//defualt constructor
BSTNode::BSTNode(char passedCharacter, string passedCharacterCode, BSTNode *left, BSTNode *right){

	//set the default values for the Node, see below for defaults:
	//character = \0
	//characterCode = ""
	//leftNode = nullptr
	//rightNode = nullptr
	character = passedCharacter;

	characterCode = passedCharacterCode;

	leftNode = left;

	rightNode = right; 
}

BSTNode* BSTNode::GetLeftNode() const{

	//return a reference to a pointer to the left BSTNode
	return leftNode;

}

BSTNode* BSTNode::GetRightNode() const{

	//return a reference to a pointer to the right BSTNode
	return rightNode;

}

void BSTNode::SetLeft(BSTNode * const newNode){

	//set the left Node to the passed in pointer to a BSTNode
	leftNode = newNode;

}

void BSTNode::SetRight(BSTNode * const newNode){

	//set the right Node to the passed in pointer to a BSTNode
	rightNode = newNode;

}

char BSTNode::GetChar() const{
	//return the Node's character
	return character;
}

string BSTNode::GetCharacterCode() const{
	//return the character code for this Node
	return characterCode;
}

void BSTNode::SetChar(char passedChar)
{
	//set the Node's character to the passed in character
	character = passedChar;

}

void BSTNode::SetCharacterCode(string passedCharacterCode){

	//set the Node's character code to the passed in code
	characterCode = passedCharacterCode;

}

