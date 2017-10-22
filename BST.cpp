#include "BST.h"

//default constructor
BST::BST(BSTNode *passedRoot) {

	//by default set the root Node to a null pointer (set to null by default in BSTNode.h)
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
	
	//close the file
	morseLibrary.close();
}

//default destructor 
BST::~BST() {

	//delete the root node.. this will call the destructors of the left and right nodes recursively
	delete rootNode;
}

void BST::BuildTree(fstream &inputFile) {

	//while the file still has data
	while (inputFile) {

		//Declare the variables to be used to hold the values pulled from the file
		string englishCharacter = "";
		string morseCharacter = "";

		//get the englishChar
		inputFile >> englishCharacter;

		//get the morseChar
		inputFile >> morseCharacter;

		//Only do if there was information pulled from the file 
		if (englishCharacter != "" && morseCharacter != "") {

			//Declare a pointer and point it to a new node with values
			//pulled from the file (english character followed by the morse character)
			BSTNode *newNode = makeNode(englishCharacter, morseCharacter);

			//insert it into the tree
			//private version of the insert function
			insert(this->rootNode, newNode);

		}
	}
}

BSTNode* BST::makeNode(string englishChar, string morseChar) {

	//Declare a pointer and point it to an empty new node
	BSTNode *newNode = new BSTNode;

	//set the english and morse characters to the values passed in as parameters
	newNode->SetEnglishCharacter(englishChar);
	newNode->SetMorseCharacter(morseChar);

	//return the pointer to our newly created node
	return newNode;
}

void BST::insert(BSTNode *&newNode) {

	//call the private version of the insert function to start the 
	//recursive insertion
	insert(this->rootNode, newNode);
	
}

void BST::insert(BSTNode *&pTree, BSTNode *&newNode) {

	//base case
	if (pTree == nullptr) {

		//set the "tree" node (which if calls have led them to this point is empty),
		//to the node we wish to insert
		pTree = newNode;

	}else if (newNode->GetEnglishChar() < pTree->GetEnglishChar()){

		//pass the nodes to the left
		insert((pTree)->GetLeftNode(), newNode);

	}else if (newNode->GetEnglishChar() > pTree->GetEnglishChar()){

		//pass to the right
		insert(pTree->GetRightNode(), newNode);

	}
	//if it hasn't fallen into any of the above categories then it's a duplicate
	//so it won't get inserted.. pause lol

}

void BST::printinOrder() {

	//call the private, recursive version of the function
	printinOrder(this->rootNode);

}

void BST::printinOrder(BSTNode *& pTree) const {

	//base
	if (pTree != nullptr) {

		//L, P, R
		printinOrder(pTree->GetLeftNode());

		cout << pTree->GetEnglishChar() << endl;

		printinOrder(pTree->GetRightNode());

	}
	
}

void BST::search(string targetCharacter) {

	//convert the target characte before passing it to the search
	targetCharacter = toupper(targetCharacter[0]);

	//pass our rootNode and the target character to the private version of the search function
	search(this->rootNode, targetCharacter);

}

void BST::search(BSTNode *&pTree, string &targetCharacter) const {

	if (pTree != nullptr) {

		//the target character is less than the current tree character
		if (targetCharacter < pTree->GetEnglishChar()) {

			//pass our Node's left Node and the target character to the search
			search(pTree->GetLeftNode(), targetCharacter);
		
		}else if (targetCharacter > pTree->GetEnglishChar()) { //the target character is less than the current tree character

			//pass our our Node's right Node and the target character to the search
			search(pTree->GetRightNode(), targetCharacter);

		}else if (targetCharacter == pTree->GetEnglishChar()) { 
			//the target character is the current tree character

			//print targeted message: "Target found. targetCharacter = (morseCode representation of the targetCharacter
			cout << "Target found. " << targetCharacter << " = " << pTree->GetMorseCharacter() << endl;
		}
	}else {

		//We've gotten to this point so the character we were looking for is not in the tree
		cout << "Search character not found" << endl;
	}
}

void BST::printLevelOrder() {

	//print the tree in level order by calling the private version of this function
	printLevelOrder(this->rootNode);
}


//Testing
//the implementation in the following 2 functions came from:
//http://www.geeksforgeeks.org/print-level-order-traversal-line-line/

void BST::printLevelOrder(BSTNode *&pTree) {

	int h = 10;
	int i;
		
	for(i = 1; i <= h; i++)
	{
		printGivenLevel(pTree, i);
		cout << "\n";
	}
}

void BST::printGivenLevel(BSTNode *&pTree, int level) {

	if (pTree == nullptr)
		return;
	if (level == 1)
		cout << pTree->GetEnglishChar() << "  "; 
	else if (level > 1)
	{
		printGivenLevel(pTree->GetLeftNode(), level - 1);
		printGivenLevel(pTree->GetRightNode(), level - 1);
	}

}