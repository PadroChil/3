#include <iostream>

/*
	Типы данных		
	bool		true/false		!0/0
	char		'8'
	short		32768
	int			2353540698504
	long		3274384738478
	long long	92348023480394802384

	float		214325.323232
	double		23324324.0324032424
	long double	34534543535.345344

	unsigned	 

	операторы
		Математическмие: + - / = % ++ --
		сравнительные: < > <= >= == != <=>
		Логические: &&(и)  ||(или)  !(не)
*/


int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	/*
	char op;

	double one, two;
	std::cout << "Введите первое число ";
	std::cin >> one;
	std::cout << "Введите оператор (+, -, *, /): ";
	std::cin >> op;
	std::cout << "Введите второе число ";
	std::cin >> two;

	if (op=='+')
	{
	std::cout << "\t\n1)Сумма:" << one + two;
	}
	else if(op=='-')
	{
		std::cout << "\t\n2)Разность: " << one - two;
	}
	else if(op=='*')
	{
	std::cout << "\t\n3)Произведение: " << one * two;
	}
	else if (op == '/' && two !=0)
	{
		std::cout << "\t\n4)Делить: " << one / two;
	}
	else
	{
		std::cout << "Error";
	}
	*/

	// работает с целыми часлами
	/*
	switch (a)
	{
	case 1:
		std::cout << "one\n";
		break;
	case 2:
		std::cout << "two\n";
		break;
	default:
		std::cerr << "err\n";
		break;
	}
	*/

	/*int number;
	int summa = 0;
	while (true)
	{
		std::cout << "Введите числа: ";
		std::cin >>number;
		if (number == 0)
		{
			break;
		}
		 summa += number;
	}
	std::cout << "Сумма введеных чисел: "<< summa;
	*/


	/*

		тип данных имя массива[размер массива];

	*/

	/* const int size = 4;

	int arr[size]{};
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];

	}
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	 std::cout << sum;
	*/

	/*std::cout << "\tКонвертер валюты";
	

	int chose;
	double dollar = 83.61, euro = 98.15, yuan = 11.71, farit = 0.25, yena = 0.56;
	int rub;
	double prochent = 0.05;
	double comissin =0;
	char num;

	while (true)
	{
		if (true)
		{
			std::cout << "\nВведите кол.во рублей для покуки валюты: ";
			std::cin >> rub;
			if (rub < 0)
			{
				break;
			}
			std::cout << "\nКомисия банка " << rub * prochent;
			rub -= comissin;
			std::cout << "\nВведите номер валюты\nдоллар - 1\nевро - 2\nюань - 3\nФарит - 4\nйена - 5\nвыход - 6\n";
			std::cin >> num;
		}
		if (num == '1')
		{
			std::cout << "\nСколько долларов удалось купить " << rub / dollar;
		}
		else if (num == '2')
		{
			std::cout << "\nСколько евро удалось купить " << rub / euro;
		}
		else if (num == '3')
		{
			std::cout << "\nСколько юаней удалось купить " << rub / yuan;
		}
		else if (num == '4')
		{
			std::cout << "\nСколько фаритов удалось купить " << rub / farit;
		}
		else if (num == '5')
		{
			std::cout << "\nСколько йен удалось купить " << rub / yena;
		}
		else if (num =='6')
		{
			break;
		}
		else
		{
			std::cout << "\nОшибка ввода";
		}
	}	*/

	
	/*int a;
	a = rand() % 10 + 1;
	std::cout << a;

	const int size = 5;
	int arr[size]{};

	int k = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 19 - 9;
	
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
		

	}
	for (int i = 0; i < size; i += 1)
	{
		if (arr[i] >= 0)
		{
			std::cout << arr[i] << " ";
		}                         
	}

	std::cout << "\n\n";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			std::cout << arr[i] << " ";
		}
	}

	std::cout << "\n\n";*/

	const int row = 3, col = 4;
	int arr[row][col]{ {3,1,2,3},{},{} };

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout<< arr[i][j]<< " ";
		}
		std::cout << "\n";
	}





	return 0;
}