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
#include"Company.h"
#include"RegLogin.h"
#include"Vacancies.h"

using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	enum ConsoleColor {
		Black = 0,
		Blue = 1,
		Green = 2,
		Cyan = 3,
		Red = 4,
		Magenta = 5,
		Brown = 6,
		LightGray = 7,
		DarkGray = 8,
		LightBlue = 9,
		LightGreen = 10,
		LightCyan = 11,
		LightRed = 12,
		LightMagenta = 13,
		Yellow = 14,
		White = 15
	};
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
	srand(time(NULL));
	Company UZ;
	RegLogin DO;
	Vacancies XXX;

	string actions[] = { "Transformative consulting built","Automotive & Manufacturing","Travel & Hospitality","Media, Entertainment & Telecom","Business Information Services","Software & Hi-Tech","Insurance","Team of like-minded professionals","Healthcare" };
	string vacancy[] = { "HR manger",".NET DevOps Engineer",".NET Full Stack Developer","Azure Solution Architect","Front-End Developer","Full Stack Java Developer","IT Support Analyst","Java Backend Engineer" };
	int length = (sizeof(actions) / sizeof(string));
	int num = -1;
	while (num != 0)
	{
		system("cls");
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "                  IT-Company 'ProEasyCode Inc.'                     " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((11 << 7) | 1));
		cout << "1. Main page.\n2. Get project.\n3. Career.\n4. What we do.\n5. Help.\n6. For administrator.\n7. Log in as user.\n8. Log in as admin.\n0. Exit\n" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "                    Waiting for our collaboration !                 " << endl;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
		cout << "Select the iteam: ";
		cin >> num;
		if (num > 8 || num < 0)
		{
			system("cls");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 5));
			cout << "|********************************************************|" << endl;
			cout << "|~~~~~The page was deleted or something went wrong!~~~~~~|" << endl;
			cout << "|********************************************************|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			system("pause");
		}
		else
		{
			switch (num)
			{
			case 1:
			{
				UZ.info();
				break;
			}
			case 2:
			{
				UZ.WithStaticPrice();
				break;
			}
			case 3:
			{
				system("cls");
				int num = -1;
				while (num != 0)
				{
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "********************************************************\n" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((11 << 7) | 1));
					cout << "1. Vacancy.\n2. Training list.\n3. Leave resume.\n0. Back to the main page.\n" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "********************************************************" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
					cout << "Select the item: ";
					cin >> num;
					if (num > 3 || num < 0)
					{
						system("cls");
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 5));
						cout << "|********************************************************|" << endl;
						cout << "|~~~~~The page was deleted or something went wrong!~~~~~~|" << endl;
						cout << "|********************************************************|" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						break;
					}
					switch (num)
					{
					case 1:
					{
						XXX.vacshow();

						break;

					}
					case 2:
					{
						system("cls");
						UZ.LeaveDet();
						break;
					}
					case 3:
					{
						UZ.StayAPart();
						break;
					}
					case 0:
					{
						system("cls");
						break;
					}
					}

				}

				system("cls");
				break;
			}
			case 4:
			{
				UZ.actshow(actions, length);
				system("cls");
				break;
			}
			case 5:
			{
				UZ.question();
				break;
			}
			case 6:
			{
				int num = -1;
				while (num != 0)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "*********************************************************\n";
					SetConsoleTextAttribute(hConsole, (WORD)((11 << 7) | 1));
					cout << "1.Delete vacancy.\n2.Add new vacancy.\n3.Delete actions.\n0.Back." << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "*********************************************************\n";
					SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
					cin >> num;
					switch (num)
					{
					case 1:
					{
						XXX.vacdelete();
						system("pause");
						break;
					}
					case 2:
					{
						XXX.addvacancy();
						break;

					}
					case 3:
					{
						string *newactions;
						cout << length;
						newactions = UZ.Admin(actions, length);
						for (int i = 0; i < length - 1; i++)
						{
							actions[i] = newactions[i];
						}
						length--;
						break;
					}
					break;

					}
					break;
				}
				break;
			}
			case 7:
			{
				DO.login();
				break;
			}
			case 8:
			{
				DO.admin();


				break;
			}
			}
		}
	}
}