#include <iostream> // Basic library
#include <cstdio> // Convert strings to char*'s
#include "install.hpp"

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
		return "I'm sorry: this command does not work";
	}

	std::string changeDirector(std::string directory){
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
		std::string direc = directory;
		return direc;
	}
};


// The background process (what stuff is going to do)
class backgroundProc {
	private:
		// litterally nothing?
	public:
		void getCWD() {
			// TODO: this is currently placeholder code
		}
		void instAll() {
			
		}
};
