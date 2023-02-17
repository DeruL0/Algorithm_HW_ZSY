#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

class HW1_SevenBridges {
public:
	vector<vector<int>> mat;

	HW1_SevenBridges();
	~HW1_SevenBridges();

public:
	void CheckMat();

private:
	void getMat();
	void EulerCircuit();
};