// Unless otherwise specified, everything is the same as 1-1

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<std::string> fileVector;
std::fstream inputFile;
std::string line;
int lastNumber;
int currentNumber;

int ups = 0;

int main(){
	inputFile.open("1-1inp.txt");
	
	while (getline(inputFile, line)) {
		fileVector.push_back(line);
	}
	// Taking sum of 3 for each one
	lastNumber = stoi(fileVector[0])+stoi(fileVector[1])+stoi(fileVector[2]);
	// off by 2 since we are taking larger chunks
	for (int i=1;i<fileVector.size()-2;i++) {
		// Taking sum of 3 again
		currentNumber = stoi(fileVector[i])+stoi(fileVector[i+1])+stoi(fileVector[i+2]);
		if (currentNumber > lastNumber){
			ups += 1;
			std::cout << fileVector[i] << "\n";
		}
		lastNumber = currentNumber;
	
}
	
	std::cout << ups << "\n";
	return 1;
}