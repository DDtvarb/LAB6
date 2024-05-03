#include "Header.h"
int main() {
	setlocale(LC_ALL, "Ru");
	vector<int> numbers = readNumbersFromFile("input.txt");

	ofstream positiveFile("positive.txt");
	ofstream negativeFile("negative.txt");

	processNumbers(numbers, positiveFile, negativeFile);

	positiveFile.close();
	negativeFile.close();

	return 0;
}