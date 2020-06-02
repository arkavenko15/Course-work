
#include"Vacancies.h"


	void Vacancies:: vacshow()
	{

		int num = -1;
		while (num != 0)
		{
			system("cls");
			list<string> vaclist;
			ifstream fin("vacancy.txt", fstream::in);
			for (std::string line; std::getline(fin, line); )
			{
				vaclist.push_back(line);
			}
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~EMPLOYER~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			setw(3);
			copy(vaclist.begin(), vaclist.end(), ostream_iterator<string>(cout, " \n "));
			cout << "0. Back." << endl;
			cin >> num;
		}

	}
	void Vacancies:: vacdelete()
	{
		system("cls");
		string password = "admin";
		string enter;
		cout << "Enter password: " << endl;
		cin >> enter;
		if (enter == password)
		{

			int length1 = 10;
			std::string * vacancy = new std::string[256];
			char * buff = new char[500];
			std::ifstream fil("vacancy.txt");
			int i = 0;
			while (!fil.eof())
			{
				fil.getline(buff, 500);
				vacancy[i] = std::string(buff);
				std::cout << vacancy[i] << std::endl;
				i++;
			}
			int num;
			std::cout << "Delete one of our vacansies : " << std::endl;
			std::cin >> num;
			std::fstream file;
			std::string * newVacancy = new std::string[length1 - 1];
			for (int i = num - 1; i < length1 - 1; i++)
			{
				vacancy[i] = vacancy[i + 1];
			}
			file.open("vacancy.txt", std::fstream::in | std::fstream::out);
			for (int i = 0; i < length1 - 1; i++)
			{
				newVacancy[i] = vacancy[i];
				std::cout << newVacancy[i] << std::endl;
				file << newVacancy[i] << std::endl;
			}
			file.close();

		}
		else
		{
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 5));
			cout << "|#####################################################|" << endl;
			cout << "|                Wrong password! Try again!           |" << endl;
			cout << "|#####################################################|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			system("pause");


		}


	}

	void Vacancies:: addvacancy()
	{
		int num = -1;
		while (num != 0)
		{
			string password = "admin";
			string enter;
			cout << "Enter password: " << endl;
			cin >> enter;
			if (enter == password)
			{
				system("cls");
				fstream file;
				list<string> vaclist;
				ifstream fin("vacancy.txt", fstream::in);
				for (std::string line; std::getline(fin, line); )
				{
					vaclist.push_back(line);
				}
				copy(vaclist.begin(), vaclist.end(), ostream_iterator<string>(cout, "\n"));

				string newvac;
				cout << "Enter the name of vacancy you want to add: " << endl;
				cin >> newvac;
				vaclist.push_back(newvac);
				copy(vaclist.begin(), vaclist.end(), ostream_iterator<string>(cout, " \n"));
			std:ofstream fout("vacancy.txt");
				std::copy(vaclist.begin(), vaclist.end(), std::ostream_iterator<string>(fout, "\n"));
				system("pause");
				break;
			}
			else
			{
				HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 5));
				cout << "|#####################################################|" << endl;
				cout << "|                Wrong password! Try again!           |" << endl;
				cout << "|#####################################################|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				system("pause");
			}
		}
	}


