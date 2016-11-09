#include "Test.h"
#include <vector>

void Test::runTests(){
	LinkedListOfInts ls;
	std::vector<int> myVec;

//TEST 1: Size is 0 on empty list
	if(ls.size() == 0){
		std::cout << "Test 1: Size returns 0 on empty list: SUCCESS\n";
	}
	else{
		std::cout << "Test 1: Size returns 0 on empty list: FAILED\n";
	}

//Test 2: isEmpty
	if(ls.size() == 0 && ls.isEmpty() == true){
		std::cout << "Test 2: isEmpty before adding any values: SUCCESS\n";
	}
	else{
		std::cout << "Test 2: isEmpty before adding any values: FAILED\n";
	}

//Test 13 - 15 commented out because they're checking on empty lists
/*//TEST 15: remove front on empty list
	//int temp = myVec[1];
	//std::cout << "New Front should be: " << temp << "\n";
	std::cout << "Remove Front returned " << ls.removeFront() << "\n";
	myVec = ls.toVector();
	if(myVec.size() == 0){
		std::cout << "Test 15: Remove Front: SUCCESS\n";
		std::cout << "Current Size: " << ls.size() << "\n";
		printList(myVec);
	}
	else{
		std::cout << "Test 15: Remove Front: FAILED\nYour List: ";
		printList(myVec);
		std::cout << "Current Size: " << ls.size() << "\n";
	}

//TEST 14: remove back on empty list
	//int temp = myVec[1];
	//std::cout << "New Front should be: " << temp << "\n";
	std::cout << "Remove Back returned " << ls.removeBack() << "\n";
	myVec = ls.toVector();
	if(myVec.size() == 0){
		std::cout << "Test 14: Remove Back: SUCCESS\n";
		std::cout << "Current Size: " << ls.size() << "\n";
		printList(myVec);
	}
	else{
		std::cout << "Test 14: Remove Back: FAILED\nYour List: ";
		printList(myVec);
		std::cout << "Current Size: " << ls.size() << "\n";
	}

//TEST 13: addBack on empty list
	ls.addBack(15);
	myVec = ls.toVector();
	if(myVec.front() == 15){
		std::cout << "Test 13: Add Back (15): SUCCESS\n";
		std::cout << "Current Size: " << ls.size() << "\n";
		printList(myVec);
	}
	else{
		std::cout << "Test 13: Add Back (15): FAILED\n";
	}
*/

//TEST 3: add Front on empty list
	ls.addFront(10);
	myVec = ls.toVector();
	if(myVec.front() == 10){
		std::cout << "Test 3: Add Front (10): SUCCESS\n";
	}
	else{
		std::cout << "Test 3: Add Front (10): FAILED\n";
	}

//TEST 4: Size increments after one add front
	if(ls.size() == 1){
		std::cout << "Test 4: Size returns 1 when adding 1: SUCCESS\n";
	}
	else{
		std::cout << "Test 4: Size returns 1 when adding 1: FAILED\n";
	}

//Test 5: isEmpty on non empty list
	if(ls.size() > 0 && ls.isEmpty() == false){
		std::cout << "Test 5: isEmpty after adding any one value: SUCCESS\n";
	}
	else{
		std::cout << "Test 5: isEmpty after adding one value: FAILED\n";
	}

//TEST 6: add front on non empty list
	ls.addFront(20);
	myVec = ls.toVector();
	if(myVec.front() == 20){
		std::cout << "Test 6: Add Front (20): SUCCESS\n";
	}
	else{
		std::cout << "Test 6: Add Front (20): FAILED\n";
	}

//TEST 7: add back on non empty list
	ls.addBack(40);
	myVec = ls.toVector();
	if(myVec.back() == 40){
		std::cout << "Test 7: Add Back (40): SUCCESS\n";
	}
	else{
		std::cout << "Test 7: Add Back (40): FAILED\nYour List: ";
		printList(myVec);
	}

//TEST 8: check size after an add back
	if(testSize(myVec, ls) == true){
		std::cout << "Test 8: Testing size after multiple entries: SUCCESS\n";
	}
	else{
		std::cout << "Test 8: Testing size after multiple entries: FAILED\n";
	}

//TEST 9: remove Front
	int temp = myVec[1];
	int rfReturn = ls.removeFront();
	myVec = ls.toVector();
	if(myVec.front() == temp){
		std::cout << "Test 9: Remove Front: SUCCESS\n";
	}
	else{
		std::cout << "Test 9: Remove Front: FAILED\nYou List: ";
		printList(myVec);
		std::cout << "Remove Front returned: " << rfReturn << "\n";
		std::cout << "Current Size: " << ls.size() << "\n";
	}

//Test 10: another addBack
	ls.addBack(75);
	myVec = ls.toVector();
	if(myVec.back() == 40){
		std::cout << "Test 10: Add Back (75): SUCCESS\n";
	}
	else{
		std::cout << "Test 10: Add Back (75): FAILED\nYour List: ";
		printList(myVec);
	}

//Test 11: removeBack
	int newBack = myVec[myVec.size()-2];
	int rbReturn = ls.removeBack();
	myVec = ls.toVector();
	if(myVec.back() == newBack){
		std::cout << "Test 11: Remove Back: SUCCESS\n";
	}
	else{
		std::cout << "Test 11: Remove Back: FAILED\nYour List: ";
		printList(myVec);
		std::cout << "Remove Back returned " << rbReturn << "\n";
		std::cout << "Current Size: " << ls.size() << "\n";
	}	
}

void Test::printList(std::vector<int> myVec){
	for(int i = 0; i < myVec.size(); i++){
		std::cout << myVec[i] << " ";
	}
	std::cout << "\n";
}

bool Test::testSize(std::vector<int> myVec, LinkedListOfInts ls){
	if(myVec.size() == ls.size()){
		return (true);
	}
	else{
		return(false);
	}
}

