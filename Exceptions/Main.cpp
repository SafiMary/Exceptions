#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;


double devide(double num1, double num2) {
	if (num2 == 0)
		//throw "���������� ������� �� ����";
		//throw exception("���������� ������� �� ����");
		throw invalid_argument("������ �� ���� ������");
	return num1 / num2;
}
//���������� ������� ���������� ���������� �� begin �� end
template <typename T>
void fill_arr(T arr[] , const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
//����� ������� �� �����( � ������������)
template <typename T>
void show_arr(T arr[], const int length) {
	if (length <= 0)
		throw invalid_argument("���������� ������������� ����� �������");
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//������������ �������� (if... else)
	/*cout << "������� ������ ���������: ";
	cin >> n;
	cout << "������� ����� ���������: ";
	cin >> m;
	if (n < m)
		cout << "��� �����\n";
	else
		cout << "������ �����\n";*/
		//��������� ����������
		/*try {
		cout << "������� ������ ���������: ";
		cin >> n;
		cout << "������� ����� ���������: ";
		cin >> m;
		if (n > m)
			throw 1;
		if (n == m)
			throw "������� ��������� �����.";
		cout << "��� �������!\n";
		}

		catch (const int& e) {
			if (e == 1)
				cout << "������ ��������� ������ ����� ���������.\n";
		}
		catch (const char*& e) {
			cout << "������:" << e << "\n";
		}*/
		//��������� ������� �� ����
		/*try {
			cout << "������� ��� �����: \n";
		cin >> n >> m;
		cout << n << " / " << m << " = " <<
			devide(n, m) << '\n';
		}
		catch (const char* e) {
			cout << "������: " << e << '\n';
		}
		catch (const exception& ex) { //����� ������ ���������� ������ ����
			cout << "������: " << ex.what() << '\n';//���������� ���������� ����������
		}*/
	//���������� ��� ������ � �������
		/*string path = "file.txt";

	ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);//�������� ����������
	try {
	out.open(path);
	cout << "���� ������ ��� ������.\n";
	out.close();
	}
	catch (const ios::failure& ex) {//�������� � ������������ � ������� ��� ������
		cout << "������ �������� �����: " << ex.what() << '\n';
		cout << "��� ������: " << ex.code().value() << '\n';//ex.code ��������  � ���������� � �����
	}*/
	//������ 1. ����� ������� �� �����

	cout << "������ 1.\n ������: \n";
	const int size = 10;
	int arr[size];
	try {
	fill_arr(arr, size, 1, 11);
	show_arr(arr, -5);
	}
	catch (const exception& ex) {
		cout << "������: " << ex.what() << endl;
	}
	

	


	return 0;
}
