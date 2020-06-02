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

class RegLogin

{
public:
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	struct Users
	{
		string login_new;
		string password_new;
	}
	users[100];
		bool check(string login, string password);
		bool check_1(string login_admin, string password_admin);
		void register_1();
		void admin();
		void read(string login_new, string password_new);
		void login();
};
