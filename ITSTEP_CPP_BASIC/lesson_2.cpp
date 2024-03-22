
//1. Користувач вводить номер місяця.Вивести на екран відповідний сезон

//#include <iostream>
//using namespace std;
//int main() {
//	int number;
//	cout << "Enter number of month" << endl;
//	cin >> number;
//	switch (number) {
//	case 1: cout << "Jan" << endl; break;
//	case 2: cout << "Feb" << endl; break;
//	case 3: cout << "Mar" << endl; break;
//	case 4: cout << "Apr" << endl; break;
//	case 5: cout << "May" << endl; break;
//	case 6: cout << "Jun" << endl; break;
//	case 7: cout << "Jul" << endl; break;
//	case 8: cout << "Aug" << endl; break;
//	case 9: cout << "Sep" << endl; break;
//	case 10: cout << "Oct" << endl; break;
//	case 11: cout << "Now" << endl; break;
//	case 12: cout << "Feb" << endl; break;
//	default: cout << "Invalid number" << endl; break;
//	}
//	return 0;
//}

		//2. Є 2 діапазонна чисел від 13 до 32 та від 52 до 70. Користувач вводить число.Програма виводить на екран — чи попадає
		//  його число в один із двох діапазонів чи не попадає в жоден
//#include <iostream>
//using namespace std;
//
//int main() {
//	cout << "Enter number" << endl;
//	int number;
//	cin >> number;
//	if (number > 13 && number < 32 || number>52 && number < 70) {
//		cout << "the number within a range" << endl;
//	}
//	else cout << "Number out of range" << endl;
//	return 0;
//}
		//3. користувач вводить температуру та вологість.Якщо температура більше 15 градусів то це — “Тепло”, 
		// якщо нижче — “Холодно”, якщо вологість більше 50 % -“Мокро”, якщо менше — “Сухо”.Вивести на екран наприклад 
		// “Сухо та тепло”
//#include <iostream>
//using namespace std;
//
//void main() {
//	cout << "Enter the temperature and moisture" << endl;
//	float temperature;
//	float moisture;
//	cin >> temperature >> moisture;
//	if (temperature >= 15) cout << "Worm and " << " ";
//	else cout << "Cold and " << " ";
//	if (moisture >= 50) cout << "Wet" << endl;
//	else cout << "Dry" << endl;
//}
		//4. Написати реалізацію рішення Квадратного рівняння виду ax ^ 2 + bx + c = 0
		//Користувач вводить a, b, c
#include <iostream>
using namespace std;

void main() {
	int a, b, c;
	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter b: " << endl;
	cin >> b;
	cout << "Enter c: " << endl;
	cin >> c;
	float discriminant = b * b - 4 * a * c;
	if (discriminant > 0) {
		float root1 = (-b + sqrt(discriminant)) / (2 * a);
		float root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << "Two answers: " << endl;
		cout << "x1 = " << root1 << endl;
		cout << "x2 = " << root2 << endl;
	}
	else if (discriminant == 0) {
		float root = -b / (2 * a);
		cout << "One answer: " << endl;
		cout << "x = " << root << endl;
	}
}


		//#include <iostream>
		//#include <math.h>
		//using namespace std;
		//
		//int main()
		//{
		//	int a = 12;
		//	int b = 25;
		//
		//	cout << a << " + " << b << " = " << a + b << "\n";
		//	cout << a << " - " << b << " = " << a - b << "\n";
		//	cout << a << " * " << b << " = " << a * b << "\n";
		//	cout << a << " / " << b << " = " << (float)a / b << "\n";
		//	cout << a << " % " << b << " = " << a % b << "\n";
		//	cout << "sqrt(" << a << ") = " << sqrt(a) << "\n";//квадратний корінь
		//	cout << "cbrt(" << a << ") = " << cbrt(a) << "\n";//кубічний корінь
		//	cout << a << " ^ " << b << " = " << pow(a, b) << "\n";//возведення в ступінь
		//	cout << "cbrt(" << a << ") = " << pow(a, (float)1 / 3) << "\n";//кубічний корінь через ступінь
		//	cout << "sin(" << a << ") = " << sin(a) << "\n";
		//}
		////////////////////////////////////////////////////////////////////////////
		//#include <iostream>
		//using namespace std;
		//
		//int main()
		//{
		//	/*
		//	__________|------|__________
		//			  10     25
		//	*/
		//
		//	int a = 10;
		//	int b = 25;
		//	int number;
		//	cout << "Enter number\n";
		//
		//	if (number < a)
		//	{
		//		cout << "number < a. Out of range\n";
		//	}
		//	else
		//	{
		//		if (number > b)
		//		{
		//			cout << "number > b/ Out of range\n";
		//		}
		//		else
		//		{
		//			cout << "Number in range\n";
		//		}
		//	}
		//
		//}
		//////////////////////////////////////////////////////////////////////////////////
		////#include <iostream>
		////using namespace std;
		////
		////int main()
		////{
		////	int age, height, weight;
		////	cout << "Enter age\n";
		////	cin >> age;
		////	if (age < 18 || age > 27)
		////	{
		////		cout << "Age out of age\n";
		////	}
		////	else
		//	{
		//		cout << "Enter height\n";
		//		cin >> height;
		//		if (height < 155)
		//		{
		//			cout << "Wrong height\n";
		//		}
		//		else
		//		{
		//			cout << "Enter weight\n";
		//			cin >> weight;
		//			if (weight < 60)
		//			{
		//				cout << "Wrong weight\n";
		//			}
		//			else
		//			{
		//				cout << "You in  the army now!\n";
		//			}
		//		}
		//	}
		//}
		//////////////////////////////////////////////////////////////////////////////////
		////#include <iostream>
		////
		//using namespace std;
		//
		//int main()
		//{
		//	int day;
		//	cout << "Enter day number\n";
		//	cin >> day;
		//
		//	if (day < 1 || day > 7)
		//		cout << "Wrong day number\n";
		//	else
		//	{
		//		if (day == 1)
		//			cout << "Monday\n";
		//		else if (day == 2)
		//			cout << "Thuesday\n";
		//		else if (day == 3)
		//			cout << "Wednesday\n";
		//		else if (day == 4)
		//			cout << "Thursday\n";
		//		else if (day == 5)
		//			cout << "Friday\n";
		//		else if (day == 6)
		//			cout << "Saturday\n";
		//		else
		//			cout << "Sunday\n";
		//	}
		//}
		////////////////////////////////////////////////////////////////////////////////
		//#include <iostream>
		//
		//using namespace std;
		//
		//int main()
		//{
		//	char answer;
		//	cout << "Enter answer y/n\n";
		//	cin >> answer;
		//
		//	switch (answer)
		//	{
		//	case 'y':case 'Y': cout << "Yes\n"; break;
		//	case 'n':case 'N': cout << "No\n"; break;
		//	default:cout << "Wrong choice\n"; break;
		//	}
		//}
		///////////////////////////////////////////////////////////////////////
		//#include <iostream>
		//
		//using namespace std;
		//
		//int main()
		//{
		//	int a = 10;
		//	int temp;
		//	switch (a)
		//	{
		//	case 1:
		//		cout << "One\n"; break;
		//	case 5:
		//		temp = 15;//Алярм! Небезпечно! Якщо не спрацює сей кейс, то змінна 
		//		//залишиться без значення і під час спроби її використати виклече помилку
		//		cout << "Five\n"; break;
		//	case 10:
		//		//int tmp = 45;//АЛЯРМ! Небезпечно! Змінна створюється в середині switch
		//		//і тому не існує за її межами
		//		cout << "Ten\n"; break;
		//	default:
		//		break;
		//	}
		//	//cout << "tmp = " << tmp << "\n";
		//	cout << "Temp = " << temp << "\n";
		//}
		////////////////////////////////////////////////////////////////////////////
		//#include <iostream>
		//
		//using namespace std;
		//
		//int main()
		//{
		//	int choice;
		//	int index;
		//	cout << "Enter choice\n1-First part\n2-Second part\n";
		//	cin >> choice;
		//	switch (choice)
		//	{
		//	case 1:
		//		system("cls");
		//		cout << "First part\n1-Part 1.1\n2-Part 1.2\n";
		//		cin >> index;
		//		switch (index)
		//		{
		//		case 1: cout << "Part 1.1\n"; break;
		//		case 2: cout << "Part 1.2\n"; break;
		//		default:cout << "Wrong part\n"; break;
		//		}
		//		break;
		//	case 2:
		//		system("cls");
		//		cout << "Second part\n1-Part 2.1\n2-Part 2.2\n";
		//		cin >> index;
		//		switch (index)
		//		{
		//		case 1: cout << "Part 2.1\n"; break;
		//		case 2: cout << "Part 2.2\n"; break;
		//		default:cout << "Wrong part\n"; break;
		//		}
		//		break;
		//	default:cout << "Wrong part\n";	break;
		//	}
		//}
		/////////////////////////////////////////////////////////////////////////////
		//#include <iostream>
		//
		//using namespace std;
		//
		//int main()
		//{
		//	int choice;
		//	do
		//	{
		//		cout << "Enter choice\n1-First point\n2-Second point\n3-Third point\n";
		//		cin >> choice;
		//		switch (choice)
		//		{
		//		case 1: cout << "First point\n"; break;
		//		case 2: cout << "Second point\n"; break;
		//		case 3: cout << "Third point\n"; break;
		//		default:cout << "Wrong choice\n"; break;
		//		}
		//	} while (choice);

//}
//////////////////////////////////////////////////////////////////////////////
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int choice;
//	bool job = 1;
//	while (job)
//	{
//		cout << "Enter choice\n1-First point\n2-Second point\n3-Third point\n";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1: cout << "First point\n"; break;
//		case 2: cout << "Second point\n"; break;
//		case 3: cout << "Third point\n"; break;
//		case 0: job = 0; break;
//		default:cout << "Wrong choice\n"; break;
//		}
//	}
//}
//////////////////////////////////////////////////////////////////////////////


