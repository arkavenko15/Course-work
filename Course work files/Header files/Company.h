#include<iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <ctime>
#include <sstream>
#include <conio.h>
#include <list>
#include <iterator>
#include<iomanip>
#include"Training.h"
#include "Resume.h"
using namespace std;

class Company
{
public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	void info();
	void WithYourPrice(int price, string project1);
	void WithStaticPrice();
	void actshow(string actions[], int length);
	void StayAPart();
	void LeaveDet();
	string * Admin(string actions[], int length);
	void question();

	
};