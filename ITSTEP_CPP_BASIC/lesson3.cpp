/*.1 Користувач вводить число.Вивести таку кількість зірочок, але перед та після додати #.Наприклад:
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

//2. Користувач вводить число.Вивести всі парні числа від 0 до до введеного числа.
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

//3. Користувач вводить число.Вивести суму всіх елементів від 0 до цього числа*/
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