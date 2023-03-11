#include "HWs.h"
#include <iostream>
using namespace std;

//��ʼ��
template<typename T, int maxSize>
HW2_SequenceList<T,maxSize>::HW2_SequenceList(){
	length = 0;
}
template<typename T, int maxSize>
HW2_SequenceList<T, maxSize>::~HW2_SequenceList() {
	delete[] data;
	length = 0;
}

//�������
template<typename T, int maxSize>
void HW2_SequenceList<T, maxSize>::process() {
	length = 0;
	createList();

	cout << "1.�п� 2.��ȡ���� 3.��λ�������� 4.��ֵ������������(��һ������ֵͬ) 5.��ĳλ�ò���ֵ 6.ɾ��iλ�õ�ֵ 7.��ӡ�����" << endl;
	cout << "��0�˳�" << endl;

	while (true) {
		cout<< endl << "����������ִ�еĲ���(��������)��" << endl;
		
		int option;
		cin >> option;
		if (option == 0) {
			exit(0);
		}

		int index; T x;

		switch (option){
		case 1:
			if (isEmpty()) cout << "��Ϊ��" << endl;
			else		   cout << "��Ϊ��" << endl;
			break;
		
		case 2:
			cout << "��ĳ���Ϊ��" << getLength() << endl;
			break;
		
		case 3:
			cout << "������������ҵڼ�λ������(1��ʼ)��" << endl;
			cin >> index;
			cout <<"�����ҵ������ǣ�" << getValue(index) << endl;
			break;
		
		case 4:
			cout << "������������ҵ����ݣ�" << endl;
			cin >> x;
			index = locate(x);
			if (index == -1) cout << "δ�ҵ���Ҫ�ҵ�����" << endl;
			else             cout << "������ҵ������ڵ�" << locate(x) << "λ" << endl;
			break;
		
		case 5:
			cout << "�����������ڵڼ�λ��������(1��ʼ)��" << endl;
			cin >> index;
			cout << "�����������������ݣ�" << endl;
			cin >> x;
			if (insert(x, index)) cout << "����ɹ�" << endl;
			else				  cout << "����ʧ��" << endl;
			break;

		case 6:
			cout << "����������ɾ���ڼ�λ������(1��ʼ)��" << endl;
			cin >> index;
			if (erase(index))	  cout << "ɾ���ɹ�" << endl;
			else				  cout << "ɾ��ʧ��" << endl;
			break;

		case 7:
			print();

		default:
			break;
		}
	}
}

//����˳���
template<typename T, int maxSize>
void HW2_SequenceList<T, maxSize>::createList() {
	cout << "��������Ҫ�ĳ��ȣ�";
	cin >> length;
	cout << "������" << length << "��Ԫ�أ�" << endl;
	for (int i = 0; i < length; i++) {
		cin >> data[i];
	}
}

//�ж�˳����Ƿ�Ϊ��
template<typename T, int maxSize>
bool HW2_SequenceList<T, maxSize>::isEmpty() {
	return length == 0;
}

//��ȡ˳�����
template<typename T, int maxSize>
int HW2_SequenceList<T, maxSize>::getLength() {
	return length;
}



//��λ����˳���
template<typename T, int maxSize>
T HW2_SequenceList<T, maxSize>::getValue(int i) {
	if (i < 1) {
		cout << "������С������-1" << endl;
		return -1;
	}
	else if (i > length) {
		cout << "�������󣬷���-1" << endl;
		return -1;
	}
	else {
		return data[i - 1];
	}
}

//��ֵ����˳���
template<typename T, int maxSize>
int HW2_SequenceList<T, maxSize>::locate(T x) {
	for (int i = 0; i < length; i++) {
		if (data[i] == x) {
			return i + 1;
		}
	}
	return -1;
}



//��iλ�ò���ֵ
template<typename T, int maxSize>
bool HW2_SequenceList<T, maxSize>::insert(T x, int i) {
	if (length == maxSize) {
		cout << "˳����������޷�����" << endl;
		return false;
	}
	if (i < 1) {
		cout << "λ�ù�С���޷�����" << endl;
		return false;
	}
	else if (i > length + 1) {
		cout << "λ�ù����޷�����" << endl;
		return false;
	}

	for (int j = length; j >= i; j--) {
		data[j] = data[j - 1];
	}
	data[i - 1] = x;
	length++;

	return true;
}

//ɾ��˳���iλ�õ�ֵ
template<typename T, int maxSize>
bool HW2_SequenceList<T, maxSize>::erase(int i) {
	if (i < 1) {
		cout << "λ�ù�С���޷�ɾ��" << endl;
		return false;
	}
	else if (i > length) {
		cout << "λ�ù����޷�ɾ��" << endl;
		return false;
	}

	for (int j = i - 1; j < length - 1; j++) {
		data[j] = data[j + 1];
	}
	length--;

	return true;
}



//��ӡ���˳���
template<typename T, int maxSize>
void HW2_SequenceList<T, maxSize>::print() {
	if (length == 0) {
		cout << "˳���Ϊ��" << endl;
	}
	else {
		cout << "˳���" << endl;
		for (int i = 0; i < length; i++) {
			cout << data[i] << "��";
		}
		cout << endl;
	}

}