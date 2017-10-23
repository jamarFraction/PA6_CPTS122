#include "BST.h"
#include "BSTNode.h"

int main(void) {

	//Menu controller variable
	int option = 0;

	BST newTree;

	do {
		//clear the screen
		system("cls");

		cout << "MENU\n1. Print tree by level\n2. Print tree in order\n3. Convert text in \"Convert.txt\"\n4. Exit" << endl;
		cin >> option;

		if (option == 1) {
			
			//clear the screen
			system("cls");

			//call the public function to print the treeby level 
			newTree.printLevelOrder();

			//pause the screen
			system("pause");
		
		}else if (option == 2) {

			//clear the screen
			system("cls");

			//call the public function to print the tree in order 
			newTree.printinOrder();

			//pause the screen
			system("pause");
		}
		else if (option == 3) {

			//clear the screen
			system("cls");

			//call the public function to print the tree in order 
			newTree.convertTextFromFile();

			//pause the screen
			system("pause");
			

		}


	} while (option != 4);


	/*newTree.search("?");

	newTree.printinOrder();*/

	/*BSTNode *test = new BSTNode;
	BSTNode *test2 = new BSTNode;

	test2->SetEnglishCharacter('B');
	test2->SetMorseCharacter("-...");

	test->SetLeft(test2);

	test->SetRight(test2);*/

	return 0;
}