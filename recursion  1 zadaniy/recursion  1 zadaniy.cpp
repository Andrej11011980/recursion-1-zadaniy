//1. От 1 до n.
//Дано натуральное число n.Выведите все числа от 1 до n.
//Ввод: 5
//Вывод : 1 2 3 4 5
#include <iostream>
using namespace std;
void funk_hisla(int n) {
	if (n) {
		funk_hisla(n - 1);
		cout << n << endl;
	}
}

int main()
{
	int n = 5;
	funk_hisla(5);
	cin >> n;
}

