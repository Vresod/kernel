#include <iostream> // Basic library
#include <Windows.h> // TODO: see if this works on mac/linux


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
		 } else {
			 std::cout << "Much unknown, very strange" << std::endl;
		 }
		 return memAlloc;
	}
	// Just a test
	std::string changeDirectory(std::string directory){
		
	}
};