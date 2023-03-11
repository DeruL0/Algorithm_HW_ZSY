#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <math.h>
#include <sstream>
#include "HWs.h"
#include "HW2.cpp"
using namespace std;

int main(int argc, const char* argv) {
	//作业1：哥尼斯堡七桥问题(判断欧拉回路)
	//HW1_SevenBridges hw1;
	//hw1.CheckMat();

	//作业2：顺序表
	const int maxSize = 100;
	HW2_SequenceList<int, maxSize> seqlist;
	seqlist.process();
}