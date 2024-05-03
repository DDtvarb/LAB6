#include "Header.h"
void processNumbers(const vector<int>& numbers, ofstream& positiveFile, ofstream& negativeFile) {
	bool hasPositive = false;
	bool hasNegative = false;

	for (int number : numbers) {
		if (number > 0) {
			positiveFile << number << endl;
			hasPositive = true;
		}
		if (number < 0) {
			negativeFile << number << endl;
			hasNegative = true;
		}
	}

	if (!hasPositive) {
		cout << "Нет положительных чисел" << endl;
	}
	if (!hasNegative) {
		cout << "Нет отрицательных чисел" << endl;
	}
}

vector<int> readNumbersFromFile(const string& filename) {
	vector<int> numbers;
	ifstream inputFile(filename);

	int number;
	while (inputFile >> number) {
		numbers.push_back(number);
	}

	inputFile.close();
	return numbers;
}