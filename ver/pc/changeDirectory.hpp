#pragma once

#include <iostream> // Basic library
#include <cstdio> // Convert strings to char*'s
#include <Windows.h> // TODO: see if this works on mac/linu

// Define file system first so that we can re-declare it
// in the future (don't waste time)
class fileSystem {
// Access modifiers
// private (things that are only available to this class)
private:
	int buffer = 256; // bytes


// public (things everything can access)
public:
	// Return a pointer
	int* allocateMem(){
		 int bytesChangeDir = 256;
		 int* memAlloc = &bytesChangeDir;
		 if (memAlloc) {
			 return memAlloc; // Return a pointer
			 memAlloc = NULL; // No memory leaks!!
		 } else {
			 std::cout << "Much unknown, very strange" << std::endl;
		 }
		 return memAlloc;
		 memAlloc = NULL; // No memory leaks :)

	}
	// Just a test
	std::string changeDirectory(std::string directory){
		std::string* dir;
		dir = &directory;
		if (dir){
			std::string currentDir;
			char directoryPrefix = '/';
			char directorySuffix = '/';
			directory = directoryPrefix + currentDir + directorySuffix;
		}
		dir = NULL; // I don't want to leak memory.
		// if I do, that's not my problem
	}
};