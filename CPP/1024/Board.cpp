#include "Board.hpp"
#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

    /*Board::Board() {
    max = 0;
    target = 32;
    numRows = 3;
    numCols = 3;
    panel = new int*[numRows];
    	for (int row = 0; row < numRows; row ++) {
    		panel[row] = new int[numCols];
    		}
    } //construct a 3 x 3 panel
    Board::Board(int m) {
    max = 0;
    target = 32;
    numRows = m;
    if ( m >= 1) {
    numCols = m;
    }
    else {
    numRows = 3;
    numCols = 3;
    }
    panel = new int*[numRows];
    	for (int row = 0; row < numRows; row ++) {
    		panel[row] = new int[numCols];
    }	
    } //construct a m x m panel
    Board::Board(int m, int n) {
    max = 0;
    target = 32;
     if ( m >= 1 && n>= 1) {
    numRows = m;
    numCols = n;
    }
    else {
    numRows = 3;
    numCols = 3;
    }
    panel = new int*[numRows];
    	for (int row = 0; row < numRows; row ++) 
    		panel[row] = new int[numCols];
    }//construct a m x n panel
    */
    Board::~Board() {
	delete[] panel;
	panel = nullptr;
    }
    void Board::print() const{
    if (numRows != 0 && numCols != 0){

        for (int i = 0; i < numRows; i++){
            cout << "+";
            
            for (int j = 0; j < numCols; j++){
                cout << "----+";
            }
            cout << "\n";

            for (int c = 0; c < numCols; c++){
                if (c == 0){
                    cout << "|";
                }
                if (panel[i][c] != 0){
                    cout << setw(4) << panel[i][c] << "|";
             
                }

                else {
                    cout << setw(5) << "|";
                }
            }
            cout << "\n";
            
        }

        cout << "+";
        for (int i = 0; i < numCols; i++){
            cout << "----+";
        }
    }
    cout << "\n";
}
    
    bool Board::noAdjacentSameValue() const {
    	for (int i = 0; i < numRows; i++) {
      		for (int j = 0; j < numCols - 1; j++) {
      			if (panel[i][j] == panel[i][j+1]) {
      				return false;
      			}
      			else {
      				continue;
      			}
      		}
      	}
      	for (int j = 0; j < numCols; j++) {
      		for (int i = 0; i < numRows - 1; i++) {
      			if (panel[i][j] == panel[i+1][j]) {
      				return false;
      			}
      			else {
      				continue;
      			}
      		}
      	}
      	return true;
    }
    
    void Board::selectRandomCell(int& row, int& col) {
    	int empties = 0;
    	int m = 0;
	     for (int i = 0; i < numRows; i++) {
	      		for (int j = 0; j < numCols; j++) {
	      			if ( panel[i][j] == 0 ) {
	      				empties++;
	      			}
	      		}
	      	}
	     if ( empties == 0 ) {
	     	if (noAdjacentSameValue() == true && max < target) {
	     	cout << "Game over. Try again." << endl;
		exit(0);
		}
	    }
	    int* numlocations = new int[empties];
	    for (int i = 0; i < numRows; i++) {
	      		for (int j = 0; j < numCols; j++) {
	      		numlocations[m] = i * numCols + j;
	      		m++;
	      	}
	    }
	    int randomcell = rand() % empties;
	    int randomval = numlocations[randomcell];
	    panel[randomcell / numCols + 1][randomcell % numRows] = 1;
	    print();
	    if (noAdjacentSameValue() == true && max < target) {
	    	cout << "Game Over." << endl;
	    	exit(0);
	    }
	    delete[] numlocations;
	    numlocations = nullptr;
}
