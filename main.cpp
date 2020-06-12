#include "BinaryTree.h"
#include "BinaryHeap.h"
#include "interface.h"
#include "test.h"

int main()
{
	int choice{ 0 };

	std::cout << "Choose algorithm: " << std::endl;
	std::cout <<
		"1. Binary tree" << std::endl <<
		"2. Binary heap" << std::endl;
	std::cin >> choice;
	if (choice == 1)
		binaryTreeInterface();
	else if (choice == 2)
		binaryHeapInterface();
	else
		std::cout << "WRONG CHOISE!" << std::endl;

	std::cout << std::endl;
	return 0;	
}