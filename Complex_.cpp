// Complex_.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Создать класс Complex (Комплексное число) реализовать перегруженные операторы
//проверка на равенство обьектов (опрерация ==)
// операция присваивания одного обьекта в другой (операция =)
// сравнение двух чисел (операция >)

#include <iostream>
using namespace std;
class Complex
{
private:
	int vesh_ch;
	int mnim_ch;

public:

	Complex(int pvesh_ch, int pmnim_ch) // переприсваивание
		:vesh_ch{ pvesh_ch }, mnim_ch{ pmnim_ch }{}
	//Complex() {}
	Complex() :Complex(0, 0) {} // Конструктор по умолчанию

	//Complex(const Complex& object) // Конструктор копирования
	//{
	//	cout << "\nСработал Конструктор копирования\n";
	//}

	// Перегрузка оператора равенство == 
	// для поля вещественное число vesh_ch
	friend bool operator ==(const Complex pvesh_ch1,
		const Complex pvesh_ch2)
	{
		cout << "Перегрузка оператора равенство ==" << "\t" << endl;
		return pvesh_ch1.mnim_ch == pvesh_ch2.mnim_ch;

	}
	// Перегрузка оператора больше >
	// для поля вещественное число vesh_ch
	friend bool operator >(const Complex pvesh_ch1,
		const Complex pvesh_ch2)
	{
		cout << "Перегрузка оператора больше >" << "\t" << endl;
		return pvesh_ch1.mnim_ch > pvesh_ch2.mnim_ch;

	}
	//// Перегруженное копирование обьекта для двух полей
	Complex operator=(const Complex& other)
	{
		this->mnim_ch = other.mnim_ch;
		this->vesh_ch = other.vesh_ch;
		cout << "Перегрузка оператора копирования = " << "\t" << this << endl;
		return  Complex();
	}
	// фу
	void display() const
	{
		cout << endl;
		cout << "(" << vesh_ch << " + " << mnim_ch << ")";
		cout << endl;
	}
	~Complex() {} // Деструктор
};


int main()
{
	system("chcp 1251");

	cout << "Hello World!\n";
	Complex one(11.11, 11);
	Complex two(22.2, 222);
	one.display();
	two.display();
	if (one == two)
	{
		cout << "Вещественная часть равна" << endl;
	}
	else cout << "Вещественная часть не равна" << endl;
	Complex tree;
	tree.display();
	tree = two;
	tree.display();
	Complex four(100, 550);
	four.display();
	four = one;
	four.display();

	////if (one > two) 
	////	{
	////		cout << "Цена 1 квартиры > второй" << endl;
	////	}
	////else cout << "Цена 1 квартиры !> второй" << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
