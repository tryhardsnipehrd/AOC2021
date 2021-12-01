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
	lastNumber = stoi(fileVector[0]);
	for (int i=1;i<fileVector.size();i++) {
		currentNumber = stoi(fileVector[i]);
		if (currentNumber > lastNumber){
			ups += 1;
			std::cout << fileVector[i] << "\n";
		}
		lastNumber = currentNumber;
	
}
	
	std::cout << ups << "\n";
	return 1;
}