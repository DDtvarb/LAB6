#pragma once
#ifndef INCLUDE_H 
#define INCLUDE_H
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


void processNumbers(const vector<int>& numbers, ofstream& positiveFile, ofstream& negativeFile);
vector<int> readNumbersFromFile(const string& filename);

#endif