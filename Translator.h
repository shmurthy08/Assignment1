/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 1
 **/

//This header file sets up all the needed methods and libraies to make sure we translate english words/sentences to Tutnese


//include input/output library for cin/cout and others
#include <iostream>

//includes the standard C++ library 
using namespace std;

class Translator{

public:
    Translator(); //default constructor
    ~Translator(); //default destructor
    string translateEnglishWord(string word); //method to translate a word with a param that takes in a string representing a word; returns string
    string translateEnglishSentence(string sen); //method to translate a sentence with a param that takes in a string representing the sentence; returns string

};

