#include <fstream>
#include<iostream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <sstream>
#include <conio.h>
#include <list>
#include <iterator>
#include<iomanip>
using namespace std;
class Training
{
public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	void engtest();
	void train();
};