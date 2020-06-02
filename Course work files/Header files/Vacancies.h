#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <sstream>
#include <conio.h>
#include <list>
#include <iterator>
#include<iomanip>
using namespace std;


class Vacancies
{
public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	void vacshow();
	void vacdelete();
	void addvacancy();

}; 
