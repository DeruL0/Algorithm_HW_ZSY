#include "HWs.h"

HW1_SevenBridges::HW1_SevenBridges() {
}
HW1_SevenBridges::~HW1_SevenBridges() {
}

void HW1_SevenBridges::CheckMat() {
	getMat();
	EulerCircuit();
}

void HW1_SevenBridges::getMat() {
	cout << "�����������·��С" << endl;
	
	int m, n;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	cout << "�����������·" << endl;

	for (int i = 0; i < m; i++){
		vector<int> temp;
		int tempNum;
		for (int j = 0; j < n; j++){
			cin >> tempNum;
			temp.push_back(tempNum);
		}
		mat.push_back(temp);
	}
}

//ŷ����·����һ�ʻ��ķ��·��
void HW1_SevenBridges::EulerCircuit() {
	//��¼��������ͨ���Ķ������
	int cnt = 0;

	//������������ͨ���Ķ������
	for (int i = 0; i < mat.size(); i++) {
		int degree = 0;
		for (int j = 0; j < mat[0].size(); j++) {
			degree += mat[i][j];
		}
		if (degree % 2 != 0) cnt++;
	}

	//�ж�ŷ����·������
	//	���ͨ�����ŵĵط������������򲻴���ŷ����·;
	//	���û��һ���ط�ͨ�����ţ������۴���������������ҵ�ŷ����·
	if (cnt <= 2) cout << "��ŷ����·" << endl;
	else		  cout << "��ŷ����·����Ϊ��" << cnt << "���������ȵĶ���" << endl;
	
}