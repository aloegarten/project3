/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * <#Names#>
 * Andrew Lee
 *
 * EECS 183: Project 3
 * Fall 2024
 *
 * 
 */

#include "utility.h"
#include <iostream>

//************************************************************************
// Implement the functions below this line.
//************************************************************************

string toUpperCase(string original) {
    
	original = toupper(original);
	
    return original;
}

string removeNonAlphas(string original) {
    string result;
    for (char c : original) {
        if (isalpha(c)) { 
            result += c;
        }
    }
    
	return result;
}


int charToInt(char original) {
    
	return static_cast<int>(original);
	
}

string removeDuplicate(string original) {
    
	
	
    return "";
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
