#include <iostream>
#include <fstream>
#include <vector>
#include <string>

// Define all the craziness
std::vector<std::string> fileVector;
std::fstream inputFile;
std::string line;
int lastNumber;
int currentNumber;

int ups = 0;


int main(){
	// Open the input file
	inputFile.open("1-1inp.txt");
	// Add each line to the fileVector, so that we can mess with it more
	while (getline(inputFile, line)) {
		fileVector.push_back(line);
	}
	// Close it to save memory
	inputFile.close()
	// Storing the first element, since otherwise the below loop breaks
	lastNumber = stoi(fileVector[0]);
	// Loop through the elements in teh fileVector, and store the number as needed
	for (int i=1;i<fileVector.size();i++) {
		currentNumber = stoi(fileVector[i]);
		// Compare the current number to the last, and increment if it is needed
		if (currentNumber > lastNumber){
			ups += 1;
			//std::cout << fileVector[i] << "\n";
		}
		// Little swap to make the numbers correct for the next iteration
		lastNumber = currentNumber;
	
}
	// Give the actual answer
	std::cout << ups << "\n";
	return 1;
}