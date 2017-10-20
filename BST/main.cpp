// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main()
{
	int  treeKeys[16] = {
		50, 76, 21, 4, 32, 64, 15, 52,
		14, 100, 83, 2, 3, 70, 87, 80
	};

	BST myTree;

	cout << "Printing the tree in order"
		<< endl
		<< "Before adding numbers"
		<< endl;

	myTree.PrintInOrder();
	cout << endl;

	for (int i = 0; i < 16; i++) {
		myTree.AddLeaf(treeKeys[i]);
	}

	cout << "Printing the tree in order"
		<< endl
		<< "After adding numbers"
		<< endl;

	myTree.PrintInOrder();

	int pause;
	cin >> pause;
    return 0;
}

