/*.1 ���������� ������� �����.������� ���� ������� ������, ��� ����� �� ���� ������ #.���������:
#********#
*/
//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	cout << "Enter a number\n";
//	cin >> number;
//	cout << "#";
//	for (int i = 0; i < number; i++) {
//		cout << "*";
//	}
//	cout << "#" << endl;
//
//	return 0;
//}

//2. ���������� ������� �����.������� �� ���� ����� �� 0 �� �� ��������� �����.
//#include <iostream>
//using namespace std;
//
//int main() {
//	int number;
//	cout << "Enter number:" << endl;
//	cin >> number;
//	for (int i = 0; i<number ; i+=2) {
//		cout << i;
//	}
//	cout << endl;
//
//	return 0;
//}

//3. ���������� ������� �����.������� ���� ��� �������� �� 0 �� ����� �����*/
#include <iostream>
using namespace std;

int main() {

	int number;

	cout << "Enter number: " << endl;
	cin >> number;
	int sum = 0;
	for (int i = 0; i <= number; i++) {
		sum += i;
	}
	cout << "Sum of elements: " << sum << endl;
	return 0;
}