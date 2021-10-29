// hometask_str.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//bool palindrom(char s[])
//{
//    int n = strlen(s);
//    char* buffer = new char[n + 1]{};
//    for (size_t i = 0; i < n; i++)
//    {
//        buffer[i] = s[i];
//    }
//    n = strlen(buffer);
//    bool k = true;
//    for (int i = 0; i < n / 2; i++)
//    {
//        if (buffer[i] != buffer[n - 1 - i])
//        {
//            delete[] buffer;
//            return false;
//            
//        }
//    }
//    delete[]buffer;
//    return true;
//}
//bool is_int_number(char str[])
//{
//	int n = strlen(str);
//	for (size_t i = 0; str[i]; i++)
//	{
//		if (!(str[i]>='0' && str[i]<='9'))
//		{
//			return false;
//		}
//	}
//	return true;
//}

int is_int_number(char str[])
{

	for (size_t i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return str[i];
		}
	}
	
}




int main()
{
	char str[4] = "100";
	cout << str << endl;
	/*cout << strlen(str)<<endl;
	cout << strlen(str) / 2<<endl;
    cout << typeid(str).name()<<endl;*/
	cout<<is_int_number(str);
	
	

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
