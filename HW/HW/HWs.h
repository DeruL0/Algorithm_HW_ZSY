#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include <sstream>
using namespace std;

//��ҵ1����������
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

//��ҵ2��˳���
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