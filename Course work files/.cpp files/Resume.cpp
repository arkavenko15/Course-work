
#include"Resume.h"

	void Resume:: Template()
	{
		system("cls");
		fstream file;
		file.open("C:\\Users\\luda\\Desktop\\courseworkfiles\\application.txt", fstream::app);
		for (int i = 0; i < 7; i++)
		{
			if (i = 1)
			{
				cout << "Surname: ";
				SetConsoleCP(1251);
				cin >> sname;
				SetConsoleCP(866);
			}
			if (i = 2)
			{
				cout << "Name: ";
				SetConsoleCP(1251);
				cin >> name;
				SetConsoleCP(866);
			}
			if (i = 3)
			{
				std::cout << "Patronymic: ";
				SetConsoleCP(1251);
				cin >> patronymic;
				SetConsoleCP(866);
			}
			if (i = 4)
			{
				cout << "Job you want to get: ";
				SetConsoleCP(1251);
				cin >> vac;
				SetConsoleCP(866);
			}
			if (i = 5)
			{
				cout << "Age: ";
				SetConsoleCP(1251);
				cin >> age;
				SetConsoleCP(866);
			}
			if (i = 6)
			{
				cout << "Phone number: ";
				SetConsoleCP(1251);
				cin >> numb;
				SetConsoleCP(866);
			}
		}
		string all = "~~~~~~~~~~~~~~~~~~~~~~~~~RESUME~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSurname:" + sname + "\n" + "Name: " + name + "\n" + "Patronymic: " + patronymic + "\n" + "Age: " + age + "\n" + "Want to get the place of: " + vac + "\n" + "Phone number: " + numb + "\n" + "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
		rsm.push_back(all);
		file << all;
		file.close();
		system("notepad C:\\Users\\luda\\Desktop\\courseworkfiles\\application.txt");
		system("cls");
	}


