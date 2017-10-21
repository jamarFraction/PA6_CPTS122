#include "BST.h"


//default constructor
BST::BST(BSTNode *passedRoot) {

	//by default set the root Node to a null pointer
	rootNode = passedRoot;

	//open the file for reading in codes to the BST
	fstream morseLibrary("MorseTable.txt");
	
	if (morseLibrary.is_open()) {

		//pass the file stream to the tree builder function
		BuildTree(morseLibrary);
	}
	else {
		//print error message as the file was unable to be opened
		printf("Error opening read-in file");
	}
	

}

void BST::BuildTree(fstream &inputFile) {

	//while the file still has data
	while (inputFile) {

		char englishChar = '\0';
		string morseChar = "";

		//insert a line in to the tree
		//get the englishChar
		inputFile >> englishChar;

		//get the morseChar
		inputFile >> morseChar;

		//make a node
		BSTNode *newNode = makeNode(englishChar, morseChar);

		//insert it into the tree


	}
}



BSTNode* BST::makeNode(char englishChar, string morseChar) {

	BSTNode *newNode = new BSTNode;

	newNode->SetChar(englishChar);
	newNode->SetCharacterCode(morseChar);

	return newNode;
}

//fstream & operator >> (fstream &lhs, BSTNode *&rhs) {
//
//	char englishChar = '\0';
//	string morseChar = "";
//
//	std::getline(lhs, morseChar);
//
//}



