
#include"RegLogin.h"

	bool RegLogin:: check(string login, string password)

	{

		if (login == "admin" && password == "admin")
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool RegLogin::check_1(string login_admin, string password_admin)
	{
		if (login_admin == "admin" && password_admin == "admin")
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void RegLogin::register_1()
	{
		string login_new, password_new;
		fstream file;
		fstream file1;
		file.open("users.txt", fstream::app);
		file1.open("try.txt", fstream::app);

		cout << "Enter new user's email: " << endl;
		cin >> login_new;
		cout << "Add password: " << endl;
		cin >> password_new;
		file << login_new << "\nYour password to log in: " << password_new << endl;
		file1 << " " << login_new << " " << password_new << endl;
		file.close();
		file1.close();
		cout << "Awesome!The system will send the password to the user. " << endl;
		system("pause");
	}
	void RegLogin::admin()
	{
		bool flag_1 = false;

		string login_admin, password_admin;
		cout << "Login: " << endl;
		cin >> login_admin;
		cout << "Password: " << endl;
		cin >> password_admin;
		flag_1 = check_1(login_admin, password_admin);
		if (flag_1 == true)
		{
			cout << "You are logged in as administrator!" << endl;

			cout << "1.Add a new user. " << endl;
			cout << "2.Log out. " << endl;
			int ch;
			cin >> ch;
			switch (ch)
			{
			case 1:
			{
				register_1();
				break;
			}
			case 2:
			{
				break;
			}
			}
		}
		else if (flag_1 == false)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
			cout << "|#####################################################|" << endl;
			cout << "|                Wrong password! Try again!           |" << endl;
			cout << "|#####################################################|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			system("pause");
		}

	}
	void RegLogin:: read(string login_new, string password_new)
	{
		ifstream fin("try.txt");
		for (int i = 0; i < 100; i++)
		{
			fin >> users[1].login_new >> users[1].password_new;
		}
	}
	void RegLogin::login()
	{
		bool show = false;
		string login_new, password_new;
		cout << "Enter login: " << endl;
		cin >> login_new;
		cout << "Enter password: " << endl;
		cin >> password_new;
		read(login_new, password_new);
		for (int i = 0; i < 100; i++)
		{
			if (login_new == users[1].login_new && password_new == users[1].password_new)
			{
				show = true;
			}
		}
		if (show == true)
		{
			SetConsoleTextAttribute(hConsole, (WORD)((10 << 4) | 5));
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|~~Your are logged in succesfully!~~|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));
			system("pause");
		}
		else
		{
			SetConsoleTextAttribute(hConsole, (WORD)((10 << 5) | 7));
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			cout << "|~~~~~Wrong password! Try again!~~~~|" << endl;
			cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|" << endl;
			SetConsoleTextAttribute(hConsole, (WORD)((15 << 2) | 6));


			system("pause");
		}

	}

