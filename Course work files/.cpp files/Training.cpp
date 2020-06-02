
#include"Training.h"

	void Training:: engtest()
	{

		system("cls");
		int a, b, c, d, e;
		SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
		cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
		cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~EXAMINATOR~~~~~~~~~~~~~~~~~~~~|" << endl;
		cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
		SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
		cout << "1.My father ...... his new car for two weeks now. " << endl;
		cout << " 1.has had\n 2.has\n 3.is having\n 4.had" << endl;
		cin >> a;
		cout << "2.She is now taking a more positive ...... to her studies and should do well.  " << endl;
		cout << " 1.attitude\n 2.behaviour\n 3.manner\n 4.style" << endl;
		cin >> b;
		cout << "3.According to Richard's ...... the train leaves at 7 o'clock. " << endl;
		cout << " 1.opinion\n 2.advice\n 3.knowledge\n 4.information" << endl;
		cin >> c;
		cout << "4.You should not have a dog if you are not ...... to look after it.  " << endl;
		cout << " 1.prepared\n 2.adapted\n 3.arranged\n 4.decided" << endl;
		cin >> d;
		cout << "5.Marianne seemed to take ...... at my comments on her work " << endl;
		cout << " 1.annoyance\n 2.insult\n 3.offence\n 4.indigation" << endl;
		cin >> e;
		if (a == 1 && b == 1 && c == 4 && d == 1 && e == 3)
		{
			system("cls");
			fstream file;
			file.open("C:\\Users\\luda\\Desktop\\courseworkfiles\\students.txt", fstream::app);
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|~~~~~~~~~Awesome! Your English level is sufficient!~~~~~|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "Leave us your details below." << endl;
			vector<string>leave;
			string yname;
			string ysurname;
			string email;
			string all1;
			string sub;
			cout << "Course you are going to learn: " << endl;
			cin >> sub;
			cout << "Name: " << endl;
			cin >> yname;
			cout << "Surname: " << endl;
			cin >> ysurname;
			cout << "E-mail: " << endl;
			cin >> email;

			system("cls");
			all1 = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STUDENTS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nField: " + sub + "\nEmail:" + email + "\n" + "Name: " + yname + " " + ysurname + "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
			leave.push_back(all1);
			file << all1;
			cout << "0. Back.\n";

			file.close();
			system("notepad C:\\Users\\luda\\Desktop\\courseworkfiles\\students.txt");



		}
		else
		{
			system("cls");
			HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(hConsole, (WORD)((12 << 4) | 5));

			cout << "|#####################################################|" << endl;
			cout << "|           Your English level is not sufficient!     |" << endl;
			cout << "|             Your registration is impossible!        |" << endl;
			cout << "|#####################################################|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "0. Back.\n";


		}

	}
	void Training::train()
	{
		system("cls");
		int tap = -1;
		while (tap != 0)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~OUR SKILLS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "|~~~~~~~~~~~~~~~TAP 1~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~TAP 2~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~TAP 3~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 3) | 8));

			cout << "|_______________.NET________________|_______________JAVA________________|________________PHP_______________|" << endl;
			cout << "|    .NET is a powerful Microsoft   |     Java is one of the topis      | PHP is one of the most popular   |" << endl;
			cout << "|     platform for developing       |         three most popular        |    web development languages.    |" << endl;
			cout << "|    applications of any level      |     programming languages and     |  It has been used on Facebook,   |" << endl;
			cout << "|        of complexity.             |         used for developing       |     Wikipedia and many other     |" << endl;
			cout << "|     Its main advantages are       |           enterprise-level        |            websites.             |" << endl;
			cout << "|       that it is flexible,        |             applications.         |   PHP is simple for beginners    |" << endl;
			cout << "|  easy to learn, and widely used.  |                                   |  making it perfect for a start.  |" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

			cout << "|~~~~~~~~~~~~~~~TAP 4~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~TAP 5~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~TAP 6~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 3) | 8));

			cout << "|_______________DEVOPS______________|_______________JAVASCRIPT__________|_____________UX DESIGN____________|" << endl;
			cout << "|    DevOps is at the intersection  |    JavaScript is one of the most  |      UX Design is designing      |" << endl;
			cout << "|     of providing stable flow      |     popular and cross-platform    |     effective user experience    |" << endl;
			cout << "|      of product development,      |     programming languages that    |     interaction with websites,   |" << endl;
			cout << "|       management of dynamic       |      allows working with web      |             computers,           |" << endl;
			cout << "|        Cloud solutions and        |      interfaces, server side,     |      and mobile applications.    |" << endl;
			cout << "|      development acceleration.    |         and mobile clients.       |                                  |" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|-----------------------------------|-----------------------------------|----------------------------------|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));


			cout << " **************************************Select what do you want to learn************************************ " << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			cout << "0. Back." << endl;

			cin >> tap;
			system("cls");

			switch (tap)
			{
			case 1:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

				cout << "|_____________________________________.NET_______________________________|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));

				cout << "|                        .NET is a powerful Microsoft                    |" << endl;
				cout << "|                           platform for developing                      |" << endl;
				cout << "|                          applications of any level                     |" << endl;
				cout << "|                                of complexity.                          |" << endl;
				cout << "|                          Its main advantages are                       |" << endl;
				cout << "|                            that it is flexible,                        |" << endl;
				cout << "|                         easy to learn, and widely used.                |" << endl;
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
				cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
				cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

				int call = -1;
				while (call != 0)
				{
					cin >> call;
					system("cls");

					switch (call)
					{
					case 1:
					{
						cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
						cout << "Tap 1 to pass it" << endl;
						cout << "Tap 0 to cancel if you aren't ready" << endl;
						cin >> call;
						system("cls");
						switch (call)
						{
						case 1:
						{
							engtest();
							break;
						}
						break;
						}

					}
					break;
					}
				}


				break;
			}

			case 2:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

				cout << "|__________________________________JAVA__________________________________|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));

				cout << "|                        Java is one of the topis                        |" << endl;
				cout << "|                            three most popular                          |" << endl;
				cout << "|                        programming languages and                       |" << endl;
				cout << "|                           used for developing                          |" << endl;
				cout << "|                            enterprise-level                            |" << endl;
				cout << "|                              applications.                             |" << endl;
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
				cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
				cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));


				int call = -1;
				while (call != 0)
				{
					cin >> call;
					system("cls");

					switch (call)
					{
					case 1:
					{
						cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
						cout << "Tap 1 to pass it" << endl;
						cout << "Tap 0 to cancel if you aren't ready" << endl;
						cin >> call;
						system("cls");
						switch (call)
						{
						case 1:
						{
							engtest();
						}
						break;
						}

					}
					break;
					}
				}
				break;
			}
			case 3:
			{		system("cls");
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

			cout << "|__________________________________PHP___________________________________|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));
			cout << "|                        PHP is one of the most popular                  |" << endl;
			cout << "|                            web development languages.                  |" << endl;
			cout << "|                          It has been used on Facebook,                 |" << endl;
			cout << "|                            Wikipedia and many other                    |" << endl;
			cout << "|                          PHP is simple for beginners                   |" << endl;
			cout << "|                         making it perfect for a start.                 |" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
			cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
			cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));





			int call = -1;
			while (call != 0)
			{
				cin >> call;
				system("cls");

				switch (call)
				{
				case 1:
				{
					cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
					cout << "Tap 1 to pass it" << endl;
					cout << "Tap 0 to cancel if you aren't ready" << endl;
					cin >> call;
					system("cls");
					switch (call)
					{
					case 1:
					{
						engtest();
					}
					break;
					}

				}
				break;
				}
			}
			break;
			}
			case 4:
			{		system("cls");
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

			cout << "|__________________________________DEVOPS________________________________|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));
			cout << "|                        DevOps is at the intersection                   |" << endl;
			cout << "|                          of providing stable flow                      |" << endl;
			cout << "|                           of product development,                      |" << endl;
			cout << "|                            management of dynamic                       |" << endl;
			cout << "|                             Cloud solutions and                        |" << endl;
			cout << "|                           development acceleration.                    |" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
			cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
			cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
			cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));

			int call = -1;
			while (call != 0)
			{
				cin >> call;
				system("cls");

				switch (call)
				{
				case 1:
				{
					cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
					cout << "Tap 1 to pass it" << endl;
					cout << "Tap 0 to cancel if you aren't ready" << endl;
					cin >> call;
					system("cls");
					switch (call)
					{
					case 1:
					{
						engtest();
					}
					break;
					}

				}
				break;
				}
			}
			break;
			}
			case 5:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

				cout << "|________________________________JAVASCRIPT______________________________|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));
				cout << "|                        JavaScript is one of the most                   |" << endl;
				cout << "|                          popular and cross-platform                    |" << endl;
				cout << "|                           programming languages that                   |" << endl;
				cout << "|                             allows working with web                    |" << endl;
				cout << "|                           interfaces, server side,                     |" << endl;
				cout << "|                              and mobile clients                        |" << endl;
				cout << "|                           development acceleration.                    |" << endl;
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
				cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
				cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));


				int call = -1;
				while (call != 0)
				{
					cin >> call;
					system("cls");

					switch (call)
					{
					case 1:
					{
						cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
						cout << "Tap 1 to pass it" << endl;
						cout << "Tap 0 to cancel if you aren't ready" << endl;
						cin >> call;
						system("cls");
						switch (call)
						{
						case 1:
						{
							engtest();
						}
						break;
						}

					}
					break;
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));

				cout << "|__________________________________UX DESIGN_____________________________|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 9));
				cout << "|                          UX Design is designing                        |" << endl;
				cout << "|                         effective user experience                      |" << endl;
				cout << "|                         interaction with websites,                     |" << endl;
				cout << "|                                 computers,                             |" << endl;
				cout << "|                           and mobile applications.                     |" << endl;
				cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((1 << 4) | 7));
				cout << "|______START DATE___|____END DATE __|_____FREQUENCY________|__LOCATION___|" << endl;
				cout << "|______2020   MAY___|____2020 AUG___|__2-3 TIMES PER WEEK__|___UKRAINE___|" << endl;
				cout << "|              |REGISTRATION - 1|                       |BACK - 0|       |" << endl;
				SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));



				int call = -1;
				while (call != 0)
				{
					cin >> call;
					system("cls");

					switch (call)
					{
					case 1:
					{
						cout << "WE MUST CHECK THE LEVEL OF YOUR ENGISH" << endl;
						cout << "Tap 1 to pass it" << endl;
						cout << "Tap 0 to cancel if you aren't ready" << endl;
						cin >> call;
						system("cls");
						switch (call)
						{
						case 1:
						{
							engtest();
						}
						break;
						}

					}
					break;
					}
				}
				break;
			}

			}

		}
	}
