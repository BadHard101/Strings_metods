#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	cout << s1 << endl;

	string s2("Что?Где?Когда?");
	int rez = s2.compare(4, 4, "Где?"); //(индекс; длина; сама сторка)
	cout << rez << endl; // 0
	// 0 - если условие совпало
	// 1 - хз как работает
	// -1 - тоже хз (несовпадают как-то)

	//удалить кусок
	string s3 = "AAADDDDDCCCCCC";
	s3.erase(3, 5);
	cout << s3 << "\n";	//AAACCCCCC

	//вставить кусок с индека
	string sA = "fff hhh jjjjjkkk, 1234";
	sA.insert(5, "dddddd");
	cout << sA << endl;

	//найти индекс
	string s5 = "Что?Где?Когда?Когда?Что?";
	int i = s5.find("Когда?");
	cout << i << "\n";			// 8
	i = s5.find("?", 8); //(то, что хочешь найти; с какого индекса ищем)
	cout << i << "\n";			// 13

	//найти индекс первого любого символа из одной строки в другой
	string S6 = "ABCDEBBCDFG";
	int i1 = S6.find_first_of("DFG", 1);
	cout << i1 << "\n";
}