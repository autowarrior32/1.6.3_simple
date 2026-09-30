#include <iostream>
#include <string>
#include <windows.h>


int funcFib(int count, int prev, int prevprev);



int inp1{ 0 };
int inp2{ 1 };



int funcFib(int count)
{
	if (count == 0)
	{
		return 0;
	}
	else if (count == 1) 
	{
		return(1);
	}
		
	return (funcFib (count-1) + funcFib(count - 2));

}




int main(int argc, char** argv)
{
	int num;

	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);


	std::cout << "Введите число: ";
	std::cin >> num;

	std::cout << std::endl;

	std::cout << "Числа Фибоначчи: ";

	for (int i = 0; i < num; i++) 
	{
		std::cout << funcFib(i) << " ";
	}




	return 0;
}