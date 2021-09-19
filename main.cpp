/*
 * Shree Murthy
 * 2374658
 * shmurthy@chapman.edu
 * CPSC 350-03
 * Assignment 1 
 **/


//This file is the standard main file that will read in command line inputs and then use the FileProcessor methods to provide the final ouput of the program.

//include the iostream library for cin/cout outputs
#include <iostream>
//include the FileProcessor
#include "FileProcessor.h"

//import the standard c++ library 
using namespace std;

int main(int argc, char** argv){
    
    //Create a FileProcessor object that will live on the heap and not get randomly deleted
    FileProcessor *f = new FileProcessor();

    //if there are no command line inputs for the read and write files then output this error
    if(argc == 1){
        cout << "No input/output files provided. Program exited." << endl;
    }
    //if there is only one command line input then state this error 
    if(argc == 2){
        cout << "Only one input provided please provide two inputs representing a read file and write file.";
    }
    //If there are three or more command line inputs then read the first two to fill in the input and output parameters for processFile
    if(argc >= 3){
        f->processFile(argv[1], argv[2]);
    }
    //delete all dynamically allocated memory
    delete f;
}
