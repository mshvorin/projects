#include "MemoryGame.hpp"
#include <cstdlib> //srand, rand
#include <ctime>
#include <iomanip> //setw
#include <iostream> //std
#include <vector>
#include <string>

using namespace std;

int* randomize(int numSlots); //function to randomize layout
void swap(int* arr, int i, int j);
void displaySeparateLine(int numSlots);

//TODO: implement by students
MemoryGame::MemoryGame() //default constructor, 
    //set numPairs = 3, numSlots = 2 * numPairs + 2,
    //put 3 pairs of randomly generated ints in [0, 1000)
    //randomly in numSlots blocks. 
    //Note that 2 added after 2 * numPairs means number of 
    //two extra blocks without actual data.
{
    //srand(time(NULL)); //TODO: uncomment this line to see
        //different layouts of numbers in different runnings.
        //time(NULL) is the current running time.
        //use the current running time to grow random sequence
        //Since running time differs,
        //the random sequence looks different
        //at different running time.
    srand(0); //TODO: add this before submitting to gradescope,
        //or autograde script cannot handle random input.

    //TODO: your code here
    numPairs = 3; //do not write int numPairs = 3;
    numSlots = 8; //3 pairs residing in 8 spaces,
                    //there are two empty spaces
    //IMPORTANT:
    //generate three random ints in [0, 1000),
    //randomly set them in the layout of the spaces,
    //that is, set up values array.
    
    
    //int arr [8] = {0,5,4,3,6,1,2,7};
  
    values = new string[8];
    
    int data [3];
    for(int i = 0; i<3; i++) {
	data[i] = rand() % 1000;
    };
    int* arr = randomize(numSlots);
    for(int i = 0; i<numSlots; i++) {
    	if(i < 6) {
		values[arr[i]] = std::to_string(data[i/2]);
	} else {
		values[arr[i]] = "";
	}
   } 
    
}

//TODO: implement by students
MemoryGame::~MemoryGame()
{
    //When an object is no longer in need,
    //release dynamically allocated memory by 
    //data members of the current object.

}

//TODO: implement by students
//randomize is not a member function,
//so there is no MemoryGame:: before function name randomize.
//Return an array of randomly allocated 0, 1, .., size-1
//In constructors, randomly assign the data in dataVector 
//to array values
int* randomize(int size)
{
    //idea to randomize 0, 1, 2, 3, 4, 5,
    //generate a random int in [0, 6), say 3,
    //then move arr[3] to the end,
    //say, 0, 1, 2, 5, 4, 3
    //generate a random int in [0, 5), say 3 again,
    //then swap arr[3], which is 5 now, with arr[4], 
    //get 0, 1, 2, 4, 5, 3
    //generate a random int in [0, 4), say 2,
    //swap arr[2] with the current arr[3]
    //get 0, 1, 4, 2, 5, 3
    //continue to randomize arr[0..2].
    //afterwards, continue to randomize arr[0..1].
    int r = rand() % size;
    int* arr = new int[size];
    
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }
    
    swap(arr, r, size - 1);
    int a = size - 1;
    for(int i = size - 1; i > 0; i--) {
       	a = a - 1;
	 r = rand() % i;
        
    	//cout << "I: " << to_string(i) << " " << "Swapping " << to_string(r) << endl;;
        swap(arr, r, a );
    }
    return arr;

}

//TODO: implement by students
//int* arr means int array arr, which implies the address
//of the first element of array arr.
//swap arr[i] and arr[j] in array of ints arr.
void swap(int *arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//Display -----+ for numSlots times.
//Add an extra + when for the first block (when index i is 0).
//So suppose numSlots is 8, we get
//+-----+-----+-----+-----+-----+-----+-----+-----+
//followed by a new line.
void displaySeparateLine(int numSlots)
{
    for (int i = 0; i < numSlots; i++)
    {
        if (i == 0)
           cout << "+";
        cout << "-----+";
    }
    cout << endl;
}

//TODO: implement by students
//display the items in values array where bShown is true.
void MemoryGame::display(bool* bShown)
{
	cout << " ";
	for(int i = 0; i< numSlots; i++) {
		cout << setw(3) << i;
		cout << setw(3) << " ";
	}
	cout << endl;
	displaySeparateLine(numSlots);
	cout << "|";
	for(int i = 0; i<numSlots; i++) {
		if(bShown[i]) {
			cout << setw(5) << values[i];
		}
		else {
			cout << setw(5) << "";
		}
		cout << "|";
	}
	cout << endl;
	displaySeparateLine(numSlots);
}

//TODO: implement by students
//rules for a round
//(1) pick a number, flip it
//(2) pick a second number, if the number is the same as
//    previous pick, display the second number,
//    otherwise, unflip the previous pick.
//(3) Finish until every pair are chosen correctly.
void MemoryGame::play()
{   	bool* bShown = new bool[numSlots];
	for (int i = 0; i<numSlots; i++)
		bShown[i] = true;
	display(bShown);
	//for(int i = 0; i<numSlots; i++) {
	//	cout << values[i] << endl;
	//}
}
