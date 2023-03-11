#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

//作业1：七桥问题
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

//作业2：顺序表
template <typename T, int maxSize>
class HW2_SequenceList {
public:
	HW2_SequenceList();
	~HW2_SequenceList();
private:
	T data[maxSize];
	int length;

public:
	void process();

private:
	void createList();
	bool isEmpty();
	int getLength();

	T getValue(int i);
	int locate(T x);

	bool insert(T x, int);
	bool erase(int i);

	void print();
};