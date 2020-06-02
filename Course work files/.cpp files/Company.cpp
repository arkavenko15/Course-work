
#include"Company.h"

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	void Company::info()
	{
		int num = -1;
		while (num != 0)
		{
			system("cls");

			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "********************************************************\n" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

			cout << "1. Common information.\n2. News.\n0. Back to the main page.\n" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

			cout << "********************************************************" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

			cout << "Choose the iteam: ";
			cin >> num;
			if (num > 3 || num < 0)
			{
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 3));
				cout << "|********************************************************|" << endl;
				cout << "|~~~~~The page was deleted or something went wrong!~~~~~~|" << endl;
				cout << "|********************************************************|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				system("pause");
				break;
			}
			switch (num)
			{
			case 1:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~ABOUT~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|*******************************************************|*" << endl;
				cout << "*|     Our company is a global product development,      |*" << endl;
				cout << "*|      digital platform engineering, and digital        |*" << endl;
				cout << "*|  product design agency involved in financial services,|*" << endl;
				cout << "*| travel and consumer, software and hi-tech, business   |*" << endl;
				cout << "*| information and media, life sciences and healthcare,  |*" << endl;
				cout << "*|            as well as other industries.               |*" << endl;
				cout << "*|*******************************************************|*" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

				system("pause");
				break;
			}
			case 2:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~OUR~~~NEWS~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
				cout << "*|******************************************************************|*" << endl;
				cout << "*|     In 2019, our company joined the Blockchain in                |*" << endl;
				cout << "*|                   Transport Alliance (BiTA).                     |*" << endl;
				cout << "*|           This year, the company launched Continuum,             |*" << endl;
				cout << "*| its service for business, experience and technology consulting.  |*" << endl;
				cout << "*|           The company also productized TelescopeAI®,             |*" << endl;
				cout << "*|          an artificial intelligence-based platform for           |*" << endl;
				cout << "*|             IT operations and workforce management,              |*" << endl;
				cout << "*|          which won a 2019 Big Innovation Award presented         |*" << endl;
				cout << "*|               by the Business Intelligence Group.                |*" << endl;
				cout << "*|******************************************************************|*" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				system("pause");
				break;
			}
			}
		}
		system("cls");
	}
	void Company::WithYourPrice(int price, string project1) {
		fstream file;
		file.open("C:\\Users\\luda\\Desktop\\courseworkfiles\\pull.txt", fstream::app);
		string text;
		for (int i = 0; i < 5; i++) {
			if (i = 1) {
				system("cls");
				cout << "Enter your surname: ";
				cin >> text;
				file << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
				file << "Ordering a project: \n\n";
				file << project1;
				file << "\nSurname:" + text + "\n";
			}
			if (i = 2)
			{
				cout << "Enter your name: ";
				cin >> text;
				file << "Name: " + text + "\n";
			}
			if (i = 3)
			{
				cout << "Enter how many days you give for implementation: ";
				cin >> text;
				file << "Your proposition: " + text + "\n";
			}
			if (i = 4)
			{
				cout << "Leave your email: ";
				cin >> text;
				file << "Email:" + text + "\n";
				file << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

			}
		}
		file.close();
		system("C:\\Users\\luda\\Desktop\\courseworkfiles\\pull.txt");
	}
	void Company::WithStaticPrice() {
		int num = -1;
		while (num != 0) {
			system("cls");
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
			cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~AGREEMENT~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
			cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "1. Get progect agreement \n(you own price if you need to clarify the details).\n2. Get project agreement\n(static price offered by company ).\n0. Back to the main page." << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "*|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|*" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "Select the item: ";
			cin >> num;
			if (num > 4 || num < 0)
			{
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 3));
				cout << "|********************************************************|" << endl;
				cout << "|~~~~~The page was deleted or something went wrong!~~~~~~|" << endl;
				cout << "|********************************************************|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			}
			switch (num)
			{
			case 1:
			{
				system("cls");
				fstream file;
				file.open("C:\\Users\\luda\\Desktop\\courseworkfiles\\pull.txt", fstream::app);
				string text;
				for (int i = 0; i < 5; i++)
				{
					if (i = 1) {
						system("cls");
						cout << "Enter your surname: ";
						cin >> text;
						file << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
						file << "Ordering a project: \n\n";
						file << "Surname:" + text + "\n";
					}
					if (i = 2)
					{
						cout << "Enter your name: ";
						cin >> text;
						file << "Name: " + text + "\n";
					}
					if (i = 3)
					{
						cout << "Enter how many days you give for implementation: ";
						cin >> text;
						file << "Your proposition: " + text + "\n";
					}
					if (i = 4)
					{
						cout << "Leave your email: ";
						cin >> text;
						file << "Email:" + text + "\n";
						file << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
					}
					break;

				}
				file.close();
				system("C:\\Users\\luda\\Desktop\\courseworkfiles\\pull.txt");
				break;
			}
			case 2:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				cout << "|~~~~~~~~~~~~~~ORDERING A PROJECT~~~~~~~~~~~~~~|" << endl;
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				cout << "1.Website\n";
				cout << "2.Application\n";
				cout << "3.Website + phone application\n";
				cout << "4.Establishment for application or website\n";
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "Select specific of your project: ";
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				int n;
				int price;
				int time1;
				while (true) {
					cin >> n;
					if (n >= 1 && n <= 4)
						break;
					else
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
						cout << "| We don't have more proposals for you! Sorry! |\n";
						cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						system("pause");
						break;
					}
				}
				system("cls");
				switch (n) {
				case 1:
				{

					price = 300;
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					cout << "|~~~~~~~~~~~~~~ORDERING A PROJECT~~~~~~~~~~~~~~|" << endl;
					cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
					cout << "Price per one day to make your project: " << price << " $ \n";
					cout << "Specify how many days will you give us(from 6 to 26)>>";

					cin >> time1;
					if (time1 < 6)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~We cannot do your project so quickly!~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else if (time1 > 26)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~~~We cannot realise so big project!~~~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else
					{
						system("cls");
						string project1;
						project1 = "Website";
						price = price * time1;
						cout << "Price:  " << price << endl;
						cout << "Are you ready to pay us? ";
						cout << "\n1 - Yes!\n";
						cout << "2 - I'm not sure!\n";
						int k;
						cin >> k;
						if (k == 1) {
							WithYourPrice(price, project1);
						}
						if (k == 2)
							break;
						break;
					}

				}


				case 2:
				{
					price = 400;
					cout << "Price per one day to make your project: " << price << " $ ";
					cout << "\n\n" << "Specify how many days will you give us(from 6 to 26)>>";
					cin >> time1;
					if (time1 < 6)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~We cannot do your project so quickly!~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else if (time1 > 26)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~~~We cannot realise so big project!~~~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else
					{
						system("cls");
						string project1;
						project1 = "Application";
						price = price * time1;
						cout << "Price:  " << price << endl;
						cout << "Are you ready to pay us? ";
						cout << "\n1 - Yes!\n";
						cout << "2 - I'm not sure!\n";
						int k;
						cin >> k;
						if (k == 1) {
							WithYourPrice(price, project1);
						}
						if (k == 2)
							break;
						break;
					}

				}
				case 3:
				{
					price = 500;
					cout << "Price per one day to make your project: " << price << " $ ";
					cout << "\n" << "Specify how many days will you give us(from 6 to 26)>>";
					cin >> time1;
					if (time1 < 6)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~We cannot do your project so quickly!~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else if (time1 > 26)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~~~We cannot realise so big project!~~~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else
					{
						system("cls");
						string project1;
						project1 = "Website + phone application";
						price = price * time1;
						cout << "Price:  " << price << endl;
						cout << "Are you ready to pay us? ";
						cout << "\n1 - Yes!\n";
						cout << "2 - I'm not sure!\n";
						int k;
						cin >> k;
						if (k == 1) {
							WithYourPrice(price, project1);
						}
						if (k == 2)
							break;
						break;
					}

				}
				case 4:
				{
					price = 100;
					cout << "Price per one day to make your project: " << price << " $ ";
					cout << "\n\n" << "Specify how many days will you give us(from 6 to 26)";
					cin >> time1;
					if (time1 < 6)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~We cannot do your project so quickly!~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else if (time1 > 26)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
						cout << "~~~~~~~~~~~~~~~~~~~SORRY~~~~~~~~~~~~~~~" << endl;
						cout << "~~~We cannot realise so big project!~~~" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						cout << "0. Back.\n";
						cin >> num;
						break;
					}
					else
					{
						system("cls");
						price = price * time1;
						string project1;
						project1 = "Establishment for website or phone application";
						cout << "Price:  " << price << endl;
						cout << "Are you ready to pay us? ";
						cout << "\n1 - Yes!\n";
						cout << "2 - I'm not sure!\n";
						int k;
						cin >> k;
						if (k == 1) {
							WithYourPrice(price, project1);
						}
						if (k == 2)
							break;
						break;
					}
				}
				}
				break;

			}
			}

			system("cls");
		}
	}
	void Company::actshow(string actions[], int length)
	{
		int num = -1;
		while (num != 0)
		{
			system("cls");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			cout << "************ PROEASYCODE COMPANY GUARANTEES YOU *************" << endl;
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((11 << 7) | 1));
			for (int i = 0; i < length; i++)
			{
				cout << i + 1 << ". " << actions[i] << endl;
			}
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "0.Back \n";
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

			cin >> num;
			break;
		}


	}
	void Company::StayAPart()
	{
		Resume XXX;
		XXX.Template();
	}
	void Company::LeaveDet()
	{

		Training XXX;
		XXX.train();

	}
	string * Company::Admin(string actions[], int length)
	{
		int num = -1;
		string password = "admin";
		string enter;
		while (num != 0)
		{
			system("cls");
			cout << "********************************************************\n" << endl;
			cout << "Enter password: " << endl;
			cin >> enter;
			if (enter != password)
			{
				cout << "********************************************************\n" << endl;
				cout << "~~~~~~~~~~~~~~~Incorect input! Try again~~~~~~~~~~~~~~~~~" << endl;
				cout << "********************************************************" << endl << endl;
				system("pause");
			}
			else
			{
				num = -1;
				while (num != 0)
				{
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "************ PROEASYCODE COMPANY GUARANTEES YOU *************" << endl;
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

					for (int i = 0; i < length; i++)
					{
						cout << i + 1 << "." << actions[i] << "\n";
					}
					SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
					cout << "*************************************************************" << endl;
					SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
					cout << "Delete one of our actions : " << endl;
					cin >> num;
					if (num > 10 || num < 1)
					{
						SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
						cout << "********************************************************" << endl;
						cout << "~~~~~~~~~~~~~~~Incorect input! Try again~~~~~~~~~~~~~~~~~" << endl;
						cout << "*********************************************************" << endl;
						SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
						break;
					}
					string * newActions = new string[length - 1];
					for (int i = num - 1; i < length - 1; i++)
					{
						actions[i] = actions[i + 1];
					}

					for (int i = 0; i < length - 1; i++)
					{
						newActions[i] = actions[i];
					}
					system("pause");
					system("cls");
					return newActions;
				}
			}

		}
	}
	void Company::question()
	{
		int num = -1;
		while (num != 0)
		{
			system("cls");
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|********************************************************|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~HELPER~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|********************************************************|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((11 << 7) | 1));
			cout << "1. Ask question.\n2. The answers on typical questions.\n0. Back to the main page." << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|********************************************************|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|********************************************************|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "Choose the iteam: ";
			cin >> num;
			if (num >= 3 || num < 0)
			{
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|********************************************************|" << endl;
				cout << "|~~~~~~~~~~~~~~~Incorect input! Try again~~~~~~~~~~~~~~~~|" << endl;
				cout << "|********************************************************|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
				system("pause");
				break;
			}
			switch (num)
			{
			case 1: {
				vector<string>ask;
				string text;
				char text1[150];

				fstream file;
				fstream file1;

				file.open("C:\\Users\\luda\\Desktop\\courseworkfiles\\questions.txt", fstream::app);
				file1.open("questions.txt", fstream::app);

				for (int i = 0; i < 3; i++)
				{
					if (i = 1)
					{
						cout << "Enter your e-mail: ";
						cin >> text;
					}
					if (i = 2)
					{
						cout << "What is your question? " << endl;
						getchar();
						cin.getline(text1, 150);
					}

				}
				string all = "~~~~~~~~~~~~~~~~~QUESTIONS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nEmail:\t" + text + "\n" + "Question: \n" + text1 + "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~n\n\n";
				ask.push_back(all);
				file << all;
				file1 << all;
				file.close();
				file1.close();
				system("notepad C:\\Users\\luda\\Desktop\\courseworkfiles\\questions.txt");
				system("cls");
				break;
			}
			case 2:
			{
				system("C:\\Users\\luda\\Desktop\\courseworkfiles\\questions.txt");
				break;
			}
			}
		}
		system("cls");
	}


