/*OOP Lab Project : Virtual City

Welcome to VIRTUAL CITY!
A city full of mysteries and surprises!
* Travel Through Time                     * Change Dresses
* Sleep                                   * Wear Shades
* Endless Menus                           * Play Games
* Amuse Yourself with Rides               * Access Your Bank Account
* Rent a Room                             * Buy Arms & Weapons
* Large Collection of Vehicles            * Pay Taxes

So, what are you waiting for?
> Play Now!*/

#include<iostream>
#include<fstream>
#include<Windows.h>
using namespace std;

int my_day = 11;
int my_month = 1;
int my_year = 2022;

string my_first_name;
string my_last_name;

int my_health = 10;
int my_mood = 10;
int my_age = 30;
double current_money = 20000;
char my_gun = ' ';
char my_car = ' ';

class Properties
{
public:

	void getdata(string a, string b)
	{
		my_first_name = a;
		my_last_name = b;
	}

	void screen();

	void tell_me_my_car()
	{
		switch (my_car)
		{
		case '0':
		{
			cout << "BMW K1200";
			break;
		}

		case '1':
		{
			cout << "KAWASAKI NINJA H2R";
			break;
		}

		case '2':
		{
			cout << "SUZUKI HAYABUSA";
			break;
		}

		case '3':
		{
			cout << "DODGE TOMAHAWK";
			break;
		}

		case '4':
		{
			cout << "HONDA FIREBLADE SP";
			break;
		}

		case '5':
		{
			cout << "Ford Transit Custom";
			break;
		}

		case '6':
		{
			cout << "Renault Trafic";
			break;
		}

		case '7':
		{
			cout << "Toyota Proace";
			break;
		}

		case '8':
		{
			cout << "Nissan NV200";
			break;
		}

		case '9':
		{
			cout << "Vauxhall Vivaro";
			break;
		}

		case 'A':
		{
			cout << "Submarine";
			break;
		}

		case 'B':
		{
			cout << "Hot Air Balloon";
			break;
		}

		case 'C':
		{
			cout << "Yacht";
			break;
		}

		case 'D':
		{
			cout << "Dinghy";
			break;
		}

		case 'E':
		{
			cout << "Mazda MX-5";
			break;
		}

		case 'F':
		{
			cout << "Porsche 911";
			break;
		}

		case 'G':
		{
			cout << "Alpine A110";
			break;
		}

		case 'H':
		{
			cout << "Toyota GR Supra";
			break;
		}

		case 'I':
		{
			cout << "Audi TT";
			break;
		}

		case 'a':
		{
			cout << "Audi E-tron Quattro";
			break;
		}

		case 'b':
		{
			cout << "Mercedes-Benz CLS";
			break;
		}

		case 'c':
		{
			cout << "BMW X7";
			break;
		}

		case 'd':
		{
			cout << "Bugatti Divo";
			break;
		}

		case 'e':
		{
			cout << "Lamborghini Veneno";
			break;
		}

		case 'f':
		{
			cout << "HONDA ACTIVA 6G";
			break;
		}

		case 'g':
		{
			cout << "SUZUKI ACCESS 125";
			break;
		}

		case 'h':
		{
			cout << "TVS NTORQ 125";
			break;
		}

		case 'i':
		{
			cout << "ATHER 450X";
			break;
		}

		case 'j':
		{
			cout << "YAMAHA FASCINO 125";
			break;
		}

		case 'k':
		{
			cout << "AutoTram Extra Grand";
			break;
		}

		case 'l':
		{
			cout << "Volvo 9800";
			break;
		}

		case 'm':
		{
			cout << "Newmar King Aive";
			break;
		}

		case 'n':
		{
			cout << "Prevost H3-45 VIP";
			break;
		}

		case 'o':
		{
			cout << "Monaco Dynasty 45P";
			break;
		}

		case 'p':
		{
			cout << "Nissan Frontier";
			break;
		}

		case 'q':
		{
			cout << "Toyota Tundra";
			break;
		}

		case 'r':
		{
			cout << "Ford F-150";
			break;
		}

		case 's':
		{
			cout << "GMC Sierra 1500";
			break;
		}

		case 't':
		{
			cout << "Ram 1500";
			break;
		}

		case 'u':
		{
			cout << "Fendt 820";
			break;
		}

		case 'v':
		{
			cout << "Valtra 6550 HiTech";
			break;
		}

		case 'w':
		{
			cout << "John Deeve 7820";
			break;
		}

		case 'x':
		{
			cout << "New Holland TS135A";
			break;
		}

		case 'y':
		{
			cout << "MeriCrusher MT-700";
			break;
		}

		case 'z':
		{
			cout << "Helicopter";
			break;
		}

		//Smuggled Cars

		case '[':
		{
			cout << "Lexus LX570";
			break;
		}

		case ']':
		{
			cout << "Toyota Fortuner";
			break;
		}

		case '{':
		{
			cout << "Land Cruiser TXL";
			break;
		}

		case '}':
		{
			cout << "Hilux Vigo";
			break;
		}

		case '|':
		{
			cout << "Mercedes AMG GTR";
			break;
		}

		default:
		{
			cout << "N/A";
			break;
		}
		}
	}

	void tell_me_my_gun()
	{
		switch (my_gun)
		{
		case '1':
		{
			cout << "M16";
			break;
		}

		case '2':
		{
			cout << "AK-103";
			break;
		}

		case '3':
		{
			cout << "Heckler & Koch";
			break;
		}

		case '4':
		{
			cout << "Styler AUG";
			break;
		}

		case '5':
		{
			cout << "FN SCAR";
			break;
		}

		case '6':
		{
			cout << "Uzi";
			break;
		}

		case '7':
		{
			cout << "PPSH-41";
			break;
		}

		case '8':
		{
			cout << "SIG MPX";
			break;
		}

		case '9':
		{
			cout << "FN P90";
			break;
		}

		case 'A':
		{
			cout << "KRISS Vector";
			break;
		}

		case 'B':
		{
			cout << "MK-II";
			break;
		}

		case 'C':
		{
			cout << "M57";
			break;
		}

		case 'D':
		{
			cout << "M33";
			break;
		}

		case 'E':
		{
			cout << "MT-EP";
			break;
		}

		case 'F':
		{
			cout << "M61";
			break;
		}

		case 'G':
		{
			cout << "Glock 17";
			break;
		}

		case 'H':
		{
			cout << "SIG Sauger P320";
			break;
		}

		case 'I':
		{
			cout << "Beretta 92";
			break;
		}

		case 'J':
		{
			cout << "CZ-75";
			break;
		}

		case 'K':
		{
			cout << "FN Five Seven";
			break;
		}

		case 'L':
		{
			cout << "Spear";
			break;
		}

		case 'M':
		{
			cout << "Boomerang";
			break;
		}

		case 'N':
		{
			cout << "Chain Knife";
			break;
		}

		case 'O':
		{
			cout << "Stick";
			break;
		}

		case 'P':
		{
			cout << "Sickle";
			break;
		}

		case 'Q':
		{
			cout << "Barrett M82";
			break;
		}

		case 'R':
		{
			cout << "SAKO TRG 42";
			break;
		}

		case 'S':
		{
			cout << "Blaser R93 Tactical";
			break;
		}

		case 'T':
		{
			cout << "SIG SSG 3000";
			break;
		}

		case 'U':
		{
			cout << "Mc-Millan TAC-50";
			break;
		}

		case 'V':
		{
			cout << "Swallow Tail Knives";
			break;
		}

		case 'W':
		{
			cout << "Throwing Axes";
			break;
		}

		case 'X':
		{
			cout << "Thorns & Needles";
			break;
		}

		case 'Y':
		{
			cout << "Rotten Eggs";
			break;
		}

		case 'Z':
		{
			cout << "Molotovs";
			break;
		}

		case 'a':
		{
			cout << "Mossberg Marrick 88";
			break;
		}

		case 'b':
		{
			cout << "Remington 870 Express";
			break;
		}

		case 'c':
		{
			cout << "Stoeger M3000";
			break;
		}

		case 'd':
		{
			cout << "Weatherby SA-08";
			break;
		}

		case 'e':
		{
			cout << "CZ Drake";
			break;
		}

		case 'f':
		{
			cout << "Mathews VXR28";
			break;
		}

		case 'g':
		{
			cout << "Bowtech Revolt";
			break;
		}

		case 'h':
		{
			cout << "PSE EVO NTN Nockon";
			break;
		}

		case 'i':
		{
			cout << "Prime Black 9";
			break;
		}

		case 'j':
		{
			cout << "Hoyt-Carbon RX-7";
			break;
		}

		case 'k':
		{
			cout << "M2 Browning";
			break;
		}

		case 'l':
		{
			cout << "M60 GPMG";
			break;
		}

		case 'm':
		{
			cout << "M24E6";
			break;
		}

		case 'n':
		{
			cout << "XM214 Microgun";
			break;
		}

		case 'o':
		{
			cout << "Ultimax 100";
			break;
		}

		case 'p':
		{
			cout << "Nerve Gas";
			break;
		}

		case 'q':
		{
			cout << "Mustard Gas";
			break;
		}

		case 'r':
		{
			cout << "Tear Gas";
			break;
		}

		case 's':
		{
			cout << "Pepper Spray";
			break;
		}

		case 't':
		{
			cout << "Laughing Gas";
			break;
		}

		case 'u':
		{
			cout << "Colt 1860 Army";
			break;
		}

		case 'v':
		{
			cout << "Colt Python";
			break;
		}

		case 'w':
		{
			cout << "Ruger Blackhawk";
			break;
		}

		case 'x':
		{
			cout << "Ruger Super Redhawk";
			break;
		}

		case 'y':
		{
			cout << "RUGER LCR";
			break;
		}

		case 'z':
		{
			cout << "Flare Gun";
			break;
		}

		case '@':
		{
			cout << "Musket";
			break;
		}

		case '`':
		{
			cout << "Grenade Launcher";
			break;
		}

		case '~':
		{
			cout << "Sling";
			break;
		}

		case '#':
		{
			cout << "Slingshot";
			break;
		}

		case '$':
		{
			cout << "Seven Branched Sword";
			break;
		}

		case '%':
		{
			cout << "Wallace Sword";
			break;
		}

		case '^':
		{
			cout << "Tizona Sword";
			break;
		}

		case '&':
		{
			cout << "Napoleon's Sword";
			break;
		}

		case '*':
		{
			cout << "Sword of Mercy";
			break;
		}

		case '(':
		{
			cout << "Acid";
			break;
		}

		case ')':
		{
			cout << "Perfume";
			break;
		}

		case '-':
		{
			cout << "Toxic Candies";
			break;
		}

		case '+':
		{
			cout << "Chloroform";
			break;
		}

		case '_':
		{
			cout << "Bisphenol";
			break;
		}

		//Illegal Weapons

		case '[':
		{
			cout << "Flamethrower";
			break;
		}

		case ']':
		{
			cout << "RPG-7";
			break;
		}

		case '{':
		{
			cout << "Striker 12";
			break;
		}

		case '}':
		{
			cout << "Krinov Pistol";
			break;
		}

		case '|':
		{
			cout << "Crossbow";
			break;
		}

		default:
		{
			cout << "N/A";
			break;
		}
		}
	}
};

void message_print(string message)
{
	for (int i = 0; i < message.length(); i++)
	{
		Sleep(70);
		cout << message[i];
	}
}

void Properties::screen()
{
	system("cls");
	cout << endl;
	cout << "    ================================================================================================================== \n";
	cout << "     * NAME : " << my_first_name << " " << my_last_name << "\t   " << "* HEALTH : " << my_health << "/10" << "\t\t" << "* DATE  : " << my_day << "." << my_month << "." << my_year << "\t    " << "* WEAPON  : ";
	tell_me_my_gun();
	cout << endl;
	cout << "     * AGE  : " << my_age << "\t\t   " << "* MOOD   : " << my_mood << "/10" << "\t\t" << "* MONEY : $" << current_money << "\t    " << "* VEHICLE : ";
	tell_me_my_car();

	cout << "\n    ================================================================================================================== \n";
}

Properties obj;

class Start : public Properties
{
public:

	void city_screen();

	void welcome_message(string username)
	{
		system("cls");
		cout << "\n\n\t   * WELCOME MESSGAE\n    =========================================================== " << endl << endl;

		cout << "    ";
		Sleep(70);

		message_print("Welcome to Virtual City, ");
		message_print(my_first_name);

		cout << "!" << endl << endl << "    ";

		message_print("Downtown, lights on buildings and everything will make you");
		cout << endl << "    ";

		message_print("wonder if it's real or just a dream from a distant memory.");
		cout << endl << "    ";

		message_print("Let the city lights guide you home..");
		cout << endl << endl << "    ";

		message_print("~ Mayor");
	}

	void underconstruction()
	{
		cout << "    ";

		message_print("I see you want a tour of this section, ");
		message_print(my_first_name);

		cout << "." << endl << "    ";

		message_print("Well, I'm afraid this part of town is under construction for now..");
		cout << endl << endl << "    ";

		message_print("Umm.. Why not visit other portions in the meantime?");
		cout << endl << endl << "    ";

		message_print("~ Mayor");
	}

	void death()
	{
		system("cls");

		my_health = 0;
		my_mood = 0;
		my_car = ' ';
		my_gun = ' ';

		city_screen();
		cout << "\n\n\t  * DIED\n    ================================= \n";

		cout << "                    ";

		message_print("You Died!");
		cout << endl << endl;

		exit(0);
	}
};

Start start;

class Ammunition : public Properties
{
private:
	int luck_weapons = 0;

public:
	void list()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * AMMUNITION SHOP\n    ================================= \n    [1] Buy Weapons\n    [2] Leave\n    [0] Exit\n    ================================= \n    ";

		int ammunition_choice;

		cout << "Your Choice : ";
		cin >> ammunition_choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (ammunition_choice)
		{
		case 1:
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t  * AMMUNITION SHOP\n    ================================= \n    > NOTE :" << endl << "    As per rules issued by the Government, only 20+ citizens\n    are authorized to keep a gun. Please provide your CNIC card!\n";
			cout << endl;
			cout << "    [1] Take out CNIC Card\n    [2] Leave the shop\n    [0] Exit\n    ================================= \n    ";

			int choose;

			cout << "Your Choice : ";
			cin >> choose;
			cout << "    ================================= " << endl << endl;
			cout << "\a";

			switch (choose)
			{
			case 1:
			{
				if (permission() == true)
				{
				object:
					system("cls");
					obj.screen();
					cout << "\n\n\t  * BUY WEAPONS\n";
					cout << "    ========================================== \n";
					cout << "    Good day mate! Here's today's collection: \n\n";

					cout << "    ==========================================\n    \tWeapons\t\t\t    Code\n    ==========================================\n";

					availability();

					int weapon_choice;

					cout << endl << "    Enter Code : ";
					cin >> weapon_choice;
					cout << "    ========================================== " << endl << endl;
					cout << "\a";

					try
					{
						switch (weapon_choice)
						{
						case 8522:
						{
							assault_rifles();
						}

						case 2447:
						{
							submachine_guns();
						}

						case 7004:
						{
							grenades();
						}

						case 5960:
						{
							pistols();
						}

						case 9607:
						{
							melee_weapons();
						}

						case 4216:
						{
							rifles();
						}

						case 3648:
						{
							throwables();
						}

						case 1603:
						{
							shotguns();
						}

						case 5778:
						{
							bows();
						}

						case 9033:
						{
							machine_guns();
						}

						case 2417:
						{
							gas_bombs();
						}

						case 7362:
						{
							revolvers();
						}

						case 5710:
						{
							ranged_weapons();
						}

						case 7915:
						{
							swords();
						}

						case 4953:
						{
							chemicals();
						}

						default:
						{
							cout << "\a";
							cout << "\n    > INVALID SELECTION !!" << endl << endl;
							cout << "    Press Enter to Continue ...";
							cin.ignore();
							cin.get();
							system("cls");
							goto object;
						}
						}
					}

					catch (int)
					{
						obj.screen();
						cout << "\n\n\t  * BUY WEAPONS\n";
						cout << "    ========================================== \n";
						cout << "    > You don't have enough money! Purchase Failed!\n\n";
						cout << "    Press Enter to Continue..";
						cin.ignore();
						cin.get();
						system("cls");
						list();
					}
				}

				else
				{
					obj.screen();
					cout << "\n\n\t  * BUY WEAPONS\n";
					cout << "    ====================================================== \n";
					cout << "    You're under 20! You're not allowed to keep a weapon!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					start.city_screen();
				}

			}

			case 2:
			{
				system("cls");
				start.city_screen();
			}

			case 3:
			{
				exit(0);
			}
			}
		}

		case 2:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			list();
		}
		}
	}

	void availability()
	{
		srand((unsigned)time(0));
		luck_weapons = rand() % 70;

		if (luck_weapons % 2 == 0)
		{
			cout << "    > Assault Rifles               #8522" << endl;
			cout << "    > Submachine Guns              #2447" << endl;
			cout << "    > Gernades                     #7004" << endl;
			cout << "    > Pistols                      #5960" << endl;
			cout << "    > Melee Weapons                #9607" << endl;
		}

		else if (luck_weapons % 5 == 0)
		{
			cout << "    > Rifles                       #4216" << endl;
			cout << "    > Throwables                   #3648" << endl;
			cout << "    > Shotguns                     #1603" << endl;
			cout << "    > Bows                         #5778" << endl;
			cout << "    > Machine Guns                 #9033" << endl;
		}

		else if (luck_weapons % 7 == 0)
		{
			cout << "    > Gas Bombs                    #2417" << endl;
			cout << "    > Revolvers                    #7362" << endl;
			cout << "    > Ranged Weapons               #5710" << endl;
			cout << "    > Swords                       #7915" << endl;
			cout << "    > Chemicals                    #4953" << endl;
		}

		else
		{
			cout << endl << "    > Error loading weapons! Come back another day..";
			cin.ignore();
			cin.get();
			system("cls");
			start.city_screen();
		}
	}

	bool permission()
	{
		if (my_age < 20)
		{
			return false;
		}

		else
		{
			return true;
		}
	}

	void assault_rifles()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * ASSAULT RIFLES\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] M16                       $2359  " << endl;
		cout << "    [2] AK-103                    $4730  " << endl;
		cout << "    [3] Heckler & Koch G36        $2375  " << endl;
		cout << "    [4] Steyr AUG                 $3600  " << endl;
		cout << "    [5] FN SCAR                   $4800  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int assault_choice;

		cout << "    Your Choice : ";
		cin >> assault_choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (assault_choice)
		{
		case 1:
		{
			if (current_money < 2359)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 2359;
				my_gun = '1';
				obj.screen();
				cout << "\n\n\t  * ASSAULT RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > M16 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 4730)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 4730;
				my_gun = '2';
				obj.screen();
				cout << "\n\n\t  * ASSAULT RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > AK-103 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 2375)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 2375;
				my_gun = '3';
				obj.screen();
				cout << "\n\n\t  * ASSAULT RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > Heckler & Koch G36 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 3600)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 3600;
				my_gun = '4';
				obj.screen();
				cout << "\n\n\t  * ASSAULT RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > Steyr AUG Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 4800)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 4800;
				my_gun = '5';
				obj.screen();
				cout << "\n\n\t  * ASSAULT RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > FN SCAR Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			assault_rifles();
		}
		}
	}

	void submachine_guns()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SUBMACHINE GUNS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Uzi                       $1599  " << endl;
		cout << "    [2] PPSH-41                   $3570  " << endl;
		cout << "    [3] SIG MPX                   $4780  " << endl;
		cout << "    [4] FN P90                    $0951  " << endl;
		cout << "    [5] KRISS Vector              $2589 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int sub_choice;

		cout << "    Your Choice : ";
		cin >> sub_choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (sub_choice)
		{
		case 1:
		{
			if (current_money < 1599)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1599;
				my_gun = '6';
				obj.screen();
				cout << "\n\n\t  * SUBMACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Uzi Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 3570)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 3570;
				my_gun = '7';
				obj.screen();
				cout << "\n\n\t  * SUBMACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > PPSH-41 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 4780)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 4780;
				my_gun = '8';
				obj.screen();
				cout << "\n\n\t  * SUBMACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > SIG MPX Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 951)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 951;
				my_gun = '9';
				obj.screen();
				cout << "\n\n\t  * SUBMACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > FN P90 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 2589)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 2589;
				my_gun = 'A';
				obj.screen();
				cout << "\n\n\t  * SUBMACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > KRISS Vector Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			submachine_guns();
		}
		}
	}

	void grenades()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * GRENADES\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Mk II                     $400  " << endl;
		cout << "    [2] M57                       $249  " << endl;
		cout << "    [3] M33                       $625  " << endl;
		cout << "    [4] ET-MP                     $199  " << endl;
		cout << "    [5] M61                       $346 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int sub_choice;

		cout << "    Your Choice : ";
		cin >> sub_choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (sub_choice)
		{
		case 1:
		{
			if (current_money < 400)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 400;
				my_gun = 'B';
				obj.screen();
				cout << "\n\n\t  * GRENADES\n";
				cout << "    ===================================== \n";
				cout << "    > Mk II Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 249)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 249;
				my_gun = 'C';
				obj.screen();
				cout << "\n\n\t  * GRENADES\n";
				cout << "    ===================================== \n";
				cout << "    > M57 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 625)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 625;
				my_gun = 'D';
				obj.screen();
				cout << "\n\n\t  * GRENADES\n";
				cout << "    ===================================== \n";
				cout << "    > M33 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 199)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 199;
				my_gun = 'E';
				obj.screen();
				cout << "\n\n\t  * GRENADES\n";
				cout << "    ===================================== \n";
				cout << "    > ET-MP Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 346)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				my_gun = 'F';
				current_money = current_money - 346;
				obj.screen();
				cout << "\n\n\t  * GRENADES\n";
				cout << "    ===================================== \n";
				cout << "    > M61 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			grenades();
		}
		}
	}

	void pistols()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * PISTOLS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Glock 17                  $1111  " << endl;
		cout << "    [2] SIG Sauer P320            $848  " << endl;
		cout << "    [3] Beretta 92                $1025  " << endl;
		cout << "    [4] CZ-75                     $1237  " << endl;
		cout << "    [5] FN Five Seven             $999 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 1111)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1111;
				my_gun = 'G';
				obj.screen();
				cout << "\n\n\t  * PISTOLS\n";
				cout << "    ===================================== \n";
				cout << "    > Glock 17 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 848)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 848;
				my_gun = 'H';
				obj.screen();
				cout << "\n\n\t  * PISTOLS\n";
				cout << "    ===================================== \n";
				cout << "    > SIG Sauer P320 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 1025)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1025;
				my_gun = 'I';
				obj.screen();
				cout << "\n\n\t  * PISTOLS\n";
				cout << "    ===================================== \n";
				cout << "    > Beretta 92 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 1237)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1237;
				my_gun = 'J';
				obj.screen();
				cout << "\n\n\t  * PISTOLS\n";
				cout << "    ===================================== \n";
				cout << "    > CZ-75 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 999)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 999;
				my_gun = 'K';
				obj.screen();
				cout << "\n\n\t  * PISTOLS\n";
				cout << "    ===================================== \n";
				cout << "    > FN Five Seven Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			pistols();
		}
		}
	}

	void melee_weapons()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * MELEE WEAPONS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Spear                     $200  " << endl;
		cout << "    [2] Boomerang                 $100  " << endl;
		cout << "    [3] Chain Knife               $350  " << endl;
		cout << "    [4] Stick                     $10  " << endl;
		cout << "    [5] Sickle                    $455 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 200;
				my_gun = 'L';
				obj.screen();
				cout << "\n\n\t  * MELEE WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Spear Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 100)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 100;
				my_gun = 'M';
				obj.screen();
				cout << "\n\n\t  * MELEE WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Boomerang Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 350)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 350;
				my_gun = 'N';
				obj.screen();
				cout << "\n\n\t  * MELEE WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Chain Knife Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 10)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 10;
				my_gun = 'O';
				obj.screen();
				cout << "\n\n\t  * MELEE WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Stick Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 455)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 455;
				my_gun = 'P';
				obj.screen();
				cout << "\n\n\t  * MELEE WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Sickle Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			melee_weapons();
		}
		}
	}

	void rifles()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * RIFLES\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Barrett M82               $6000 " << endl;
		cout << "    [2] SAKO TRG 42               $5500  " << endl;
		cout << "    [3] Blaser R93 Tactical       $7800  " << endl;
		cout << "    [4] SIG SSG 3000              $6250  " << endl;
		cout << "    [5] McMillan TAC-50           $5999 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 6000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 6000;
				my_gun = 'Q';
				obj.screen();
				cout << "\n\n\t  * RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > Barrett M82 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 5500)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 5500;
				my_gun = 'R';
				obj.screen();
				cout << "\n\n\t  * RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > SAKO TRG 42 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 7800)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 7800;
				my_gun = 'S';
				obj.screen();
				cout << "\n\n\t  * RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > Blaser R93 Tactical Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 6250)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 6250;
				my_gun = 'T';
				obj.screen();
				cout << "\n\n\t  * RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > SIG SSG 3000 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 5999)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 5999;
				my_gun = 'U';
				obj.screen();
				cout << "\n\n\t  * RIFLES\n";
				cout << "    ===================================== \n";
				cout << "    > McMillan TAC-50 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			rifles();
		}
		}
	}

	void throwables()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * THROWABLES\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Swallow Tail Knives       $120  " << endl;
		cout << "    [2] Throwing Axes             $180  " << endl;
		cout << "    [3] Thorns & Needles          $24  " << endl;
		cout << "    [4] Rotten Eggs               $150  " << endl;
		cout << "    [5] Molotovs                  $240  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 120)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 120;
				my_gun = 'V';
				obj.screen();
				cout << "\n\n\t  * THROWABLES\n";
				cout << "    ===================================== \n";
				cout << "    > Swallow Tail Knives Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 180)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 180;
				my_gun = 'W';
				obj.screen();
				cout << "\n\n\t  * THROWABLES\n";
				cout << "    ===================================== \n";
				cout << "    > Throwing Axes Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 24)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 24;
				my_gun = 'X';
				obj.screen();
				cout << "\n\n\t  * THROWABLES\n";
				cout << "    ===================================== \n";
				cout << "    > Thorns & Needles Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 150)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 150;
				my_gun = 'Y';
				obj.screen();
				cout << "\n\n\t  * THROWABLES\n";
				cout << "    ===================================== \n";
				cout << "    > Rotten Eggs Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 240)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 240;
				my_gun = 'Z';
				obj.screen();
				cout << "\n\n\t  * THROWABLES\n";
				cout << "    ===================================== \n";
				cout << "    > Molotovs Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			throwables();
		}
		}
	}

	void shotguns()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SHOTGUNS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Mossberg Maverick 88      $250  " << endl;
		cout << "    [2] Remington 870 Express     $400  " << endl;
		cout << "    [3] Stoeger M3000             $559   " << endl;
		cout << "    [4] Weatherby SA-08           $491  " << endl;
		cout << "    [5] CZ Drake                  $660  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 250)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 250;
				my_gun = 'a';
				obj.screen();
				cout << "\n\n\t  * SHOTGUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Mossberg Maverick 88 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 400)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 400;
				my_gun = 'b';
				obj.screen();
				cout << "\n\n\t  * SHOTGUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Remington 870 Express Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 559)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 559;
				my_gun = 'c';
				obj.screen();
				cout << "\n\n\t  * SHOTGUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Stoeger M3000 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 491)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 491;
				my_gun = 'd';
				obj.screen();
				cout << "\n\n\t  * SHOTGUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Weatherby SA-08 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 660)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 660;
				my_gun = 'e';
				obj.screen();
				cout << "\n\n\t  * SHOTGUNS\n";
				cout << "    ===================================== \n";
				cout << "    > CZ Drake Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			shotguns();
		}
		}
	}

	void bows()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * BOWS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Mathews VXR28             $1099  " << endl;
		cout << "    [2] Bowtech Revolt            $1399  " << endl;
		cout << "    [3] PSE EVO NTN Nockon        $1199   " << endl;
		cout << "    [4] Prime Black 9             $725  " << endl;
		cout << "    [5] Hoyt Carbon RX-7          $1849  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 1099)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1099;
				my_gun = 'f';
				obj.screen();
				cout << "\n\n\t  * BOWS\n";
				cout << "    ===================================== \n";
				cout << "    > Mathews VXR28 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 1399)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1399;
				my_gun = 'g';
				obj.screen();
				cout << "\n\n\t  * BOWS\n";
				cout << "    ===================================== \n";
				cout << "    > Bowtech Revolt Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 1199)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1199;
				my_gun = 'h';
				obj.screen();
				cout << "\n\n\t  * BOWS\n";
				cout << "    ===================================== \n";
				cout << "    > PSE EVO NTN Nockon Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 725)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 725;
				my_gun = 'i';
				obj.screen();
				cout << "\n\n\t  * BOWS\n";
				cout << "    ===================================== \n";
				cout << "    > Prime Black 9 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 1849)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1849;
				my_gun = 'j';
				obj.screen();
				cout << "\n\n\t  * BOWS\n";
				cout << "    ===================================== \n";
				cout << "    > Hoyt Carbon RX-7 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			bows();
		}
		}
	}

	void machine_guns()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * MACHINE GUNS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] M2 Browning               $495" << endl;
		cout << "    [2] M60 GPMG                  $6000" << endl;
		cout << "    [3] M24E6 Machine Gun         $6600" << endl;
		cout << "    [4] XM214 Microgun            $14000" << endl;
		cout << "    [5] Ultimax 100               $698" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 495)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 495;
				my_gun = 'k';
				obj.screen();
				cout << "\n\n\t  * MACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > M2 Browning Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 6000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 6000;
				my_gun = 'l';
				cout << "\n\n\t  * MACHINE GUNS\n";
				obj.screen();
				cout << "    ===================================== \n";
				cout << "    > M60 GPMG Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 6600)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 6600;
				my_gun = 'm';
				obj.screen();
				cout << "\n\n\t  * MACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > M24E6 Machine Gun Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 14000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 14000;
				my_gun = 'n';
				obj.screen();
				cout << "\n\n\t  * MACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > XM214 Microgun Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 698)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 698;
				my_gun = 'o';
				obj.screen();
				cout << "\n\n\t  * MACHINE GUNS\n";
				cout << "    ===================================== \n";
				cout << "    > Ultimax 100 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			machine_guns();
		}
		}
	}

	void gas_bombs()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * GAS BOMBS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Nerve Gas                 $100" << endl;
		cout << "    [2] Mustard Gas               $150" << endl;
		cout << "    [3] Tear Gas                  $200" << endl;
		cout << "    [4] Pepper Spray              $50" << endl;
		cout << "    [5] Laughing Gas              $250" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 100)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 100;
				my_gun = 'p';
				obj.screen();
				cout << "\n\n\t  * GAS BOMBS\n";
				cout << "    ===================================== \n";
				cout << "    > Nerve Gas Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 150)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 150;
				my_gun = 'q';
				obj.screen();
				cout << "\n\n\t  * GAS BOMBS\n";
				cout << "    ===================================== \n";
				cout << "    > Mustard Gas Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 200;
				my_gun = 'r';
				obj.screen();
				cout << "\n\n\t  * GAS BOMBS\n";
				cout << "    ===================================== \n";
				cout << "    > Tear Gas Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 50)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 50;
				my_gun = 's';
				obj.screen();
				cout << "\n\n\t  * GAS BOMBS\n";
				cout << "    ===================================== \n";
				cout << "    > Pepper Spray Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 250)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 250;
				my_gun = 't';
				obj.screen();
				cout << "\n\n\t  * GAS BOMBS\n";
				cout << "    ===================================== \n";
				cout << "    > Laughing Gas Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			gas_bombs();
		}
		}
	}

	void revolvers()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * REVOLVERS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Colt 1860 Army            $520" << endl;
		cout << "    [2] Colt Python               $1169" << endl;
		cout << "    [3] Ruger Blackhawk           $829" << endl;
		cout << "    [4] Ruger Super Redhawk       $1459" << endl;
		cout << "    [5] RUGER LCR                 $719" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 520)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 520;
				my_gun = 'u';
				obj.screen();
				cout << "\n\n\t  * REVOLVERS\n";
				cout << "    ===================================== \n";
				cout << "    > Colt 1860 Army Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 1169)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1169;
				my_gun = 'v';
				obj.screen();
				cout << "\n\n\t  * REVOLVERS\n";
				cout << "    ===================================== \n";
				cout << "    > Colt Python Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 829)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 829;
				my_gun = 'w';
				obj.screen();
				cout << "\n\n\t  * REVOLVERS\n";
				cout << "    ===================================== \n";
				cout << "    > Ruger Blackhawk Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 1459)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1459;
				my_gun = 'x';
				obj.screen();
				cout << "\n\n\t  * REVOLVERS\n";
				cout << "    ===================================== \n";
				cout << "    > Ruger Super Redhawk Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 719)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 719;
				my_gun = 'y';
				obj.screen();
				cout << "\n\n\t  * REVOLVERS\n";
				cout << "    ===================================== \n";
				cout << "    > RUGER LCR Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			revolvers();
		}
		}
	}

	void ranged_weapons()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * RANGED WEAPONS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Flare Gun                 $147" << endl;
		cout << "    [2] Musket                    $899" << endl;
		cout << "    [3] Grenade Launcher          $2219" << endl;
		cout << "    [4] Sling                     $50" << endl;
		cout << "    [5] Slingshot                 $25" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 147)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 147;
				my_gun = 'z';
				obj.screen();
				cout << "\n\n\t  * RANGED WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Flare Gun Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 899)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 899;
				my_gun = '@';
				obj.screen();
				cout << "\n\n\t  * RANGED WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Musket Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 2219)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 2219;
				my_gun = '`';
				obj.screen();
				cout << "\n\n\t  * RANGED WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Grenade Launcher Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 50)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 50;
				my_gun = '~';
				obj.screen();
				cout << "\n\n\t  * RANGED WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Sling Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 25)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 25;
				my_gun = '#';
				obj.screen();
				cout << "\n\n\t  * RANGED WEAPONS\n";
				cout << "    ===================================== \n";
				cout << "    > Slingshot Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			ranged_weapons();
		}
		}
	}

	void swords()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SWORDS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Seven Branched Sword      $79" << endl;
		cout << "    [2] Wallace Sword             $329" << endl;
		cout << "    [3] Tizona Sword              $256" << endl;
		cout << "    [4] Napoleon's Sword          $6400" << endl;
		cout << "    [5] Sword of Mercy            $25" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 79)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 79;
				my_gun = '$';
				obj.screen();
				cout << "\n\n\t  * SWORDS\n";
				cout << "    ===================================== \n";
				cout << "    > Seven Branched Sword Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 329)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 329;
				my_gun = '%';
				obj.screen();
				cout << "\n\n\t  * SWORDS\n";
				cout << "    ===================================== \n";
				cout << "    > Wallace Sword Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 256)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 256;
				my_gun = '^';
				obj.screen();
				cout << "\n\n\t  * SWORDS\n";
				cout << "    ===================================== \n";
				cout << "    > Tizona Sword Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 6400)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 6400;
				my_gun = '&';
				obj.screen();
				cout << "\n\n\t  * SWORDS\n";
				cout << "    ===================================== \n";
				cout << "    > Napoleon's Sword Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 25)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 25;
				my_gun = '*';
				obj.screen();
				cout << "\n\n\t  * SWORDS\n";
				cout << "    ===================================== \n";
				cout << "    > Sword of Mercy Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			swords();
		}
		}
	}

	void chemicals()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CHEMICALS\n";
		cout << "    ===================================== \n";
		cout << "    //some tag line: \n\n";

		cout << "    =====================================\n    \tWeapons\t\t\t  Price\n    =====================================\n";
		cout << "    [1] Acid                      $200" << endl;
		cout << "    [2] Perfume                   $500" << endl;
		cout << "    [3] Toxic Candies             $120" << endl;
		cout << "    [4] Chloroform                $600" << endl;
		cout << "    [5] Bisphenol A               $1200" << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ===================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 200;
				my_gun = '(';
				obj.screen();
				cout << "\n\n\t  * CHEMICALS\n";
				cout << "    ===================================== \n";
				cout << "    > Acid Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 500)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 500;
				my_gun = ')';
				obj.screen();
				cout << "\n\n\t  * CHEMICALS\n";
				cout << "    ===================================== \n";
				cout << "    > Perfume Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 120)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 120;
				my_gun = '-';
				obj.screen();
				cout << "\n\n\t  * CHEMICALS\n";
				cout << "    ===================================== \n";
				cout << "    > Toxic Candies Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 600)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 600;
				my_gun = '+';
				obj.screen();
				cout << "\n\n\t  * CHEMICALS\n";
				cout << "    ===================================== \n";
				cout << "    > Chloroform Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 1200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");
				current_money = current_money - 1200;
				my_gun = '_';
				obj.screen();
				cout << "\n\n\t  * CHEMICALS\n";
				cout << "    ===================================== \n";
				cout << "    > Bisphenol A Purchased Successfully!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			chemicals();
		}
		}
	}
};

class Show_Room : public Properties
{
private:
	int luck_vehicles;

public:
	void list()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SHOW ROOM\n    ================================= \n    [1] Buy Cars\n    [2] Leave\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
		cars:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * BUY CARS\n";
			cout << "    ========================================== \n";
			cout << "     Good day Sir! Here's today's collection: \n\n";

			cout << "    ==========================================\n        Vehicles\t\t     Code\n    ==========================================\n";

			vehicle_availability();

			int choice;

			cout << endl << "    Enter Code : ";
			cin >> choice;
			cout << "    ========================================== " << endl << endl;
			cout << "\a";

			try
			{
				switch (choice)
				{

				case 1594:
				{
					bikes();
				}

				case 2555:
				{
					vans();
				}

				case 9165:
				{
					cars();
				}

				case 5222:
				{
					scooters();
				}

				case 3364:
				{
					bus();
				}

				case 8726:
				{
					trucks();
				}

				case 2800:
				{
					tractors();
				}

				case 7739:
				{
					misc();
				}

				case 6495:
				{
					sports_car();
				}

				default:
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					goto cars;
				}
				}
			}

			catch (int)
			{
				obj.screen();
				cout << "\n\n\t  * BUY CARS\n";
				cout << "    ======================================== \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			list();
		}
		}
	}

	void vehicle_availability()
	{
		srand((unsigned)time(0));
		luck_vehicles = rand() % 70;

		if (luck_vehicles % 2 == 0)
		{
			cout << "    >    Bikes                      #1594 " << endl;
			cout << "    >    Vans                       #2555 " << endl;
			cout << "    >    Cars                       #9165 " << endl;
		}

		else if (luck_vehicles % 5 == 0)
		{
			cout << "    >    Scooters                   #5222 " << endl;
			cout << "    >    Buses                      #3364 " << endl;
			cout << "    >    Trucks                     #8726 " << endl;
		}

		else if (luck_vehicles % 7 == 0)
		{
			cout << "    >    Tractors                   #2800 " << endl;
			cout << "    >    Misc                       #7739 " << endl;
			cout << "    >    Sports Cars                #6495 " << endl;
		}

		else
		{
			cout << endl << "    > Error loading Cars! Come back another day..";
			cin.ignore();
			cin.get();
			system("cls");
			start.city_screen();
		}
	}

	void bikes()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * BIKES\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] BMW K1200                  $14,020  " << endl;
		cout << "    [2] KAWASAKI NINJA H2R         $42,835  " << endl;
		cout << "    [3] SUZUKI HAYABUSA            $14,695  " << endl;
		cout << "    [4] DODGE TOMAHAWK             $55,000  " << endl;
		cout << "    [5] HONDA FIREBLADE SP         $28,500  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 14020)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '0';
				current_money = current_money - 14020;
				obj.screen();

				cout << "\n\n\t  * BIKES\n";
				cout << "    ===================================== \n";
				cout << "    > BMW K1200 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 42835)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '1';
				current_money = current_money - 42835;
				obj.screen();

				cout << "\n\n\t  * BIKES\n";
				cout << "    ===================================== \n";
				cout << "    > KAWASAKI NINJA H2R Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 14695)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '2';
				current_money = current_money - 14695;
				obj.screen();

				cout << "\n\n\t  * BIKES\n";
				cout << "    ===================================== \n";
				cout << "    > SUZUKI HAYABUSA Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 55000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '3';
				current_money = current_money - 55000;
				obj.screen();

				cout << "\n\n\t  * BIKES\n";
				cout << "    ===================================== \n";
				cout << "    > DODGE TOMAHAWK Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 28500)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '4';
				current_money = current_money - 28500;
				obj.screen();

				cout << "\n\n\t  * BIKES\n";
				cout << "    ===================================== \n";
				cout << "    > HONDA FIREBLADE SP Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			bikes();
		}
		}
	}

	void scooters()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SCOOTERS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] HONDA ACTIVA 6G            $745 " << endl;
		cout << "    [2] SUZUKI ACCESS 125          $1065 " << endl;
		cout << "    [3] TVS NTORQ 125              $490 " << endl;
		cout << "    [4] ATHER 450X                 $795 " << endl;
		cout << "    [5] YAMAHA FASCINO 125         $460 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 745)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'f';
				current_money = current_money - 745;
				obj.screen();

				cout << "\n\n\t  * SCOOTERS\n";
				cout << "    =============================================== \n";
				cout << "    > HONDA ACTIVA 6G Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}


		case 2:
		{
			if (current_money < 1065)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'g';
				current_money = current_money - 1065;
				obj.screen();

				cout << "\n\n\t  * SCOOTERS\n";
				cout << "    =============================================== \n";
				cout << "    > SUZUKI ACCESS 125 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 490)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'h';
				current_money = current_money - 490;
				obj.screen();

				cout << "\n\n\t  * SCOOTERS\n";
				cout << "    =============================================== \n";
				cout << "    > TVS NTORQ 125 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 795)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'i';
				current_money = current_money - 795;
				obj.screen();

				cout << "\n\n\t  * SCOOTERS\n";
				cout << "    =============================================== \n";
				cout << "    > ATHER 450X Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 460)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'j';
				current_money = current_money - 460;
				obj.screen();

				cout << "\n\n\t  * SCOOTERS\n";
				cout << "    =============================================== \n";
				cout << "    > YAMAHA FASCINO 125 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			scooters();
		}
		}
	}

	void tractors()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * TRACTORS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Fendt 820                  $18,200 " << endl;
		cout << "    [2] Valtra 6550 HiTech         $15,135 " << endl;
		cout << "    [3] John Deere 7820            $11,900 " << endl;
		cout << "    [4] New Holland TS135A         $20,500 " << endl;
		cout << "    [5] MeriCrusher MT-700         $14,750 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 18200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'u';
				current_money = current_money - 18200;
				obj.screen();

				cout << "\n\n\t  * TRACTORS\n";
				cout << "    ==================================== \n";
				cout << "    > Fendt 820 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 15135)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'v';
				current_money = current_money - 15135;
				obj.screen();

				cout << "\n\n\t  * TRACTORS\n";
				cout << "    ============================================= \n";
				cout << "    > Valtra 6550 HiTech Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 11900)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'w';
				current_money = current_money - 11900;
				obj.screen();

				cout << "\n\n\t  * TRACTORS\n";
				cout << "    ========================================== \n";
				cout << "    > John Deere 7820 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 20500)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'x';
				current_money = current_money - 20500;
				obj.screen();

				cout << "\n\n\t  * TRACTORS\n";
				cout << "    ========================================== \n";
				cout << "    > New Holland TS135A Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 14750)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'y';
				current_money = current_money - 14750;
				obj.screen();

				cout << "\n\n\t  * TRACTORS\n";
				cout << "    ============================================= \n";
				cout << "    > MeriCrusher MT-700 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			tractors();
		}
		}
	}

	void vans()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * VANS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Ford Transit Custom        $35,270  " << endl;
		cout << "    [2] Renault Trafic             $45,650  " << endl;
		cout << "    [3] Toyota Proace              $37,065  " << endl;
		cout << "    [4] Nissan NV200               $23,630  " << endl;
		cout << "    [5] Vauxhall Vivaro            $36,790  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 35270)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '5';
				current_money = current_money - 35270;
				obj.screen();

				cout << "\n\n\t  * VANS\n";
				cout << "    =============================================== \n";
				cout << "    > Ford Transit Custom Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 45650)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '6';
				current_money = current_money - 45650;
				obj.screen();

				cout << "\n\n\t  * VANS\n";
				cout << "    ========================================= \n";
				cout << "    > Renault Trafic Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 37065)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '7';
				current_money = current_money - 37065;
				obj.screen();

				cout << "\n\n\t  * VANS\n";
				cout << "    ======================================== \n";
				cout << "    > Toyota Proace Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 23630)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '8';
				current_money = current_money - 23630;
				obj.screen();

				cout << "\n\n\t  * VANS\n";
				cout << "    ======================================= \n";
				cout << "    > Nissan NV200 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 36790)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = '9';
				current_money = current_money - 36790;
				obj.screen();

				cout << "\n\n\t  * VANS\n";
				cout << "    ======================================= \n";
				cout << "    > Vauxhall Vivaro Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			vans();
		}
		}
	}

	void bus()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * BUSES\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] AutoTram Extra Grand       $100,000 " << endl;
		cout << "    [2] Volvo 9800                 $319,900 " << endl;
		cout << "    [3] Newmar King Aire           $973,548 " << endl;
		cout << "    [4] Prevost H3-45 VIP          $525,000 " << endl;
		cout << "    [5] Monaco Dynasty 45P         $646,395 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 100000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'k';
				current_money = current_money - 100000;
				obj.screen();

				cout << "\n\n\t  * BUSES\n";
				cout << "    ================================================ \n";
				cout << "    > AutoTram Extra Grand Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 319900)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'l';
				current_money = current_money - 319900;
				obj.screen();

				cout << "\n\n\t  * BUSES\n";
				cout << "    ===================================== \n";
				cout << "    > Volvo 9800 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 973548)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'm';
				current_money = current_money - 973548;
				obj.screen();

				cout << "\n\n\t  * BUSES\n";
				cout << "    ================================= \n";
				cout << "    > Newmar King Aire Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 525000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'n';
				current_money = current_money - 525000;
				obj.screen();

				cout << "\n\n\t  * BUSES\n";
				cout << "    ================================= \n";
				cout << "    > Prevost H3-45 VIP Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 646395)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'o';
				current_money = current_money - 646395;
				obj.screen();

				cout << "\n\n\t  * BUSES\n";
				cout << "    ================================= \n";
				cout << "    > Monaco Dynasty 45P Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			bus();
		}
		}
	}

	void cars()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CARS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Audi E-tron Quattro        $95,085  " << endl;
		cout << "    [2] Mercedes-Benz CLS          $72,950  " << endl;
		cout << "    [3] BMW X7                     $74,900  " << endl;
		cout << "    [4] Bugatti Divo               $5,700,000  " << endl;
		cout << "    [5] Lamborghini Veneno         $4,500,000  " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 95085)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'a';
				current_money = current_money - 95085;
				obj.screen();

				cout << "\n\n\t  * CARS\n";
				cout << "    =============================================== \n";
				cout << "    > Audi E-tron Quattro Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 72950)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'b';
				current_money = current_money - 72950;
				obj.screen();

				cout << "\n\n\t  * CARS\n";
				cout << "    ============================================ \n";
				cout << "    > Mercedes-Benz CLS Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 74900)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'c';
				current_money = current_money - 74900;
				obj.screen();

				cout << "\n\n\t  * CARS\n";
				cout << "    ================================= \n";
				cout << "    > BMW X7 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 5700000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'd';
				current_money = current_money - 5700000;
				obj.screen();

				cout << "\n\n\t  * CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Bugatti Divo Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 4500000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'e';
				current_money = current_money - 4500000;
				obj.screen();

				cout << "\n\n\t  * CARS\n";
				cout << "    ============================================= \n";
				cout << "    > Lamborghini Veneno Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			cars();
		}
		}
	}

	void trucks()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * TRUCKS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Nissan Frontier            $37,370 " << endl;
		cout << "    [2] Toyota Tundra              $38,950 " << endl;
		cout << "    [3] Ford F-150                 $28,940 " << endl;
		cout << "    [4] GMC Sierra 1500            $29,700 " << endl;
		cout << "    [5] Ram 1500                   $33,975 " << endl << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 37370)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'p';
				current_money = current_money - 37370;
				obj.screen();

				cout << "\n\n\t  * TRUCKS\n";
				cout << "    ========================================== \n";
				cout << "    > Nissan Frontier Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 38950)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'q';
				current_money = current_money - 38950;
				obj.screen();

				cout << "\n\n\t  * TRUCKS\n";
				cout << "    ======================================== \n";
				cout << "    > Toyota Tundra Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 28940)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'r';
				current_money = current_money - 28940;
				obj.screen();

				cout << "\n\n\t  * TRUCKS\n";
				cout << "    ===================================== \n";
				cout << "    > Ford F-150 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 29700)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 's';
				current_money = current_money - 29700;
				obj.screen();

				cout << "\n\n\t  * TRUCKS\n";
				cout << "    ========================================= \n";
				cout << "    > GMC Sierra 1500 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 33975)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 't';
				current_money = current_money - 33975;
				obj.screen();

				cout << "\n\n\t  * TRUCKS\n";
				cout << "    ==================================== \n";
				cout << "    > Ram 1500 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			trucks();
		}
		}
	}

	void sports_car()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SPORTS CARS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Mazda MX-5                 $275,300 " << endl;
		cout << "    [2] Porsche 911                $101,200 " << endl;
		cout << "    [3] Alpine A110                $100,372 " << endl;
		cout << "    [4] Toyota GR Supra            $244,215 " << endl;
		cout << "    [5] Audi TT                    $172,500 " << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 275300)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'E';
				current_money = current_money - 275300;
				obj.screen();

				cout << "\n\n\t  * SPORTS CARS\n";
				cout << "    ==================================== \n";
				cout << "    > Mazda MX-5 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 101200)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'F';
				current_money = current_money - 101200;
				obj.screen();

				cout << "\n\n\t  * SPORTS CARS\n";
				cout << "    ==================================== \n";
				cout << "    > Porsche 911 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 100372)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'G';
				current_money = current_money - 100372;
				obj.screen();

				cout << "\n\n\t  * SPORTS CARS\n";
				cout << "    ==================================== \n";
				cout << "    > Alpine A110 Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 244215)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'H';
				current_money = current_money - 244215;
				obj.screen();

				cout << "\n\n\t  * SPORTS CARS\n";
				cout << "    ========================================== \n";
				cout << "    > Toyota GR Supra Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 172500)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'I';
				current_money = current_money - 172500;
				obj.screen();

				cout << "\n\n\t  * SPORTS CARS\n";
				cout << "    ========================================== \n";
				cout << "    > Audi TT Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			sports_car();
		}
		}
	}

	void misc()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * MISCELLANEOUS\n";
		cout << "    ========================================= \n";
		cout << "    //some tag line: \n\n";

		cout << "    =========================================\n    \tVehicles\t\t    Price\n    =========================================\n";
		cout << "    [1] Helicopter                 $2,080,00 " << endl;
		cout << "    [2] Submarine                  $4,087,00 " << endl;
		cout << "    [3] Hot Air Balloon            $500,000 " << endl;
		cout << "    [4] Yacht                      $12,000 " << endl;
		cout << "    [5] Dinghy                     $7000 " << endl;

		cout << "    [6] Leave Shop" << endl;
		cout << "    [0] Exit" << endl << "    ========================================= " << endl << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money < 208000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'z';
				current_money = current_money - 208000;
				obj.screen();

				cout << "\n\n\t  * MISCELLANEOUS\n";
				cout << "    ==================================== \n";
				cout << "    > Helicopter Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 2:
		{
			if (current_money < 408700)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'A';
				current_money = current_money - 408700;
				obj.screen();

				cout << "\n\n\t  * MISCELLANEOUS\n";
				cout << "    ==================================== \n";
				cout << "    > Submarine Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 3:
		{
			if (current_money < 500000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'B';
				current_money = current_money - 500000;
				obj.screen();

				cout << "\n\n\t  * MISCELLANEOUS\n";
				cout << "    ========================================== \n";
				cout << "    > Hot Air Balloon Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 4:
		{
			if (current_money < 12000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'C';
				current_money = current_money - 12000;
				obj.screen();

				cout << "\n\n\t  * MISCELLANEOUS\n";
				cout << "    ================================ \n";
				cout << "    > Yacht Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 5:
		{
			if (current_money < 7000)
			{
				system("cls");
				throw 101;
			}

			else
			{
				system("cls");

				my_car = 'D';
				current_money = current_money - 7000;
				obj.screen();

				cout << "\n\n\t  * MISCELLANEOUS\n";
				cout << "    ================================= \n";
				cout << "    > Dinghy Purchased Successfully!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				list();
			}
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			misc();
		}
		}
	}
};

class Arcade : public Properties							//Gaming Zone
{
private:
	//Tic Tac Toe
	char board[3][3] = { {'1' , '2' , '3'} , {'4' , '5' , '6'} , {'7' , '8' , '9'} };
	char current_marker;
	int current_player;

	//Guess the Number
	int guessed_no;
	int actual_no;
	int total_tries;

	int tries_1 = 0;
	int tries_2 = 0;
	int tries_3 = 0;
	int tries_4 = 0;
	int tries_5 = 0;

	//hangman
	const int MAX_TRIES = 10;
	char letter;
	int wrong_guesses = 0;

public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * ARCADE\n    ================================= \n    [1] Information Desk\n    [2] Tic Tac Toe\n    [3] Hangman\n    [4] Guess the Number\n    [5] Go Out\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			//information desk
			welcome();
		}

		case 2:
		{
			tic_tac_toe();
		}

		case 3:
		{
			hangman();
		}

		case 4:
		{
			guess_the_number();
		}

		case 5:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
		}
	}

	void tic_tac_toe()
	{
	replay1:
		int exit_choice_tic_tac_toe;
		char reinitializer = '1';
		//Initializing as "1" because the entries of the board start from 1 (and go up to 9)

																					//Recreating the rows of board

		for (int i = 0; i < 3; i++)
			//A loop that erases the "X's" & "O's" from the board, so that game can be played again
		{
			for (int j = 0; j < 3; j++)										//Recreating the columns of board
			{
				board[i][j] = reinitializer++;
				//Incrementing the value of [reinitializer] with in the nested for loop to re-create the board 
			}
		}

		system("cls");

		do
		{
			obj.screen();
			cout << "\n\n\t         * TIC TAC TOE \n   ============================================ \n";
			cout << "\n          Marker Choices : 'O' or  'X' " << endl;

			cout << "\n          > Choose your marker : ";

			char marker_player_1;
			cin >> marker_player_1;


			if (marker_player_1 == 'X' || marker_player_1 == 'O')
				//Condition to check if the selected marker is either "X" or "O" (or else)
			{
				current_player = 1;		//Declaring the current player as the 1st player so that the game can be started

				current_marker = marker_player_1;
				//Giving the value of player#01 marker to the current_marker variable so this can go & swap the marker for the next player (through the defined function) 

				system("cls");
				cout << endl << endl;

				drawboard();

				int winner_player;

				for (int i = 0; i < 9; i++)
					//Applying loop for 9 times because maximum moves that can be made (before the game ends up as a tie) are "9"
				{
					cout << endl << "       " << "It's player " << current_player << "'s turn : ";

					int slot;
					cin >> slot;
					system("cls");

					if (slot < 1 || slot > 9)
						//Condition that checks if the slot-entered is out of the range (of game board) or not
					{
						cout << "\n\n\n\n";
						drawboard();
						cout << "       " << "Invalid Input ! Try again";
						i--;
						//Decrementing the value of i so the player who entered the wrong slot can redo his turn (and his turn is not wasted)


						continue;
						//Going back to the place where user was asked to choose slot
					}

					if (!placemarker(slot))
						//If that Boolean condition is not true 
					{
						cout << "\n\n\n\n";
						drawboard();
						cout << "       " << "This slot is taken! Try again!";
						i--;
						//Decrementing the value of i so the player who entered the wrong slot can redo his turn (and his turn is not wasted)

						continue;
						//Going back to the place where user was asked to choose slot
					}

					cout << "\n\n\n\n";

					drawboard();
					//Drawing the board with the marker placed at the slot entered by the players

					winner_player = winner();
					//Giving the value of function [winner()] to variable winner_player	

					if (winner_player == 1)
						//Statements to be executed only if player # 01 wins

					{
						current_money = current_money + 1500;

						cout << "\n       " << "       You Win !" << endl;
						cout << "\n       " << "  > Prize : $1500" << endl << endl;
						cout << "   [1] Replay " << endl;
						cout << "   [2] Go Back " << endl;
						cout << "   [0] Exit " << endl;
						cout << "   ========================================== \n";

						cout << "   Your Choice : ";
						cin >> exit_choice_tic_tac_toe;

						cout << "   ========================================== " << endl << endl;

						cout << "\a";

						if (exit_choice_tic_tac_toe == 1)
						{
							goto replay1;
						}

						else if (exit_choice_tic_tac_toe == 2)
						{
							welcome();
						}

						else if (exit_choice_tic_tac_toe == 0)
						{
							exit(0);
						}

						else
						{
							cout << "\a";
							cout << "\n    > INVALID SELECTION !!" << endl << endl;
							cout << "    Press Enter to Continue ...";
							cin.ignore();
							cin.get();

							system("cls");
							welcome();
						}
					}

					else if (winner_player == 2)
						//Statements to be executed only if player # 02 wins
					{
						cout << "\n       " << "You Lose !" << endl;

						cout << endl << endl << endl;
						cout << "   [1] Replay " << endl;
						cout << "   [2] Go Back " << endl;
						cout << "   [0] Exit " << endl;
						cout << "   ========================================== \n";

						cout << "   Your Choice : ";
						cin >> exit_choice_tic_tac_toe;
						cout << "   ========================================== " << endl << endl;

						cout << "\a";

						if (exit_choice_tic_tac_toe == 1)
						{
							goto replay1;
						}

						else if (exit_choice_tic_tac_toe == 2)
						{
							welcome();
						}

						else if (exit_choice_tic_tac_toe == 0)
						{
							exit(0);
						}

						else
						{
							cout << "\a";
							cout << "\n    > INVALID SELECTION !!" << endl << endl;
							cout << "    Press Enter to Continue ...";
							cin.ignore();
							cin.get();
							system("cls");
							welcome();
						}
					}

					swap_player_and_marker();
				}

				if (winner_player == 0)
					//Statements to be executed if no one wins and match is a tie
				{
					cout << "       " << "Match Was a Tie !";

					cout << endl << endl << endl;

					cout << "   [1] Replay " << endl;
					cout << "   [2] Go Back " << endl;
					cout << "   [0] Exit " << endl;
					cout << "   ========================================== \n";

					cout << "   Your Choice : ";
					cin >> exit_choice_tic_tac_toe;
					cout << "   ========================================== " << endl << endl;

					cout << "\a";

					if (exit_choice_tic_tac_toe == 1)
					{
						goto replay1;
					}

					else if (exit_choice_tic_tac_toe == 2)
					{
						welcome();
					}




					else if (exit_choice_tic_tac_toe == 0)
					{
						exit(0);
					}

					else
					{
						cout << "\a";
						cout << "\n    > INVALID SELECTION !!" << endl << endl;

						cout << "    Press Enter to Continue ...";
						cin.ignore();												cin.get();
						system("cls");
						welcome();
					}
				}
				break;
			}

			else
				//Statements to be executed if player chooses a marker which is not either "X" nor "O"
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				continue;
			}

		} while (true);
	}

	void drawboard()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t   * TIC TAC TOE\n    ============================== ";

		cout << "\n\n\n";
		cout << "               |     |     " << endl;
		cout << "            " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
		cout << "          _____|_____|_____" << endl;
		cout << "               |     |     " << endl;
		cout << "            " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
		cout << "          _____|_____|_____" << endl;
		cout << "               |     |     " << endl;
		cout << "            " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
		cout << "               |     |     " << endl << endl;
	}

	bool placemarker(int slot)
	{
		int row = slot / 3;
		//Converting the entered slot number into row co-ordinates (e.g : [1. If slot selected is 1 then (1/3 = 0)] OR [2. If slot selected is 5 then (5/3 = 1)] OR [3. If slot selected is 8 the (8/3 = 2)])

		int column;									//Column variable

		if (slot % 3 == 0)											//Condition to check if the module of entered slot gives zero

		{
			row = row - 1;
			//Co-ordinates of row would be the entered number divided by 3 minus 1 (e.g : [1. If slot selected is 3 then (3/3 - 1 = 0)] OR [2. If slot selected is 6 then (6/3 - 1 = 1)] OR [3. If slot selected is 9 then (9/3 - 1 = 2)])

			column = 2;													//Co-ordinate of column is 3 defined to be "2" as array starts from "0"

		}

		else
		{
			column = (slot % 3) - 1;
		}

		//Condition to avoid over-writing of previously filled slot (PS. The condition returns a value using Boolean variable)

		if (board[row][column] != 'X' && board[row][column] != 'O')
			//Condition that makes sure that the entered slot is not previously filled & then place maker of that player in that particular slot

		{
			board[row][column] = current_marker;								//Placing the marker if the condition is true
			return true;
		}

		else
		{
			return false;
			//Condition returns false if that slot is already filled, to avoid over-writing of the marker (that has been placed already)
		}
	}

	int winner()
	{
		for (int i = 0; i < 3; i++)										//Loop that checks each & every row & column

		{
			//This condition checks the rows
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
				//E.g : [1. If 1st row [(0,0) = (0,1) = (0,2)] is all filled with either "X" or "O"] OR [2. If 2nd row [(1,0) = (1,1) = (1,2)] is all filled with either "X" or "O"] OR [3. If 3rd row [(2,0) = (2,1) = (2,2)] is all filled with either "X" or "O"]

			{
				return current_player;
				//If the condition is true, then the player (who played the last move) will be the winner
			}


			//This condition checks the columns
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
				//E.g : [1. If 1st column [(0,0) = (1,0) = (2,0)] is all filled with either "X" or "O"] OR [2-. If 2nd column [(0,1) = (1,1) = (2,1)] is all filled with either "X" or "O"] or [3. If 3rd column [(0,1) = (1,2) = (2,2)] is all filled with either "X" or "O"]

			{
				return current_player;
				//If the condition is true, then the player (who played the last move) will be the winner
			}

		}

		//This condition checks the diagonal # 01
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
			//E.g : [If the 1st diagonal [(0,0) = (1,1) = (2,2)] is all filled with either "X" or "O"]
		{
			return current_player;
			//If the condition is true, then the player (who played the last move) will be the winner
		}


		//This condition checks the diagonal # 02
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
			//E.g : [If the 2nd diagonal [(0,1) = (1,1) = (2,0)] is all filled with either "X" or "O"]
		{
			return current_player;
			//If the condition is true, then the player (who played the last move) will be the winner
		}


		//Statements to be executed if no one wins
		else
		{
			return 0;
		}
	}

	void swap_player_and_marker()
	{
		//This condition checks if the marker has been used and, then replaces it with the other 
		if (current_marker == 'X')
		{
			current_marker = 'O';											//If the current marker being used is "X" then it is replaced by "O"
		}

		else
		{
			current_marker = 'X';											//If the current marker being used is "O" then it is replaced by "X"
		}

		//This condition checks whose turn was till now and, then replaces him with the other
		if (current_player == 1)
		{
			current_player = 2;
			//If the player who played the last move was "player # 01", then it is replaced by the "player # 02" 
		}

		else
		{
			current_player = 1;
			//If the player who played the last move was "player # 02", then it is replaced by the "player # 01" 
		}
	}

	void hangman()
	{
	replay2:
		int exit_choice_hang;

		//A string that contains different numbers for Hangman Game
		string words[] = {
			//------------------   Names of Countries (5)
			"pakistan",
			"oman",
			"philippines",
			"ethiopia",
			"indonesia",

			//------------------ Names of Sports (5)
			"football",
			"cricket",
			"tennis",
			"squash",
			"basketball",

			//------------------ Names of Food (5)
			"cake",
			"burger",
			"pizza",
			"brownies",
			"sandwich",

			//------------------ Names of Mobile brands (5)
			"qmobile",
			"samsung",
			"redmi",
			"oppo",
			"iphone",

			//------------------ Days of week (7)
			"monday",
			"tuesday",
			"wednesday",
			"thursday",
			"friday",
			"saturday",
			"sunday",
		};

		srand(time(NULL));
		//A function that allows computer to choose totally random number, each time the code is run


		int n = rand() % 27;
		//Declaring a random number (PS. %27 is written, because there are 27 words in the string array -- the total words from which computer can choose a random word)


		string word = words[n];											//Choosing a random word from the array of string


		string unknown(word.length(), '*');
		//Replacing each alphabet of "word-to-be-guessed" with asterisks (*)

		system("cls");
		obj.screen();
		cout << "\n\n\t   * HANGMAN \n    =============================================================== \n\n";
		//Instructions for Game

		cout << "    > Instructions: " << endl << endl;
		cout << "    1. The hidden word is represented by combination of stars (*)" << endl;
		cout << "    2. Type only \"ONE\" letter in one try" << endl;
		cout << "    3. You have maximum " << MAX_TRIES << " tries to guess the word" << endl << endl << endl;

		cout << "    > HINT: " << endl << endl;

		cout << "    The hidden word may be :" << endl;
		cout << "    1. Name of a country" << endl;
		cout << "    2. Name of sports" << endl;
		cout << "    3. Name of fast food" << endl;
		cout << "    4. Name of a mobile brand" << endl;
		cout << "    5. Day of week" << endl << endl;
		cout << "\n    > Press Enter key to begin! ";

		cin.ignore();
		//Ignoring all the below statements unless user hits Enter from Keyboard
		cin.get();

		system("cls");
		cout << endl << endl;
		obj.screen();
		cout << "\n\n\t   * HANGMAN \n    =========================== \n\n";
		//Main Game



		while (wrong_guesses < MAX_TRIES)
			//Loop that keeps running until all the guesses are used up
		{
			cout << "    > Hidden Word : " << unknown << " ";
			cout << "\n\n    Guess a letter: ";
			cin >> letter;

			if (letterFill(letter, word, unknown) == 0)
				//Filling the secret word with letter if the guess is correct, otherwise increment the number of wrong guesses

			{
				cout << "    Whoops! Wrong guess!" << endl;
				wrong_guesses++;
			}

			else if (word == unknown)
				//Displaying the results, if the user has guessed the correct word in the limited tries
			{
				cout << "    Yes! You're right!" << endl;
				cout << "    The word is \"" << word << "\"" << endl;

				cout << "    > Prize : $4000" << endl;

				cout << endl << endl << endl;
				cout << "   * Press [1] to Replay " << endl;
				cout << "   * Press [2] to Games List " << endl;
				cout << "   * Press [0] to EXIT " << endl;
				cout << "   =========================== \n";


				cout << "   Your Choice : ";
				cin >> exit_choice_hang;
				cout << "   =========================== " << endl << endl;

				cout << "\a";

				if (exit_choice_hang == 1)
				{
					goto replay2;
				}

				if (exit_choice_hang == 2)
				{
					welcome();
				}

				else if (exit_choice_hang == 0)
				{
					exit(0);
				}

				else
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue ...";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}

			}

			else
			{
				cout << endl << "    You found a letter! Great!" << endl;
			}

			cout << "    You have " << MAX_TRIES - wrong_guesses << " guesses left!" << endl;
			cout << "    =========================== " << endl << endl << endl << endl;
		}



		if (wrong_guesses == MAX_TRIES)
			//Displaying the results, if the user could not guess the correct word within the limited tries
		{
			cout << "    > YOU LOSE! YOU'VE BEEN HANGED!" << endl;
			cout << "    The hidden word was : \"" << word << "\"" << endl;

			cout << endl << endl << endl;

			cout << "   [1] Replay " << endl;
			cout << "   [2] Go Back " << endl;
			cout << "   [0] Exit " << endl;
			cout << "   =========================== \n";

			cout << "   Your Choice : ";
			cin >> exit_choice_hang;
			cout << "   =========================== " << endl << endl;

			cout << "\a";

			if (exit_choice_hang == 1)
			{
				goto replay2;
			}

			if (exit_choice_hang == 2)
			{
				welcome();
			}

			else if (exit_choice_hang == 0)
			{
				exit(0);
			}

			else
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}
	}

	int letterFill(char guess, string secretword, string& guessword)
	{
		int i;
		int matches = 0;
		int len = secretword.length();
		for (i = 0; i < len; i++)
		{
			// Did we already match this letter in a previous guess?
			if (guess == guessword[i])
				return 0;

			// Is the guess in the secret word?
			if (guess == secretword[i])
			{
				guessword[i] = guess;
				matches++;
			}
		}

		return matches;
	}

	void guess_the_number()
	{
	replay3:
		int exit_choice_gtn;

		srand((unsigned)time(0));
		//A function that allows computer to choose totally random number, each time the code is run

		actual_no = rand() % 100;
		//Declaring a random number (PS. %100 is written, because we want the random number to be in-between 1 and 100)

		system("cls");
		obj.screen();
		cout << "\n\n\t   * GUESS THE NUMBER \n    =========================================== \n\n";

		do
		{
			cout << "    Guess a number between 1 and 100: ";
			cin >> guessed_no;

			if (guessed_no > 100 || guessed_no < 1)
				//Statements to be executed if the entered number is NOT in between 1 and 100 (i.e. the input is incorrect)
			{
				cout << "    The entered number does not lie between 1 and 100!! \n" << endl << endl;
				continue;
			}

			else
				//Statements to be executed if the entered number is in between 1 and 100 (i.e. the input is correct)
			{
				if (guessed_no > actual_no)
				{
					if ((guessed_no == actual_no + 1) || (guessed_no == actual_no + 2) || (guessed_no == actual_no + 3))

						//Checking if the "entered value" is 1, 2 or 3 numbers greater than "that" random number which computer has generated
					{
						cout << "    You're getting closer to the answer :D \n" << endl << endl;
						tries_1 = tries_1 + 1;
						//Increasing the number of tries

						continue;
					}

					else
					{
						cout << "    Uh uh. Too High Number :/ \n" << endl << endl;

						tries_2 = tries_2 + 1;
						continue;
					}
				}

				else if (guessed_no < actual_no)
				{
					if ((guessed_no == actual_no - 1) || (guessed_no == actual_no - 2) || (guessed_no == actual_no - 3))

						//Checking if the "entered value" is 1, 2 or 3 numbers less than "that" random number which computer has generated
					{
						cout << "    You're getting closer to the answer :D \n" << endl << endl;

						tries_3 = tries_3 + 1;											//Increasing the number of tries
						continue;
					}

					else
					{
						cout << "    Uh uh. Too Low Number :/ \n" << endl << endl;
						tries_4 = tries_4 + 1;
						continue;
					}
				}

				else
				{
					cout << "    Yes!! You guessed it right!! ^_^\n" << endl;
					//If the entered number is same as that generated by computer

					tries_5 = tries_5 + 1;
				}
			}

			total_tries = tries_1 + tries_2 + tries_3 + tries_4 + tries_5;
			//Adding all the possible tries (the user made), to give total tries 


			cout << "\n\n    > You guessed the right number in " << total_tries << " tries";
			//Displaying results according to performance showed by the user while playing game

			if (total_tries < 10)
			{
				current_money = current_money + 5500;
				cout << "\n    > You seem to be a Pro Player!";
				cout << "\n    > Prize : $5500";
			}

			else if ((total_tries > 10) && (total_tries < 16))
			{
				current_money = current_money + 2000;
				cout << "\n    > You're a good player of this game!";
				cout << "\n    > Prize : $2000";
			}

			else
			{
				cout << "\n    > Uh uh. You need more practice!";
			}

			cout << endl << endl << endl;
			cout << "   [1] Replay " << endl;
			cout << "   [2] Go Back " << endl;
			cout << "   [0] Exit " << endl;
			cout << "   =========================================== \n";

			cout << "   Your Choice : ";
			cin >> exit_choice_gtn;
			cout << "   =========================================== " << endl << endl;

			cout << "\a";

			if (exit_choice_gtn == 1)
			{
				goto replay3;
			}

			if (exit_choice_gtn == 2)
			{
				welcome();
			}

			else if (exit_choice_gtn == 0)
			{
				exit(0);
			}

			else
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				continue;
			}

		} while (actual_no != guessed_no);
	}
};

class Police
{
public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * POLICE STATION\n    =================================================================== \n\n";

		start.underconstruction();

		cout << endl << endl;
		cout << "    Press Enter to Continue..";
		cin.ignore();
		cin.get();
		system("cls");
		start.city_screen();
	}
};

class Fire_Brigade : public Properties
{
public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * FIRE BRIGADE\n    =================================================================== \n\n";
		start.underconstruction();
		cout << endl << endl;
		cout << "    Press Enter to Continue..";
		cin.ignore();
		cin.get();
		system("cls");
		start.city_screen();
	}
};

class specifications
{
protected:
	char company[20] = " ";
	char color[20] = " ";
	int engine_power = 0;
	int transmission = 0;			//no of gears
	int year_of_manufacture = 0;
	int number_of_tyres = 0;
	int number_of_seats = 0;

public:
	virtual void get_data()
	{
		system("cls");

		cout << "\n\n\t  * VEHICLE REGISTRATION\n    ========================================== \n\n  ";

		cout << "  > Manufacturing Company\t:\t";
		cin.ignore();
		cin.getline(company, 20);

		cout << "    > Color\t\t\t:\t";
		cin.ignore();
		cin.getline(color, 20);

		cout << "    > Year of Manufacture\t:\t";
		cin >> year_of_manufacture;

		cout << "    > Engine Power\t\t:\t";
		cin >> engine_power;

		cout << "    > Number of Tyres\t\t:\t";
		cin >> number_of_tyres;

		cout << "    > No. of Seats\t\t:\t";
		cin >> number_of_seats;
	}
};

class Taxation_Department : public Properties
{
public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * EXCISE & TAXATION OFFICE\n    =================================================================== \n\n";
		start.underconstruction();
		cout << endl << endl;
		cout << "    Press Enter to Continue..";
		cin.ignore();
		cin.get();
		system("cls");
		start.city_screen();
	}

	void register_vehicle()
	{
		specifications S;

		system("cls");
		char ch;
		obj.screen();
		cout << "\n\n\t  * VEHICLE REGISTRATION\n    ================================ \n  ";

		cout << "    Select your vehicle type : " << endl;
		cout << "    [A] Motorbike" << endl;
		cout << "    [B] Scooter" << endl;
		cout << "    [C] Car" << endl;
		cout << "    [D] Van" << endl;
		cout << "    [E] Bus" << endl;
		cout << "    [F] Truck" << endl;
		cout << "    [G] Tractor" << endl;

		cout << "\n\n    [1] Go Back\n    [0] Exit\n    ================================ \n    ";

		cout << "Your Choice : ";
		cin >> ch;
		cout << "    ================================ " << endl << endl;
		cout << "\a";

		if ((ch == 'A') || (ch == 'B') || (ch == 'C') || (ch == 'D') || (ch == 'E') || (ch == 'F') || (ch == 'G'))
		{
			S.get_data();
		}

		else if (ch == '1')
		{
			welcome();
		}

		else if (ch == '0')
		{
			exit(0);
		}

		else
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
	}

	void pay_tax()
	{
		int tax = 0;

		cout << "    Your current money is $" << current_money << endl;
		if (current_money < 1000)
		{
			cout << "    You don't need to pay tax for this amount!";
		}

		else																							//Subsidy
		{
			if ((my_month == 4) || (my_month == 10))
			{
				tax = current_money * 0.2;
				current_money = current_money - tax;
				cout << "    You've paid the tax with a subsidy of $!" << endl << "    Your new balance is $" << current_money;
			}

			else
			{
				tax = current_money * 0.5;
				current_money = current_money - tax;
				cout << "    You've paid the tax!" << endl << "    Your new balance is $" << current_money;
			}
		}
	}

};

class Bank : public Properties																				//Deposited Money
{
private:
	double deposit_money = 0;
	double withdraw_money = 0;
	double total_amount_in_bank = 0;

	string self_phone_number_CC;
	string self_phone_number_No;

	string first_name;
	string surname_name;
	string email_address;
	string CNIC;
	string gender;
	int age;

	string username;
	string accepted_username;

	string password;
	string accepted_password;
	string confirm_password;

public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * BANK\n    ================================= \n    [1] Login\n    [2] Signup\n    [3] Bank Policy\n    [4] Go Out\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			login();
		}

		case 2:
		{
			signup();
		}

		case 3:
		{
			welcome();
		}

		case 4:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
		}
	}

	void write_on_file()
	{
		ofstream file;

		file.open("bank_account.dat");
		file.write((char*)this, sizeof(*this));
		file.close();
	}


	void signup()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t   * SIGNUP\n    =================================================== " << endl;								//SIGNUP PAGE

		cout << "    Please fill in the following" << endl << endl;

		cout << "    * First Name \t: \t";
		cin >> first_name;

		cout << "    * Last Name \t: \t";
		cin >> surname_name;

		cout << "    * Gender \t\t: \t";
		cin >> gender;

		cout << "    * CNIC No \t\t: \t";
		cin >> CNIC;

		cout << "    * Age \t\t: \t";
		cin >> age;

		cout << "    * Country Code \t: \t+";
		cin >> self_phone_number_CC;

		cout << "    * Phone Number \t: \t";
		cin >> self_phone_number_No;

		cout << "    * Email Address \t: \t";
		cin >> email_address;

		cout << "\n    =================================================== " << endl;

	obj:
		cout << endl << "    > NOTE : Confirmation Required!\n";
		cout << endl;

		cout << "    [1] Take out CNIC Card\n    [2] Abort the Process\n    [0] Exit\n    =================================================== \n    ";

		int choose;

		cout << "Your Choice : ";
		cin >> choose;
		cout << "    =================================================== " << endl << endl;
		cout << "\a";

		switch (choose)
		{
		case 1:
		{
			if ((first_name != my_first_name) || (surname_name != my_last_name))
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t   * SIGNUP\n    =================================================== " << endl;								//SIGNUP PAGE

				cout << endl << "    > ERROR : Wrong Data Input!\n";

				cout << "    The entered data does not match the data on CNIC Card. " << endl << endl << "    * Details: " << endl;
				cout << "    1. Your actual name is " << my_first_name << " " << my_last_name << ", not " << first_name << " " << surname_name << "!" << endl;

				if (age != my_age)
				{
					cout << "    2. Your actual age is " << my_age << ", not " << age << "!" << endl;
				}

				cout << "\a";
				cout << "\n    > SIGN UP CANCELLED !!" << endl << endl;
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}

			else
			{
			ship:
				system("cls");
				obj.screen();
				cout << "\n\n\t   * SIGNUP\n    ======================================================== " << endl;								//SIGNUP PAGE

				cout << "    The entered credentials have been successfully verified\n    Choose a username and password for your account" << endl << endl;

				cout << "    * Username : ";
				cin.ignore();
				cin >> accepted_username;

				cout << "    * Password : ";
				cin >> accepted_password;

				cout << "    * Confirm Password : ";
				cin >> confirm_password;

				cout << endl << endl;

				if (accepted_password != confirm_password)
				{
					cout << "\a";
					cout << "    > ERROR : Passwords do not match!\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					goto ship;

				}

				else
				{
					cout << "    > SUCCESS : Account Created Successfully!\n\n";
					cout << "\a";
					write_on_file();
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}
		}

		case 2:
		{
			cout << "\a";
			cout << "\n    > OPERATION ABORTED !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			obj.screen();
			cout << "\n\n\t  * SIGNUP\n    =================================================== \n";
			goto obj;
		}
		}
	}


	void login()
	{
		ifstream file;

		file.open("bank_account.dat");
		file.read((char*)this, sizeof(this));

		if (!file)
		{
			system("cls");
			cout << "\a";
			obj.screen();
			cout << "\n\n\t  * LOGIN\n    ================================= \n";

			cout << endl << "    > ERROR : No Such Record Found!\n\n";

			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}

		else
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t  * LOGIN\n    ================================= \n";

			cout << "    \"Enter your credentials to continue\"" << endl << endl;

			cout << "    Enter your Username : ";
			cin >> username;

			cout << "    Enter your Password : ";
			cin >> password;

			//if ((username == accepted_username) && (password == accepted_password))
			if (true)
			{
			go_back:
				system("cls");
				obj.screen();
				cout << "\n\n\t  * BANK\n    ================================= \n    [1] View Account Details\n    [2] Deposit Money\n    [3] Withdraw Money\n    [4] Go Back\n    [0] Exit\n    ================================= \n    ";

				char choose;

				cout << "Your Choice : ";
				cin >> choose;
				cout << "    ============================== " << endl << endl;

				switch (choose)
				{
				case '1':																												//View Account Details
				{
				profile_back:
					obj.screen();
					cout << "\n\n\t   * ACCOUNT DETAILS\n    =================================================== " << endl;

					cout << "\a";

					cout << "    Full Name \t\t: \t" << first_name << " " << surname_name << endl;
					cout << "    Gender \t\t: \t" << gender << endl;
					cout << "    CNIC No \t\t: \t" << CNIC << endl;
					cout << "    Age \t\t: \t" << age << " years" << endl;
					cout << "    Phone Number \t: \t+" << self_phone_number_CC << " " << self_phone_number_No << endl;
					cout << "    Email Address \t: \t" << email_address << endl;
					cout << "    Bank Balance \t: \t$" << total_amount_in_bank << endl;

					cout << endl << endl;

					cout << "    > Username : " << accepted_username << endl;
					cout << "    > Password : " << accepted_password << endl << endl;

					cout << "    [1] Go Back" << endl;
					cout << "    [0] Exit" << endl;

					cout << "    =================================================== \n";

					int account_choice;


					cout << "    Your Choice : ";
					cin >> account_choice;

					cout << "    =================================================== " << endl << endl;

					if (account_choice == 1)
					{
						goto go_back;
					}

					else if (account_choice == 0)
					{
						exit(0);
					}

					else
					{
						cout << "\a";
						cout << "\n    > INVALID SELECTION !!" << endl << endl;

						cout << "    Press Enter to Continue..";
						cin.ignore();
						cin.get();
						system("cls");
						goto profile_back;
					}
				}


				case '2':																																			//Deposit Money
				{
				invalid:
					obj.screen();
					cout << "\n\n\t   * DEPOSIT MONEY\n    ============================================== " << endl;

					cout << "    Amount to deposit : $";
					cin >> deposit_money;

					if (deposit_money == 0)
					{
						cout << endl << "    > NOTE : No Amount Deposited!\n\n";

						cout << "    [1] Go Back" << endl;
						cout << "    [0] Exit" << endl;
						cout << "    ========================================= \n";

						int lol;

						cout << "    Your Choice : ";
						cin >> lol;
						cout << "    ========================================= " << endl << endl;
						cout << "\a";
						if (lol == 1)
						{
							system("cls");
							goto go_back;
						}

						else if (lol == 0)
						{
							exit(0);
						}

						else
						{
							cout << "\a";
							cout << "\n    > INVALID SELECTION !!" << endl << endl;

							cout << "    Press Enter to Continue..";
							cin.ignore();
							cin.get();
							system("cls");
							obj.screen();
							cout << "\n\n\t   * DEPOSIT MONEY\n    ============================================== " << endl;
							goto cmon;
						}
					}

					else if (deposit_money < 0)
					{
						cout << "\a";
						cout << "\n    > INVALID INPUT !!" << endl << endl;

						cout << "    Press Enter to Continue..";
						cin.ignore();
						cin.get();
						system("cls");
						goto invalid;
					}

					else
					{
						if (current_money == 0)
						{
							cout << endl << "    > ERROR : You don't have any amount to deposit!\n\n";

							cout << "    Press Enter to Continue..";
							cin.ignore();
							cin.get();
							system("cls");
							goto go_back;
						}

						else
						{
						cmon:

							if (current_money > deposit_money)
							{
								cout << endl << "    > Deposit Successful\n\n";

								current_money = current_money - deposit_money;
								total_amount_in_bank = total_amount_in_bank + deposit_money;
							}

							else
							{
								cout << endl << "    > ERROR : Insufficient Funds!\n\n";
							}

							cout << "    [1] Go Back" << endl;
							cout << "    [0] Exit" << endl;
							cout << "    ========================================= \n";

							int lol;

							cout << "    Your Choice : ";
							cin >> lol;
							cout << "    ========================================= " << endl << endl;
							cout << "\a";
							if (lol == 1)
							{
								system("cls");
								goto go_back;
							}

							else if (lol == 0)
							{
								exit(0);
							}

							else
							{
								cout << "\a";
								cout << "\n    > INVALID SELECTION !!" << endl << endl;

								cout << "    Press Enter to Continue..";
								cin.ignore();
								cin.get();
								system("cls");
								obj.screen();
								cout << "\n\n\t   * DEPOSIT MONEY\n    ============================================== " << endl;
								goto cmon;
							}
						}
					}
				}


				case '3':																																			//Withdraw Money
				{
				myscope:
					obj.screen();
					cout << "\n\n\t   * WITHDRAW MONEY\n    ============================================== " << endl;

					cout << "    Amount to withdraw : $";
					cin >> withdraw_money;

					if (withdraw_money == 0)
					{
					why:
						cout << endl << "    > NOTE : No Amount Withdrawn!\n\n";

						cout << "    [1] Go Back" << endl;
						cout << "    [0] Exit" << endl;
						cout << "    ========================================= \n";

						int me;

						cout << "    Your Choice : ";
						cin >> me;
						cout << "    ========================================= " << endl << endl;
						cout << "\a";
						if (me == 1)
						{
							system("cls");
							goto go_back;
						}

						else if (me == 0)
						{
							exit(0);
						}

						else
						{
							cout << "\a";
							cout << "\n    > INVALID SELECTION !!" << endl << endl;

							cout << "    Press Enter to Continue..";
							cin.ignore();
							cin.get();
							system("cls");
							obj.screen();
							cout << "\n\n\t   * WITHDRAW MONEY\n    ============================================== " << endl;
							goto why;
						}
					}

					else if (withdraw_money < 0)
					{
						cout << "\a";
						cout << "\n    > INVALID INPUT !!" << endl << endl;

						cout << "    Press Enter to Continue..";
						cin.ignore();
						cin.get();
						system("cls");
						goto myscope;
					}

					else
					{
						if (withdraw_money == 0)
						{
							cout << endl << "    > ERROR : You don't have any bank balance!\n\n";

							cout << "    Press Enter to Continue..";
							cin.ignore();
							cin.get();
							system("cls");
							goto go_back;
						}

						else
						{
						city:

							if (total_amount_in_bank > withdraw_money)
							{
								cout << endl << "    > Withdrawal Successful\n\n";

								current_money = current_money + withdraw_money;
								total_amount_in_bank = total_amount_in_bank - withdraw_money;
							}

							else
							{
								cout << endl << "    > ERROR : Insufficient Funds!\n\n";
							}

							cout << "    * [1] Go Back" << endl;
							cout << "    * [0] Exit" << endl;
							cout << "    ========================================= \n";

							int o;

							cout << "    Your Choice : ";
							cin >> o;
							cout << "    ========================================= " << endl << endl;
							cout << "\a";
							if (o == 1)
							{
								system("cls");
								goto go_back;
							}

							else if (o == 0)
							{
								exit(0);
							}

							else
							{
								cout << "\a";
								cout << "\n    > INVALID SELECTION !!" << endl << endl;

								cout << "    Press Enter to Continue..";
								cin.ignore();
								cin.get();
								system("cls");

								cout << "\n\n\t   * DEPOSIT MONEY\n    ============================================== " << endl;
								goto city;
							}
						}
					}
				}

				case '4':
				{
					system("cls");
					welcome();
				}

				case '0':
				{
					exit(0);
				}

				default:
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					goto go_back;
				}
				}
			}

			else if ((username != accepted_username) && (password == accepted_password))
			{
				cout << "\a";
				cout << "    ========================================= \n";
				cout << "    The username is not valid!" << endl;
				cout << "    Access Denied!" << endl;
				cout << "    ========================================= ";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}

			else if ((username == accepted_username) && (password != accepted_password))
			{
				cout << "\a";
				cout << "    ========================================= \n";
				cout << "    The password is not valid!" << endl;
				cout << "    Access Denied!" << endl;
				cout << "    ========================================= ";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}

			else {
				cout << "\a";
				cout << "    ========================================= \n";
				cout << "    The entered credentials are not valid!" << endl;
				cout << "    Access Denied!" << endl;
				cout << "    ========================================= ";
				cout << "\a";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		file.close();
	}

	void bank_policy()
	{
		cout << "UNDER CONSTRUCTION";
	}
};

class Hospital : public Properties
{
private:
	float hospital_bill = 0;

public:
	void welcome()
	{
		cout << "\n\n\t  * HOSPITAL\n    =================================================================== \n\n";
		start.underconstruction();
		cout << endl << endl;
		cout << "    Press Enter to Continue..";
		cin.ignore();
		cin.get();
		system("cls");
		start.city_screen();
	}

	void medical_store()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * MEDICAL STORE\n    ================================= \n    [1] Buy Medicine\n    [2] View Bill\n    [3] Meet Psychologist\n    [4] Leave\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

	}
};

class Market : public Properties
{
private:
	int luck_fruits;

public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * MARKET\n    ================================= \n    [1] Fruits\n    [2] Fast Food\n    [3] Garments\n    [?] ????? ??????\n    [4] Go Out\n    [0] Exit\n    ================================= \n    ";

		char choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case '1':
		{
			fruits();
		}

		case '2':
		{
			fast_food();
		}

		case '3':
		{
			garments();
		}

		case '?':
		{
			black_market();
		}

		case '4':
		{
			start.city_screen();
		}

		case '0':
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
		}
	}

	void fruits()
	{
	takes_money:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * FRUITS\n";
		cout << "    ================================================ \n";
		cout << "    > Enter the code to buy fruit. \n    > Press [1] to Go Back or [0] to Exit\n\n";


		cout << "    ================================================ \n";

		cout << "       Code\t     Item\t\t    Price\n    ================================================\n";
		available_fruits();

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		try
		{
			switch (choice)
			{
			case 1:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}

			case 8690:
			{
				if (current_money < 1.01)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.01;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Apple Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 7176:
			{
				if (current_money < 0.46)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 0.46;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Banana Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 5645:
			{
				if (current_money < 1.38)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.38;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Coconut Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}


			case 9131:
			{
				if (current_money < 6.52)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 6.52;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Dates Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 6379:
			{
				if (current_money < 0.94)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 0.94;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Guava Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 2842:
			{
				if (current_money < 4.99)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 4.99;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Mango Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 3032:
			{
				if (current_money < 1.81)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.81;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Lychee Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 1897:
			{
				if (current_money < 1.81)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.81;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Peach Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 2005:
			{
				if (current_money < 4.53)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 4.53;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Pineapple Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 5859:
			{
				if (current_money < 2.78)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.78;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Strawberries Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 8454:
			{
				if (current_money < 1.36)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.36;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Watermelon Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 6485:
			{
				if (current_money < 1.01)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.01;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Pomegranate Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 9781:
			{
				if (current_money < 0.99)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 0.99;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Grapes Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 2523:
			{
				if (current_money < 4.53)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 4.53;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Blackberries Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 1236:
			{
				if (current_money < 3.57)
				{
					system("cls");
					throw 202;
				}

				else
				{
					system("cls");
					current_money = current_money - 3.57;
					obj.screen();
					cout << "\n\n\t  * FRUITS\n";
					cout << "    ===================================== \n";
					cout << "    > Pear Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto takes_money;
			}
			}
		}

		catch (int b)
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t  * FRUITS\n";
			cout << "    ====================================== \n";
			cout << "    > Insufficent Funds! Purchase Failed!\n\n";
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
	}

	void available_fruits()
	{
		srand((unsigned)time(0));
		luck_fruits = rand() % 70;

		if (luck_fruits % 2 == 0)
		{
			cout << "      #8690\t     Apple\t\t    $1.01" << endl;
			cout << "      #7176\t     Banana\t\t    $0.46" << endl;
			cout << "      #5645\t     Coconut\t\t    $1.38" << endl;
			cout << "      #9131\t     Dates\t\t    $6.52 " << endl;
			cout << "      #6379\t     Guava\t\t    $0.94 " << endl;
		}

		else if (luck_fruits % 5 == 0)
		{
			cout << "      #2842\t     Mango\t\t    $4.99" << endl;
			cout << "      #3032\t     Lychee\t\t    $1.81" << endl;
			cout << "      #1897\t     Peach\t\t    $1.81" << endl;
			cout << "      #2005\t     Pineapple\t\t    $4.53 " << endl;
			cout << "      #5859\t     Strawberries\t    $2.78 " << endl;
		}

		else if (luck_fruits % 7 == 0)
		{
			cout << "      #8454\t     Watermelon\t\t    $1.36 " << endl;
			cout << "      #6485\t     Pomegranate\t    $1.01 " << endl;
			cout << "      #9781\t     Grapes\t\t    $0.99 " << endl;
			cout << "      #2523\t     Blackberries\t    $4.53 " << endl;
			cout << "      #1236\t     Pear\t\t    $3.57 " << endl;
		}

		else
		{
			cout << endl << "    > ERROR : Fruits Are Out of Stock..";
			cin.ignore();
			cin.get();
			welcome();
		}
	}

	void fast_food()
	{
	gives_money:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * FAST FOOD\n";
		cout << "    ================================================ \n";
		cout << "    > Enter the code to buy. \n    > Press [1] to Go Back or [0] to Exit\n\n";


		cout << "    ================================================ \n";

		cout << "       Code\t     Item\t\t    Price\n    ================================================\n";
		available_fast_food();

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		try
		{
			switch (choice)
			{
			case 1:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}

			case 4010:
			{
				if (current_money < 7.08)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 7.08;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Sandwich Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 9030:
			{
				if (current_money < 2.71)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.71;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Fried Chicken Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 7082:
			{
				if (current_money < 0.82)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 0.82;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Noodles Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 5777:
			{
				if (current_money < 7.51)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 7.51;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Pancake Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 3083:
			{
				if (current_money < 1.69)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.69;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Tacos Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 6750:
			{
				if (current_money < 2.95)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.95;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Kebab Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 4961:
			{
				if (current_money < 1.64)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.64;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > French Fries Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 1221:
			{
				if (current_money < 6.27)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 6.27;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Hamburger Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 7745:
			{
				if (current_money < 2.04)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.04;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Hot Dog Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 9400:
			{
				if (current_money < 0.99)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 0.99;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Donut Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 6482:
			{
				if (current_money < 7.08)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 7.08;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Pizza Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 3624:
			{
				if (current_money < 2.15)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.15;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Chicken Roll Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 5399:
			{
				if (current_money < 1.87)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.87;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Ice Cream Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 4802:
			{
				if (current_money < 2.00)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 2.00;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Cheeseburger Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			case 8267:
			{
				if (current_money < 1.73)
				{
					system("cls");
					throw 303;
				}

				else
				{
					system("cls");
					current_money = current_money - 1.73;
					obj.screen();
					cout << "\n\n\t  * FAST FOOD\n";
					cout << "    ===================================== \n";
					cout << "    > Nuggets Purchased Successfully!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					welcome();
				}
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				goto gives_money;
			}
			}
		}

		catch (int b)
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t  * FAST FOOD\n";
			cout << "    ====================================== \n";
			cout << "    > Insufficent Funds! Purchase Failed!\n\n";
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
	}

	void available_fast_food()
	{
		srand((unsigned)time(0));
		luck_fruits = rand() % 70;

		if (luck_fruits % 2 == 0)
		{
			cout << "      #4010\t     Sandwich\t\t    $7.08" << endl;
			cout << "      #9030\t     Fried Chicken\t    $2.71" << endl;
			cout << "      #7082\t     Noodles\t\t    $0.82" << endl;
			cout << "      #5777\t     Pancake\t\t    $7.51 " << endl;
			cout << "      #3083\t     Tacos\t\t    $1.69 " << endl;
		}

		else if (luck_fruits % 5 == 0)
		{
			cout << "      #6750\t     Kebab\t\t    $2.95 " << endl;
			cout << "      #4961\t     French Fries\t    $1.64 " << endl;
			cout << "      #1221\t     Hamburger\t\t    $6.27 " << endl;
			cout << "      #7745\t     Hot Dog\t\t    $2.04 " << endl;
			cout << "      #9400\t     Donut\t\t    $0.99 " << endl;
		}

		else if (luck_fruits % 7 == 0)
		{
			cout << "      #6482\t     Pizza\t\t    $7.08 " << endl;
			cout << "      #3624\t     Chicken Roll\t    $2.15 " << endl;
			cout << "      #5399\t     Ice Cream\t\t    $1.87 " << endl;
			cout << "      #4802\t     Cheeseburger\t    $2.00 " << endl;
			cout << "      #8267\t     Nuggets\t\t    $1.73 " << endl;
		}

		else
		{
			cout << endl << "    > ERROR : We Are Out of Stock..";
			cin.ignore();
			cin.get();
			welcome();
		}
	}

	void garments()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * GARMENTS\n    ================================= \n    [1] Shades\n    [2] Clothes\n    [3] Go Back\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			shades();
		}

		case 2:
		{
			clothes();
		}

		case 3:
		{
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			garments();
		}
		}
	}

	void shades()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SHADES\n    ================================= \n      > NOTE : Each shade costs $5" << endl << endl << "    [1] Red Shades\n    [2] Green Shades\n    [3] Blue Shades\n    [4] Yellow Shades\n    [5] Aqua Shades\n    [6] Purple Shades\n    [7] Remove Shades\n    [8] Go Back\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		try
		{
			switch (choice)
			{
			case 1:																				//Red
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 47");
					shades();
					break;
				}
			}

			case 2:																				//Green
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 27");
					shades();
					break;
				}
			}

			case 3:																				//Blue
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 17");
					shades();
					break;
				}
			}

			case 4:																				//Yellow
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 67");
					shades();
					break;
				}
			}

			case 5:																				//Aqua
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 37");
					shades();
					break;
				}
			}

			case 6:																				//Purple
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 57");
					shades();
					break;
				}
			}

			case 7:																				//Remove
			{
				if (current_money < 5)
				{
					throw 404;
				}

				else
				{
					system("color 07");
					shades();
					break;
				}
			}

			case 8:
			{
				garments();
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				shades();
			}
			}
		}

		catch (int c)
		{
			cout << "    > Insufficent Funds! Purchase Failed!\n\n";
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			garments();
		}
	}

	void clothes()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CLOTHES\n    ================================= \n     > NOTE : Each dress costs $20" << endl << endl << "    [1] Red Dress\n    [2] Green Dress\n    [3] Blue Dress\n    [4] Yellow Dress\n    [5] Aqua Dress\n    [6] Purple Dress\n    [7] Usual Dress\n    [8] Go Back\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		try
		{
			switch (choice)
			{
			case 1:																				//Red
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 4");
					clothes();
					break;
				}
			}

			case 2:																				//Green
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 2");
					clothes();
					break;
				}
			}

			case 3:																				//Blue
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 1");
					clothes();
					break;
				}
			}

			case 4:																				//Yellow
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 6");
					clothes();
					break;
				}
			}

			case 5:																				//Aqua
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 3");
					clothes();
					break;
				}
			}

			case 6:																				//Purple
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 5");
					clothes();
					break;
				}
			}

			case 7:																				//Usual
			{
				if (current_money < 20)
				{
					throw 404;
				}

				else
				{
					system("color 7");
					clothes();
					break;
				}
			}

			case 8:
			{
				garments();
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				clothes();
			}
			}
		}

		catch (int c)
		{
			cout << "    > Insufficent Funds! Purchase Failed!\n\n";
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			garments();
		}
	}

	void black_market()
	{
		system("cls");
		obj.screen();
		if (my_age < 25)
		{
			cout << "\n\n\t  * ????? ??????\n    ================================= \n";
			cout << "    > ERROR : Access to this section of town is forbidden!" << endl;
			cout << "    > REASON : Under Age.." << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			welcome();
		}

		else
		{
			cout << "\n\n\t  * BL@cK M@Rk3T\n    ================================= \n    [1] Sell Organs\n    [2] Buy Drugs\n    [3] Buy Illegal Weapons\n    [4] Buy Smuggled Cars\n    [5] Visit Club\n    [6] Go Back\n    [0] Exit\n    ================================= \n    ";

			int choice;

			cout << "Your Choice : ";
			cin >> choice;
			cout << "    ================================= " << endl << endl;
			cout << "\a";

			switch (choice)
			{
			case 1:
			{
				sell_organs();
			}

			case 2:
			{
				buy_drugs();
			}

			case 3:
			{
				buy_weapons();
			}

			case 4:
			{
				buy_smuggled_cars();
			}

			case 5:
			{
				visit_club();
			}

			case 6:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}
			}
		}
	}

	void sell_organs()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * SELL ORGANS \n    ================================================ \n";

		cout << "    > DISCLAIMER : Sell at your own risk!\n    > Press [1] to Go Back or [0] to Exit\n\n";

		cout << "    ================================================ \n";

		cout << "       Code\t     Organ\t\t    Rate\n    ================================================\n";

		cout << "      #7582\t     Eye\t\t  $150,000" << endl;
		cout << "      #2354\t     Half Liver\t\t  $278,505" << endl;
		cout << "      #5974\t     Kidney\t\t  $262,000" << endl;
		cout << "      #1327\t     Arm\t\t  $124,800 " << endl;
		cout << "      #9140\t     Leg\t\t  $115,200 " << endl;

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			black_market();
		}

		case 0:
		{
			exit(0);
		}

		case 7582:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				system("cls");

				my_health = my_health - 1;

				current_money = current_money + 150000;

				obj.screen();
				cout << "\n\n\t  * SELL ORGANS\n";
				cout << "    =============================== \n";
				cout << "    > MESSAGE : Eye sold for $150,000\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		case 2354:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				system("cls");

				my_health = my_health - 3;

				current_money = current_money + 278505;
				obj.screen();
				cout << "\n\n\t  * SELL ORGANS\n";
				cout << "    ======================================== \n";
				cout << "    > MESSAGE : Half Liver sold for $278,505\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		case 5974:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				system("cls");

				my_health = my_health - 2;

				current_money = current_money + 262000;
				obj.screen();
				cout << "\n\n\t  * SELL ORGANS\n";
				cout << "    ======================================== \n";
				cout << "    > MESSAGE : Kidney sold for $262,000\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		case 1327:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				system("cls");

				my_health = my_health - 1;

				current_money = current_money + 124800;
				obj.screen();
				cout << "\n\n\t  * SELL ORGANS\n";
				cout << "    ======================================== \n";
				cout << "    > MESSAGE : Arm sold for $124,800\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		case 9140:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				system("cls");

				my_health = my_health - 2;

				current_money = current_money + 115200;
				obj.screen();
				cout << "\n\n\t  * SELL ORGANS\n";
				cout << "    ======================================== \n";
				cout << "    > MESSAGE : Leg sold for $115,200\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			sell_organs();
		}
		}
	}

	void buy_drugs()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * DRUGS \n    ================================================ \n";

		cout << "    > DISCLAIMER : Take at your own risk!\n    > Press [1] to Go Back or [0] to Exit\n\n";

		cout << "    ================================================ \n";

		cout << "       Code\t     Drug\t\t    Rate\n    ================================================\n";

		cout << "      #1362\t     Methamphetamine\t  $1100 " << endl;
		cout << "      #7393\t     Cocaine\t\t  $3750 " << endl;
		cout << "      #4002\t     Heroin\t\t  $4950 " << endl;
		cout << "      #9862\t     Weed\t\t  $2650 " << endl;
		cout << "      #2022\t     Marijuana\t\t  $5500 " << endl;

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			black_market();
		}

		case 0:
		{
			exit(0);
		}

		case 1362:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				if (current_money < 1100)
				{
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > Insufficient Funds! Purchase Failed!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}

				else
				{
					system("cls");

					my_health = my_health - 1;

					current_money = current_money - 1100;
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > MESSAGE : Methamphetamine Consumed..\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}
			}
		}

		case 7393:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				if (current_money < 3750)
				{
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > Insufficient Funds! Purchase Failed!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}

				else
				{
					system("cls");

					my_health = my_health - 1;

					current_money = current_money - 3750;
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    =============================== \n";
					cout << "    > MESSAGE : Cocaine Consumed..\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}
			}
		}

		case 4002:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				if (current_money < 4950)
				{
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > Insufficient Funds! Purchase Failed!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}

				else
				{
					system("cls");

					my_health = my_health - 1;

					current_money = current_money - 4950;
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ============================== \n";
					cout << "    > MESSAGE : Heroin Consumed..\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}
			}
		}

		case 9862:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				if (current_money < 2650)
				{
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > Insufficient Funds! Purchase Failed!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}

				else
				{
					system("cls");

					my_health = my_health - 1;

					current_money = current_money - 2650;
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ============================ \n";
					cout << "    > MESSAGE : Weed Consumed..\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}
			}
		}

		case 2022:
		{
			if (my_health < 1)
			{
				start.death();
			}

			else
			{
				if (current_money < 5500)
				{
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ======================================= \n";
					cout << "    > Insufficient Funds! Purchase Failed!\n\n";
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}

				else
				{
					system("cls");

					my_health = my_health - 1;

					current_money = current_money - 5500;
					obj.screen();
					cout << "\n\n\t  * DRUGS\n";
					cout << "    ============================ \n";
					cout << "    > MESSAGE : Marijuana Consumed..\n\n";

					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					buy_drugs();
				}
			}
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			buy_drugs();
		}
		}
	}

	void buy_weapons()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * ILLEGAL WEAPONS \n    ================================================ \n";

		cout << "    > Press [1] to Go Back or [0] to Exit\n\n";

		cout << "    ================================================ \n";

		cout << "       Code\t     Weapon\t\t    Rate\n    ================================================\n";

		cout << "      #6447\t     Flamethrower\t  $4150 " << endl;
		cout << "      #4266\t     RPG-7\t\t  $3000 " << endl;
		cout << "      #3147\t     Striker 12\t\t  $2200 " << endl;
		cout << "      #9997\t     Krinkov Pistol\t  $1800 " << endl;
		cout << "      #2244\t     Crossbow\t\t  $250 " << endl;

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			black_market();
		}

		case 0:
		{
			exit(0);
		}

		case 6447:
		{
			if (current_money < 4150)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}

			else
			{
				system("cls");
				current_money = current_money - 4150;
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ====================================== \n";
				cout << "    > Flamethrower Purchased Successfully!\n\n";

				my_gun = '[';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}
		}

		case 4266:
		{
			if (current_money < 3000)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}

			else
			{
				system("cls");

				current_money = current_money - 3000;
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ====================================== \n";
				cout << "    > RPG-7 Purchased Successfully!\n\n";

				my_gun = ']';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}
		}

		case 3147:
		{
			if (current_money < 2200)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}

			else
			{
				system("cls");

				current_money = current_money - 2200;
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ====================================== \n";
				cout << "    > Striker 12 Purchased Successfully!\n\n";

				my_gun = '{';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}
		}

		case 9997:
		{
			if (current_money < 1800)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}

			else
			{
				system("cls");

				current_money = current_money - 1800;
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ====================================== \n";
				cout << "    > Krinkov Pistol Purchased Successfully!\n\n";

				my_gun = '}';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}
		}

		case 2244:
		{
			if (current_money < 250)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}

			else
			{
				system("cls");

				current_money = current_money - 250;
				obj.screen();
				cout << "\n\n\t  * ILLEGAL WEAPONS\n";
				cout << "    ====================================== \n";
				cout << "    > Crossbow Purchased Successfully!\n\n";

				my_gun = '|';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_weapons();
			}
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			buy_weapons();
		}
		}
	}

	void buy_smuggled_cars()
	{

		system("cls");
		obj.screen();
		cout << "\n\n\t  * SMUGGLED CARS \n    ================================================ \n";

		cout << "    > Press [1] to Go Back or [0] to Exit\n\n";

		cout << "    ================================================ \n";

		cout << "       Code\t     Vehicle\t\t    Rate\n    ================================================\n";

		cout << "      #6306\t     Lexus LX570\t   $86,830 " << endl;
		cout << "      #5154\t     Toyota Fortuner\t   $62,945 " << endl;
		cout << "      #9543\t     Land Cruiser TXL\t   $62,742 " << endl;
		cout << "      #3903\t     Hilux Vigo\t\t   $29,986 " << endl;
		cout << "      #1258\t     Mercedes AMG GTR\t   $162,900 " << endl;

		cout << "\n    ================================================ " << endl;

		int choice;

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ================================================ " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			black_market();
		}

		case 0:
		{
			exit(0);
		}

		case 6306:
		{
			if (current_money < 86830)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}

			else
			{
				system("cls");
				current_money = current_money - 86830;
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ====================================== \n";
				cout << "    > Lexus LX570 Purchased Successfully!\n\n";

				my_car = '[';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}
		}

		case 5154:
		{
			if (current_money < 62945)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}

			else
			{
				system("cls");
				current_money = current_money - 62945;
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ====================================== \n";
				cout << "    > Toyota Fortuner Purchased Successfully!\n\n";

				my_car = ']';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}
		}

		case 9543:
		{
			if (current_money < 62742)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}

			else
			{
				system("cls");
				current_money = current_money - 62742;
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ====================================== \n";
				cout << "    > Land Cruiser TXL Purchased Successfully!\n\n";

				my_car = '{';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}
		}

		case 3903:
		{
			if (current_money < 29986)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}

			else
			{
				system("cls");
				current_money = current_money - 29986;
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ====================================== \n";
				cout << "    > Hilux Vigo Purchased Successfully!\n\n";

				my_car = '}';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}
		}

		case 1258:
		{
			if (current_money < 162900)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ======================================= \n";
				cout << "    > Insufficient Funds! Purchase Failed!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}

			else
			{
				system("cls");
				current_money = current_money - 162900;
				obj.screen();
				cout << "\n\n\t  * SMUGGLED CARS\n";
				cout << "    ========================================== \n";
				cout << "    > Mercedes AMG GTR Purchased Successfully!\n\n";

				my_car = '|';

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				buy_smuggled_cars();
			}
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			buy_smuggled_cars();
		}
		}
	}

	void visit_club()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CLUB\n    ========================================== \n";
		cout << "      \"Food, drink, and music for the night!\"\n\n";
		cout << "    [1] Dance\n    [2] Cafe\n    [0] Exit\n    ========================================== \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ========================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (current_money >= 150)
			{
				current_money = current_money - 150;

			club:

				system("cls");
				obj.screen();
				cout << "\n\n\t  * CLUB\n    ========================================== \n";
				cout << "      \"Food, drink, and music for the night!\"\n\n";
				for (int i = 0; i < 3; i++)
				{
					system("color 47");												//Red
					system("color 27");												//Green
					system("color 17");												//Blue
					system("color 67");												//Yellow
					system("color 37");												//Aqua
					system("color 57");												//Purple
					system("color 07");												//White
				}

				cout << "    [1] Dance Again\n    [2] Go Back\n    [0] Exit\n    ========================================== \n    ";
				int choice;

				cout << "Your Choice : ";
				cin >> choice;
				cout << "    ========================================== " << endl << endl;
				cout << "\a";

				switch (choice)
				{
				case 1:
				{
					system("cls");
					goto club;
				}

				case 2:
				{
					visit_club();
				}

				case 0:
				{
					exit(0);
				}

				default:
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					visit_club();
				}
				}
			}

			else
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t  * CLUB\n    ========================================== \n";

				cout << "    > ERROR : Couldn't Purchase Ticket! Insufficient Funds!\n\n";
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				visit_club();
			}
		}

		case 2:
		{
			system("cls");
			fast_food();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			black_market();
		}
		}
	}
};

Market market;

class Home : public Properties
{
private:

	int s;
	int x;
	int y;

	int day;
	int month;
	int year;

public:

	Home()
	{
		s = 0;
		x = 0;
		y = 0;

		day = 0;
		month = 0;
		year = 0;
	}

	Home(int a, int b, int c, int d, int e, int f)
	{
		s = a;
		x = b;
		y = c;

		day = d;
		month = e;
		year = f;
	}

	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * HOME\n    ================================= \n    [1] Time Travel\n    [2] Sleep\n    [3] Eat From Market\n    [4] Go Out\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			time_travel();
		}

		case 2:
		{
			sleep();
		}

		case 3:
		{
			int luck;
			srand((unsigned)time(0));
			luck = rand() % 100;

			if (luck % 2 == 0)
			{
				system("cls");
				market.fast_food();
			}

			else
			{
				system("cls");
				market.fruits();
			}
		}

		case 4:
		{
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
		}
	}

	void time_travel()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * TIME MACHINE\n    ===================================== \n";
		cout << "     \"What if you're already in future?\"" << endl << endl;

		cout << "      * Day (dd)\t:\t";
		cin >> day;
		cout << "      * Month (mm)\t:\t";
		cin >> month;
		cout << "      * Year (yyyy)\t:\t";
		cin >> year;

		if ((day <= 0) || (day > 31) || (month <= 0) || (month > 12) || (year <= 0) || (year > 6000))
		{
			cout << endl << endl << "    > ERROR : Unreachable Coordinates!\n\n";

			cout << "    [1] Go Back" << endl;
			cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

			int choice;

			cout << "    Your Choice : ";
			cin >> choice;
			cout << "    ===================================== " << endl << endl;
			cout << "\a";

			switch (choice)
			{
			case 1:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
			}
		}

		else if ((day == my_day) && (month == my_month) && (year == my_year))
		{
			cout << endl << endl << "    > ERROR : Same Time Domain!\n\n";

			cout << "    [1] Go Back" << endl;
			cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

			int choice;

			cout << "    Your Choice : ";
			cin >> choice;
			cout << "    ===================================== " << endl << endl;
			cout << "\a";

			switch (choice)
			{
			case 1:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
			}
		}

		else
		{
			if (year > my_year)																										//Travel to Future
			{
				if (my_age + (year - my_year) > 100)
				{
					cout << endl << "    > ERROR : Time Jump Makes You More Than 100 Years Old!\n\n";
				}

				else
				{
					future_travel();
					cout << endl << endl << "    > MESSAGE : Time Travel Successful!\n\n";
				}
			}

			if (year < my_year)																										//Travel to Past
			{
				if ((my_age + (year - my_year)) < 6)
				{
					cout << endl << "    > ERROR : Time Jump Makes You Less Than 6 Years Old!\n\n";
				}

				past_travel();
				cout << endl << endl << "    > MESSAGE : Time Travel Successful!\n\n";
			}

			cout << "    [1] Leave Time Machine" << endl;
			cout << "    [0] Exit" << endl << "    ===================================== " << endl << endl;

			int choice;

			cout << "    Your Choice : ";
			cin >> choice;
			cout << "    ===================================== " << endl << endl;
			cout << "\a";

			switch (choice)
			{
			case 1:
			{
				welcome();
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}
			}
		}
	}

	void future_travel()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * TIME MACHINE\n    ===================================== \n";
		cout << "             > Status : Present" << endl << endl;

		for (x = 0; x <= 8; x++)
		{
			cout << "               ";
			for (s = 8; s > x; s--)
			{
				cout << " ";
			}

			for (y = 0; y < x; y++)
			{
				Sleep(85);
				cout << ". ";
			}

			cout << "\n";
		}

		for (x = 1; x < 8; x++)
		{
			cout << "               ";
			for (s = 0; s < x; s++)
			{
				cout << " ";
			}

			for (y = 8; y > x; y--)
			{
				Sleep(85);
				cout << ". ";
			}

			cout << "\n";
		}

		my_age += year - my_year;
		my_year = year;
		my_month = month;
		my_day = day;

		obj.screen();

		cout << "\n\n\t  * TIME MACHINE\n    ===================================== \n";
		cout << "             > Status : Future" << endl << endl;

		for (x = 0; x <= 8; x++)
		{
			cout << "               ";
			for (s = 8; s > x; s--)
			{
				cout << " ";
			}

			for (y = 0; y < x; y++)
			{
				Sleep(85);
				cout << "* ";
			}

			cout << "\n";
		}

		for (x = 1; x < 8; x++)
		{
			cout << "               ";
			for (s = 0; s < x; s++)
			{
				cout << " ";
			}

			for (y = 8; y > x; y--)
			{
				Sleep(85);
				cout << "* ";
			}

			cout << "\n";
		}
	}

	void past_travel()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * TIME MACHINE\n    ===================================== \n";
		cout << "             > Status : Present" << endl << endl;

		for (x = 0; x <= 8; x++)
		{
			cout << "               ";
			for (s = 8; s > x; s--)
			{
				cout << " ";
			}

			for (y = 0; y < x; y++)
			{
				Sleep(85);
				cout << "* ";
			}

			cout << "\n";
		}

		for (x = 1; x < 8; x++)
		{
			cout << "               ";
			for (s = 0; s < x; s++)
			{
				cout << " ";
			}

			for (y = 8; y > x; y--)
			{
				Sleep(85);
				cout << "* ";
			}

			cout << "\n";
		}


		my_age -= my_year - year;
		my_year = year;
		my_month = month;
		my_day = day;

		obj.screen();
		cout << "\n\n\t  * TIME MACHINE\n    ===================================== \n";
		cout << "             > Status : Past" << endl << endl;

		for (x = 0; x <= 8; x++)
		{
			cout << "               ";
			for (s = 8; s > x; s--)
			{
				cout << " ";
			}

			for (y = 0; y < x; y++)
			{
				Sleep(85);
				cout << ". ";
			}

			cout << "\n";
		}

		for (x = 1; x < 8; x++)
		{
			cout << "               ";
			for (s = 0; s < x; s++)
			{
				cout << " ";
			}

			for (y = 8; y > x; y--)
			{
				Sleep(85);
				cout << ". ";
			}

			cout << "\n";
		}
	}

	void sleep()
	{
	sleep:
		int choice;
		cout << "\a";
		system("cls");
		obj.screen();
		cout << "\n\n\t   * Sleep\n    ==========================================================================================" << endl;

		cout << "\n    ";

		for (int i = 1; i <= 90; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n     ";

		for (int i = 1; i <= 88; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n      ";

		for (int i = 1; i <= 86; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n       ";

		for (int i = 1; i <= 84; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n       ";

		for (int i = 1; i <= 84; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n      ";

		for (int i = 1; i <= 86; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n     ";

		for (int i = 1; i <= 88; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << "\n    ";

		for (int i = 1; i <= 90; i++)
		{
			Sleep(25);
			cout << "z";
		}

		cout << endl << endl << endl;
		cout << "    * Press [1] to go to MAIN MENU " << endl;
		cout << "    * Press [0] to EXIT " << endl;
		cout << "    ========================================================================================== \n";

		cout << "    Your Choice : ";
		cin >> choice;
		cout << "    ========================================================================================== " << endl << endl;
		cout << "\a";

		if (choice == 1)
		{
			system("cls");
			welcome();
		}

		else if (choice == 0)
		{
			exit(0);
		}

		else
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;

			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			goto sleep;
		}
	}
};

Home home;

class Amusement_Park : public Properties
{
private:
	int family_members;
	char name_members[40];

	double rate_50 = 0;
	double rate_70 = 0;
	double heart_rate = 0;

	int entry_per_member = 150;
	int hours;

	int times_1 = 0;
	int times_2 = 0;
	int times_3 = 0;
	int times_4 = 0;
	int times_5 = 0;

	int rent_times_1 = 0;
	int rent_times_2 = 0;
	int rent_times_3 = 0;
	int rent_times_4 = 0;
	int rent_times_5 = 0;

public:
	void particulars()
	{
	anchor:
		obj.screen();
		cout << "\n\n\t  * CAREFREE CARNIVAL\n    ================================= \n";
		cout << "    > Total Members : ";
		cin >> family_members;

		if (family_members > 1)
		{
			cout << "      You're alone in this city, lol!";
			cout << endl << endl << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			goto anchor;
		}

		else if ((family_members == 0) || (family_members < 0))
		{
			cout << "      Wrong Input!";
			cout << endl << endl << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			goto anchor;
		}

		cout << "    > How many hours will you spend here?" << endl << "      Answer : ";
		cin >> hours;

	carnival:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CAREFREE CARNIVAL\n    ================================= \n";
		cout << "    > NOTE :" << endl << "    For the sake of your safety, Park Management will need\n    to conduct a medical checkup. Please provide your CNIC card!\n";
		cout << endl;
		cout << "    [1] Take out CNIC Card\n    [2] Leave the Park\n    [0] Exit\n    ================================= \n    ";

		int particulars_choice;

		cout << "Your Choice : ";
		cin >> particulars_choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (particulars_choice)
		{
		case 1:
		{
			if (medical_check() == true)
			{
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}

			else
			{
				exit(0);																						//YOU WILL BE KICKED OUT OF PARK
			}
		}

		case 2:
		{

		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			goto carnival;
		}
		}
	}

	void welcome()
	{
	anchor_2:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * CAREFREE CARNIVAL\n    ================================= \n    [1] Information Desk\n    [2] Food Stalls\n    [3] Roller Coaster\n    [4] Ferris Wheel\n    [5] Swing Ride\n    [6] Pirate Ship\n    [7] Bumper Cars\n    [8] Bill Summary\n    [9] Go Out\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
		desk:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * INFORMATION DESK\n    ================================================================ \n    Welcome to CAREFREE CARNIVAL - the land of laughter and joy!\n    Saturate the colors of your life by sinking in the deep sea of\n    happiness & exuberance! Have a great time here!\n\n    ====================================\n    \t  Rides\t\t\tPrice\n    ====================================\n    > Roller Coaster\t:      $ 200/-\n    > Ferris Wheel\t:      $ 300/-\n    > Swing Ride\t:      $ 250/-\n    > Pirate Ship\t:      $ 150/-\n    > Bumper Cars\t:      $ 180/-\n\n    > NOTE : People under age of 20 are not allowed to take rides!\n\n    [1] Go Back\n    [0] Exit\n    ================================================================ \n    ";

			int desk_choice;

			cout << "Your Choice : ";
			cin >> desk_choice;
			cout << "    ================================================================ " << endl << endl;
			cout << "\a";

			switch (desk_choice)
			{
			case 1:													//Go Back
			{
				goto anchor_2;
			}

			case 0:													//Exit
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto desk;
			}

			}
		}

		case 2:
		{
			int luck_AP;
			srand((unsigned)time(0));
			luck_AP = rand() % 100;

			if (luck_AP % 2 == 0)
			{
				system("cls");
				market.fast_food();
			}

			else
			{
				system("cls");
				market.fruits();
			}
		}

		case 3:												//Roller Coaster
		{
		anchor_3:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * ROLLER COASTER\n    ============================================= \n";

			cout << "    How many times do you want to take the ride?" << endl;
			cout << "    Answer : ";
			cin >> times_1;
			cout << endl;

			int roller = times_1 * 200;
			rent_times_1 = rent_times_1 + roller;

			if (current_money < roller)
			{
				cout << "    > ERROR : Insufficient Balance!" << endl << endl;
			}

			else
			{
				current_money -= roller;
				cout << "    >> Ride Taken! <<" << endl << endl;
			}

			cout << "    [1] Ride Again\n    [2] Go Back\n    [0] Exit\n    ============================================= \n    ";

			int roller_choice;
			cout << "Your Choice : ";
			cin >> roller_choice;
			cout << "    ============================================= " << endl << endl;
			cout << "\a";

			switch (roller_choice)
			{
			case 1:
			{
				goto anchor_3;
			}

			case 2:
			{
				goto anchor_2;
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto anchor_2;
			}
			}
		}

		case 4:												//Ferris Wheel
		{
		anchor_4:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * FERRIS WHEEL\n    ============================================= \n";

			cout << "    How many times do you want to take the ride?" << endl;
			cout << "    Answer : ";
			cin >> times_2;
			cout << endl;

			int ferris = times_2 * 300;
			rent_times_2 = rent_times_2 + ferris;

			if (current_money < ferris)
			{
				cout << "    > ERROR : Insufficient Balance!" << endl << endl;
			}

			else
			{
				current_money -= ferris;
				cout << "    >> Ride Taken! <<" << endl << endl;
			}

			cout << "    [1] Ride Again\n    [2] Go Back\n    [0] Exit\n    ============================================= \n    ";

			int ferris_choice;

			cout << "Your Choice : ";
			cin >> ferris_choice;
			cout << "    ============================================= " << endl << endl;
			cout << "\a";

			switch (ferris_choice)
			{
			case 1:
			{
				goto anchor_4;
			}

			case 2:
			{
				goto anchor_2;
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto anchor_2;
			}
			}
		}

		case 5:												//Swing Ride
		{
		anchor_5:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * SWING RIDE\n    ============================================= \n";

			cout << "    How many times do you want to take the ride?" << endl;
			cout << "    Answer : ";
			cin >> times_3;
			cout << endl;

			int swing = times_3 * 250;
			rent_times_3 = rent_times_3 + swing;

			if (current_money < swing)
			{
				cout << "    > ERROR : Insufficient Balance!" << endl << endl;
			}

			else
			{
				current_money -= swing;
				cout << "    >> Ride Taken! <<" << endl << endl;
			}

			cout << "    [1] Ride Again\n    [2] Go Back\n    [0] Exit\n    ============================================= \n    ";

			int swing_choice;

			cout << "Your Choice : ";
			cin >> swing_choice;
			cout << "    ============================================= " << endl << endl;
			cout << "\a";

			switch (swing_choice)
			{
			case 1:
			{
				goto anchor_5;
			}

			case 2:
			{
				goto anchor_2;
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto anchor_2;
			}
			}
		}

		case 6:												//Pirate Ship
		{
		anchor_6:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * PIRATE SHIP\n    ============================================= \n";

			cout << "    How many times do you want to take the ride?" << endl;
			cout << "    Answer : ";
			cin >> times_4;
			cout << endl;

			int pirate = times_4 * 150;
			rent_times_4 = rent_times_4 + pirate;

			if (current_money < pirate)
			{
				cout << "    > ERROR : Insufficient Balance!" << endl << endl;
			}

			else
			{
				current_money -= pirate;
				cout << "    >> Ride Taken! <<" << endl << endl;
			}

			cout << "    [1] Ride Again\n    [2] Go Back\n    [0] Exit\n    ============================================= \n    ";

			int pirate_choice;

			cout << "Your Choice : ";
			cin >> pirate_choice;
			cout << "    ============================================= " << endl << endl;
			cout << "\a";

			switch (pirate_choice)
			{
			case 1:
			{
				goto anchor_6;
			}

			case 2:
			{
				goto anchor_2;
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto anchor_2;
			}
			}
		}

		case 7:												//ANOTHER SWING
		{
		anchor_7:
			system("cls");
			obj.screen();
			cout << "\n\n\t  * BUMPER CARS\n    ============================================= \n";

			cout << "    How many times do you want to take the ride?" << endl;
			cout << "    Answer : ";
			cin >> times_5;
			cout << endl;

			int bumper = times_5 * 180;
			rent_times_5 = rent_times_5 + bumper;

			if (current_money < bumper)
			{
				cout << "    > ERROR : Insufficient Balance!" << endl << endl;
			}

			else
			{
				current_money -= bumper;
				cout << "    >> Ride Taken! <<" << endl << endl;
			}

			cout << "    >> Ride Taken! <<" << endl << endl;
			cout << "    [1] Ride Again\n    [2] Go Back\n    [0] Exit\n    ============================================= \n    ";

			int pirate_choice;

			cout << "Your Choice : ";
			cin >> pirate_choice;
			cout << "    ============================================= " << endl << endl;
			cout << "\a";

			switch (pirate_choice)
			{
			case 1:
			{
				goto anchor_7;
			}

			case 2:
			{
				goto anchor_2;
			}

			case 0:
			{
				exit(0);
			}

			default:
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;
				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto anchor_2;
			}
			}
		}

		case 8:
		{
			total_bill();
		}

		case 9:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			goto anchor_2;
		}
		}
	}

	bool medical_check()
	{
		heart_rate = 220 - my_age;
		rate_50 = heart_rate * 0.50;
		rate_70 = heart_rate * 0.70;

		if ((rate_50 >= 92) && (rate_70 <= 140))
		{
			cout << "    > Your 50% Level is " << rate_50 << " and 70% Level is " << rate_70 << endl;
			cout << "    You are allowed!" << endl << endl;
			return true;
		}

		else
		{
			cout << "    > Your 50% Level is " << rate_50 << " and 70% Level is " << rate_70 << endl;
			cout << "    You are NOT allowed!";
			return false;
		}
	}

	void write_on_file()
	{
		ofstream AP_file;
		AP_file.open("Park Bill.txt");
		AP_file.write((char*)this, sizeof(this));
	}

	void total_bill()
	{
	bill_anchor:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * BILL SUMMARY\n    ================================================== " << endl;
		cout << "          Ride \t\t   Quantity (n)\t    Bill ($)\n";
		cout << "    ================================================== " << endl;
		cout << "    1. Roller Coaster \t\t" << times_1 << "\t\t" << rent_times_1 << endl;
		cout << "    2. Ferris Wheel \t\t" << times_2 << "\t\t" << rent_times_2 << endl;
		cout << "    3. Swing Ride \t\t" << times_3 << "\t\t" << rent_times_3 << endl;
		cout << "    4. Pirate Ship \t\t" << times_4 << "\t\t" << rent_times_4 << endl;
		cout << "    5. Bumper Cars \t\t" << times_5 << "\t\t" << rent_times_5 << endl;
		cout << "    ================================================== " << endl;
		cout << "    > Total Bill \t\t\t      $" << rent_times_1 + rent_times_2 + rent_times_3 + rent_times_4 + rent_times_5 << endl;
		cout << "    ================================================== " << endl;

		cout << endl << endl;
		cout << "    [1] Print Bill\n    [2] Go Back\n    [0] Exit\n    ================================================== \n    ";

		int bill_choice;

		cout << "Your Choice : ";
		cin >> bill_choice;
		cout << "    ================================================== " << endl << endl;
		cout << "\a";

		switch (bill_choice)
		{
		case 1:
		{
			write_on_file();
		here:

			int back;
			obj.screen();
			cout << "\n\n\t  * TOTAL BILL\n    ========================================================================================================== " << endl;

			cout << "\n    > A text file (Park Bill.txt) has been extracted to the location where this \".exe\" file is present !!" << endl << endl << endl;

			cout << "    [1] Go Back" << endl;
			cout << "    [0] Exit" << endl;
			cout << "    ========================================================================================================== \n";

			cout << "    Your Choice : ";
			cin >> back;
			cout << "    ========================================================================================================== " << endl << endl;
			cout << "\a";
			if (back == 1)
			{
				goto bill_anchor;
			}

			else if (back == 0)
			{
				exit(0);
			}

			else
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				goto here;
			}
		}

		case 2:
		{
			system("cls");
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			goto bill_anchor;
		}
		}
	}
};

class Hotel : public Properties
{
private:
	int Floors[5][10];

	int map_value = 1;
	int nights;

	int j;
	int i;

	string self_phone_number_CC;
	string self_phone_number_No;

	string first_name;
	string last_name;
	string surname_name;
	string CNIC;
	string gender;
	int age;

public:
	void welcome()
	{
		system("cls");
		obj.screen();
		cout << "\n\n\t  * ????????????????\n    ================================= \n    [1] View Hotel Map\n    [2] Check In\n    [3] Previous Records\n    [4] Go To Room\n    [5] Hotel Policy\n    [6] Go Back\n    [0] Exit\n    ================================= \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			if (map_value == 1)
			{
				available_rooms_generator();
				map();
			}

			else
			{
				map();
			}
		}

		case 2:
		{
			check_in();
		}

		case 3:
		{
			system("cls");
			user_info();
		}

		case 4:
		{
			system("cls");

			ifstream file;
			file.open("hotel_info.dat");
			file.read((char*)this, sizeof(*this));

			if (!file)
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t   * ROOM\n    ========================================= " << endl;								//SIGNUP PAGE

				cout << endl << "    > ERROR : Please Check in First!\n\n";

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				welcome();
			}

			else
			{
				system("cls");

			room_in_hotel:
				obj.screen();
				cout << "\n\n\t  * MY ROOM\n    ================================= \n    [1] Time Travel\n    [2] Sleep\n    [3] Eat\n    [4] Go Back\n    [0] Exit\n    ================================= \n    ";

				int choice;

				cout << "Your Choice : ";
				cin >> choice;
				cout << "    ================================= " << endl << endl;
				cout << "\a";

				switch (choice)
				{
				case 1:
				{
					home.time_travel();
				}

				case 2:
				{
					home.sleep();
				}

				case 3:
				{
					int luck_AP;
					srand((unsigned)time(0));
					luck_AP = rand() % 100;

					if (luck_AP % 2 == 0)
					{
						system("cls");
						market.fast_food();
					}

					else
					{
						system("cls");
						market.fruits();
					}
				}

				case 4:
				{
					system("cls");
					welcome();
				}

				case 0:
				{
					exit(0);
				}

				default:
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					goto room_in_hotel;
				}
				}
			}

			file.close();
		}

		case 5:
		{
			//Hotel Policy
		}

		case 6:
		{
			system("cls");
			start.city_screen();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}
		}
	}

	void map()
	{
		HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
	map:
		system("cls");
		obj.screen();
		cout << "\n\n\t  * Hotel Map\n    ================================= \n\n";

		cout << "    ==========================================================================================================================================================================" << endl;

		cout << "     Floors\t";

		for (int i = 0; i < 10; i++)
		{
			cout << "     Room " << i + 1 << "\t";
		}
		cout << endl;
		cout << "    ==========================================================================================================================================================================" << endl;

		cout << endl;

		//Ground Floor
		cout << "     Floor 0\t";

		for (int j = 1; j < 11; j++)
		{
			if (((Floors[0][j] % 2 == 0) || (Floors[0][j] % 7 == 0)) && ((Floors[0][j] % 3 != 0) || (Floors[0][j] % 5 != 0)))
			{
				SetConsoleTextAttribute(color, 10);
				cout << "    Available\t";
			}

			else if (((Floors[0][j] % 3 == 0) || (Floors[0][j] % 5 == 0)) && ((Floors[0][j] % 2 != 0) || (Floors[0][j] % 7 != 0)))
			{
				SetConsoleTextAttribute(color, 14);
				cout << "    Damaged\t";
			}

			else
			{
				SetConsoleTextAttribute(color, 12);
				cout << "    Occupied\t";
			}
		}

		cout << endl << endl;

		//Floor 1
		SetConsoleTextAttribute(color, 7);
		cout << "     Floor 1\t";

		for (int j = 1; j < 11; j++)
		{
			if (((Floors[1][j] % 2 == 0) || (Floors[1][j] % 7 == 0)) && ((Floors[1][j] % 3 != 0) || (Floors[1][j] % 5 != 0)))
			{
				SetConsoleTextAttribute(color, 10);
				cout << "    Available\t";
			}

			else if (((Floors[1][j] % 3 == 0) || (Floors[1][j] % 5 == 0)) && ((Floors[1][j] % 2 != 0) || (Floors[1][j] % 7 != 0)))
			{
				SetConsoleTextAttribute(color, 14);
				cout << "    Damaged\t";
			}

			else
			{
				SetConsoleTextAttribute(color, 12);
				cout << "    Occupied\t";
			}
		}

		cout << endl << endl;

		//Floor 2
		SetConsoleTextAttribute(color, 7);
		cout << "     Floor 2\t";

		for (int j = 1; j < 11; j++)
		{
			if (((Floors[2][j] % 2 == 0) || (Floors[2][j] % 7 == 0)) && ((Floors[2][j] % 3 != 0) || (Floors[2][j] % 5 != 0)))
			{
				SetConsoleTextAttribute(color, 10);
				cout << "    Available\t";
			}

			else if (((Floors[2][j] % 3 == 0) || (Floors[2][j] % 5 == 0)) && ((Floors[2][j] % 2 != 0) || (Floors[2][j] % 7 != 0)))
			{
				SetConsoleTextAttribute(color, 14);
				cout << "    Damaged\t";
			}

			else
			{
				SetConsoleTextAttribute(color, 12);
				cout << "    Occupied\t";
			}
		}

		cout << endl << endl;

		//Floor 3
		SetConsoleTextAttribute(color, 7);
		cout << "     Floor 3\t";

		for (int j = 1; j < 11; j++)
		{
			if (((Floors[3][j] % 2 == 0) || (Floors[3][j] % 7 == 0)) && ((Floors[3][j] % 3 != 0) || (Floors[3][j] % 5 != 0)))
			{
				SetConsoleTextAttribute(color, 10);
				cout << "    Available\t";
			}

			else if (((Floors[3][j] % 3 == 0) || (Floors[3][j] % 5 == 0)) && ((Floors[3][j] % 2 != 0) || (Floors[3][j] % 7 != 0)))
			{
				SetConsoleTextAttribute(color, 14);
				cout << "    Damaged\t";
			}

			else
			{
				SetConsoleTextAttribute(color, 12);
				cout << "    Occupied\t";
			}
		}

		cout << endl << endl;

		//Floor 4
		SetConsoleTextAttribute(color, 7);
		cout << "     Floor 4\t";

		for (int j = 1; j < 11; j++)
		{
			if (((Floors[4][j] % 2 == 0) || (Floors[4][j] % 7 == 0)) && ((Floors[4][j] % 3 != 0) || (Floors[4][j] % 5 != 0)))
			{
				SetConsoleTextAttribute(color, 10);
				cout << "    Available\t";
			}

			else if (((Floors[4][j] % 3 == 0) || (Floors[4][j] % 5 == 0)) && ((Floors[4][j] % 2 != 0) || (Floors[4][j] % 7 != 0)))
			{
				SetConsoleTextAttribute(color, 14);
				cout << "    Damaged\t";
			}

			else
			{
				SetConsoleTextAttribute(color, 12);
				cout << "    Occupied\t";
			}
		}

		SetConsoleTextAttribute(color, 7);

		cout << endl << endl << endl;
		cout << "    [1] Go Back\n    [0] Exit\n    ================================= \n    ";

		int choice;

		map_value = 10;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    ================================= " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			goto map;
		}
		}
	}

	void available_rooms_generator()
	{
		int luck;
		srand((unsigned)time(0));
		luck = rand() % 100;

		if (((luck % 2 == 0) || (luck % 7 == 0)) && ((luck % 3 != 0) || (luck % 5 != 0)))									//AVAILABLE
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 1; j < 11; j++)
				{
					Floors[i][j] = rand() % 100;
				}
			}
		}

		else if (((luck % 3 == 0) || (luck % 5 == 0)) && ((luck % 2 != 0) || (luck % 7 != 0)))								//DAMAGED
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 1; j < 11; j++)
				{
					Floors[i][j] = rand() % 100;
				}
			}
		}

		else																												//OCCUPIED
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 1; j < 11; j++)
				{
					Floors[i][j] = rand() % 100;
				}
			}
		}
	}

	void hotel_policy()
	{
		cout << "UNDER CONSTRUCTION";
	}

	void check_in()
	{
		system("cls");
	check_in:
		obj.screen();
		cout << "\n\n\t  * CHECK IN\n    ================================= \n   ";
		cout << " //some tag line here" << endl << endl;

		cout << "    * First Name \t: \t";
		cin >> first_name;

		cout << "    * Last Name \t: \t";
		cin >> last_name;

		cout << "    * Gender \t\t: \t";
		cin >> gender;

		cout << "    * CNIC No \t\t: \t";
		cin >> CNIC;

		cout << "    * Age \t\t: \t";
		cin >> age;

		cout << "    * Country Code \t: \t+";
		cin >> self_phone_number_CC;

		cout << "    * Phone Number \t: \t";
		cin >> self_phone_number_No;

		cout << "\n    =========================================" << endl;

		cout << endl << "    > NOTE : Confirmation Required!\n";
		cout << endl;

		cout << "    [1] Take out CNIC Card\n    [2] Abort the Process\n    [0] Exit\n    ========================================= \n    ";

		int choose;

		cout << "Your Choice : ";
		cin >> choose;
		cout << "    ========================================= " << endl << endl;
		cout << "\a";

		switch (choose)
		{
		case 1:
		{
			if ((first_name != my_first_name) || (last_name != my_last_name))
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t   * CHECK IN\n    =================================================== " << endl;								//SIGNUP PAGE

				cout << endl << "    > ERROR : Wrong Data Input!\n";

				cout << "    The entered data does not match the data on CNIC Card. " << endl << endl << "    * Details: " << endl;
				cout << "    1. Your actual name is " << my_first_name << " " << my_last_name << ", not " << first_name << " " << last_name << "!" << endl;

				if (age != my_age)
				{
					cout << "    2. Your actual age is " << my_age << ", not " << age << "!" << endl;
				}

				cout << "\a";
				cout << "\n    > CHECK IN ABORTED !!" << endl << endl;
				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				goto check_in;
			}

			else
			{
				system("cls");
				obj.screen();
				cout << "\n\n\t   * CHECK IN\n    ======================================================== " << endl;								//SIGNUP PAGE

				cout << "    The entered credentials have been successfully verified\n    Fill the information about room:" << endl << endl;

				cout << "    * Floor Number : ";
				cin >> i;

				cout << "    * Room Number : ";
				cin >> j;

				cout << "\n    How many nights do you want to spend here?" << endl << "    > Your Answer : ";
				cin >> nights;

				cout << endl;

				if ((i < 0) || (i > 4))
				{
					cout << "    > ERROR : Hotel doesn't have that much floors!" << endl;
				}

				if ((j < 1) || (j > 11))
				{
					cout << "    > ERROR : Hotel doesn't have that much rooms!" << endl;
				}

				if (((Floors[i][j] % 2 == 0) || (Floors[i][j] % 7 == 0)) && ((Floors[i][j] % 3 != 0) || (Floors[i][j] % 5 != 0)))
				{
					my_day += nights;
					cout << "    > SUCCESS : Room Alloted!\n";
					write_on_file();

				}

				else if (((Floors[i][j] % 3 == 0) || (Floors[i][j] % 5 == 0)) && ((Floors[i][j] % 2 != 0) || (Floors[i][j] % 7 != 0)))
				{
					cout << "    > ERROR : Room is Under Maintenance!\n" << endl;
				}

				else
				{
					cout << "    > ERROR : Room is Already Occupied!\n";
				}

				cout << endl;
				cout << "    [1] Go Back\n    [0] Exit\n    ========================================= \n    ";

				int choose;

				cout << "Your Choice : ";
				cin >> choose;
				cout << "    ========================================= " << endl << endl;
				cout << "\a";

				switch (choose)
				{
				case 1:
				{
					system("cls");
					welcome();
				}

				case 0:
				{
					exit(0);
				}

				default:
				{
					cout << "\a";
					cout << "\n    > INVALID SELECTION !!" << endl << endl;
					cout << "    Press Enter to Continue..";
					cin.ignore();
					cin.get();
					system("cls");
					check_in();
				}
				}
			}

		}

		case 2:
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t   * CHECK IN\n    =================================================== " << endl;								//SIGNUP PAGE
			cout << endl;
			cout << "\a";
			cout << "\n    > CHECK IN ABORTED !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue ...";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}

		}
	}

	void user_info()
	{
		ifstream file;
		file.open("hotel_info.dat");
		file.read((char*)this, sizeof(*this));

		if (!file)
		{
			system("cls");
			obj.screen();
			cout << "\n\n\t   * PREVIOUS RECORDS\n    =================================================== " << endl;

			cout << endl << "    > ERROR : No Previous Record Found!\n\n";

			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			welcome();
		}

		else
		{
			data();
			file.read((char*)this, sizeof(*this));
		}

		file.close();
	}

	void data()
	{
		obj.screen();
		cout << "\n\n\t  * PREVIOUS RECORDS\n    =================================================== \n\n";

		cout << "    * Full Name \t: \t" << first_name << " " << last_name << endl;

		cout << "    * Gender \t\t: \t" << gender << endl;

		cout << "    * CNIC No \t\t: \t" << CNIC << endl;

		cout << "    * Age \t\t: \t" << age << endl;

		cout << "    * Phone Number \t: \t+" << self_phone_number_CC << " " << self_phone_number_No << endl;

		cout << "    * Room Number \t: \t" << j << endl;

		cout << "    * Floor \t\t: \t" << i << endl;

		cout << "\n    =================================================== " << endl;

		cout << endl << endl;

		cout << "    [1] Go Back\n    [0] Exit\n    =================================================== = \n    ";

		int choice;

		cout << "Your Choice : ";
		cin >> choice;
		cout << "    =================================================== " << endl << endl;
		cout << "\a";

		switch (choice)
		{
		case 1:
		{
			system("cls");
			welcome();
		}

		case 0:
		{
			exit(0);
		}

		default:
		{
			cout << "\a";
			cout << "\n    > INVALID SELECTION !!" << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();
			system("cls");
			data();
		}
		}
		//system("pause");
	}

	void write_on_file()
	{
		ofstream file;
		file.open("hotel_info.dat");
		file.write((char*)this, sizeof(*this));
		file.close();
	}
};


void Start::city_screen()
{
	Arcade arcade;
	Amusement_Park AP;
	Hospital hospital;
	Bank bank;
	Police police;
	Fire_Brigade FB;
	Hotel hotel;
	Ammunition ammunition;
	Show_Room SR;
	Taxation_Department TD;

	obj.screen();
	cout << "\n\n\t  * VIRTUAL CITY\n    ================================= \n    [01] Home\n    [02] Market\n    [03] Arcade\n    [04] Amusement Park\n    [05] Hospital\n    [06] Bank\n    [07] Police Station\n    [08] Fire Brigade\n    [09] Hotel\n    [10] Gun Store\n    [11] Car Show Room\n    [12] Excise & Taxation Office\n    [00] Exit\n    ================================= \n    ";

	int choice;

	cout << "Your Choice : ";
	cin >> choice;
	cout << "    ================================= " << endl << endl;
	cout << "\a";

	switch (choice)
	{
	case 1:
	{
		home.welcome();
	}

	case 2:
	{
		market.welcome();
	}

	case 3:
	{
		arcade.welcome();
	}

	case 4:
	{
		AP.welcome();
	}

	case 5:
	{
		system("cls");
		hospital.welcome();
	}

	case 6:
	{
		bank.welcome();
	}

	case 7:
	{
		police.welcome();
	}

	case 8:
	{
		FB.welcome();
	}

	case 9:
	{
		hotel.welcome();
	}

	case 10:
	{
		ammunition.list();
	}

	case 11:
	{
		SR.list();
	}

	case 12:
	{
		TD.welcome();
	}

	case 0:
	{
		exit(0);
	}

	default:
	{
		cout << "\a";
		cout << "\n    > INVALID SELECTION !!" << endl << endl;
		cout << "    Press Enter to Continue..";
		cin.ignore();
		cin.get();
		system("cls");
		city_screen();
	}
	}
}

////////////////////////////////////////////////////////////// M  A  I  N    F  U  N  C  T  I  O  N //////////////////////////////////////////////////////////////

int main()
{
	string name_01;
	string name_02;

	system("cls");
start:
	cout << "    =================================" << endl << "    > PROJECT       :   VIRTUAL CITY" << endl << "    > DESIGNED BY   :   OSAID AHMAD" << endl << "    =================================" << endl << endl;

	cout << "\n\n\t  * VIRTUAL CITY\n    ================================= \n    [1] Start\n    [2] Help\n    [3] Credits\n    [0] Exit\n    ================================= \n    ";


	int choice;

	cout << "Your Choice : ";
	cin >> choice;
	cout << "    ================================= " << endl << endl;
	cout << "\a";

	switch (choice)
	{
		case 1:
		{
			system("cls");
			cout << "\n\n\t   * GETTING STARTED\n    =========================================== " << endl;								//CNIC Card Making

			cout << "    > First Name \t\t: \t";
			cin >> name_01;
			cout << "    > Last Name \t\t: \t";
			cin >> name_02;

			obj.getdata(name_01, name_02);

			start.welcome_message(name_01);
			cout << endl << endl;
			cout << "    Press Enter to Continue..";
			cin.ignore();
			cin.get();

			start.city_screen();

			break;
		}

		case 2:
		{
		help:

			int case_02_choice;
			cout << "\a";
			system("cls");
			cout << "\n\n\t   * HELP\n    ====================================================================== " << endl;

			cout << "    Welcome to \"VIRTUAL CITY\"!\n    A city full of mysteries and surprises!" << endl << endl;
			cout << "    * Travel Through Time                     * Change Dresses" << endl;
			cout << "    * Sleep                                   * Wear Shades" << endl;
			cout << "    * Endless Menu                            * Play Games" << endl;
			cout << "    * Amuse Yourself With Rides               * Access Your Bank Account" << endl;
			cout << "    * Rent a Room                             * Buy Arms" << endl;
			cout << "    * Large Collection of Vehicles            * Pay Taxes and Save City" << endl;

			cout << "\n    So what are you waiting for?" << endl << endl;

			cout << "    > Play Now!" << endl << endl;

			cout << "    * [1] Go Back " << endl;
			cout << "    * [0] Exit " << endl;
			cout << "    ====================================================================== \n";

			cout << "    Your Choice : ";
			cin >> case_02_choice;
			cout << "    ====================================================================== " << endl << endl;
			cout << "\a";


			if (case_02_choice == 1)
			{
				system("cls");
				goto start;
			}

			else if (case_02_choice == 0)
			{
				exit(0);
			}

			else
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue..";
				cin.ignore();
				cin.get();
				system("cls");
				goto help;
			}

		}

		// - - - - - - - - - - - - C R E D I T S - - - - - - - - - - - - - - - //

		case 3:
		{
		credits:
			int case_03_choice;
			cout << "\a";
			system("cls");
			cout << "\n\n\t   * CREDITS\n    ==========================================================================================" << endl;

			cout << "\n    ";

			for (int i = 1; i <= 90; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n     ";

			for (int i = 1; i <= 88; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n      ";

			for (int i = 1; i <= 86; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n       ";

			for (int i = 1; i <= 84; i++)
			{
				Sleep(25);
				cout << ".";
			}

			Sleep(25);
			cout << "\n       ...                                                                              ...";

			Sleep(25);
			cout << "\n        ... > DEVELOPER     :    Umair Ejaz                                        ...";
			Sleep(25);
			cout << "\n         ... > DEGREE       :    Electrical Engineering - 43 - Syn C                ...";
			Sleep(25);
			cout << "\n        ... > UNIVERSITY    :    NUST College of Electrical & Mechanical Engineering  ...";
			Sleep(25);
			cout << "\n       ...                                                                              ...";
			cout << "\n       ";

			for (int i = 1; i <= 84; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n      ";

			for (int i = 1; i <= 86; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n     ";

			for (int i = 1; i <= 88; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << "\n    ";

			for (int i = 1; i <= 90; i++)
			{
				Sleep(25);
				cout << ".";
			}

			cout << endl << endl << endl;
			cout << "    * [1] Go Back " << endl;
			cout << "    * [0] Exit " << endl;
			cout << "    ========================================================================================== \n";

			cout << "    Your Choice : ";
			cin >> case_03_choice;
			cout << "    ========================================================================================== " << endl << endl;
			cout << "\a";

			if (case_03_choice == 1)
			{
				system("cls");
				goto start;
			}

			else if (case_03_choice == 0)
			{
				exit(0);
			}

			else
			{
				cout << "\a";
				cout << "\n    > INVALID SELECTION !!" << endl << endl;

				cout << "    Press Enter to Continue ...";
				cin.ignore();
				cin.get();
				system("cls");
				goto credits;
			}
		}

	// - - - - - - - - - - - - E X I T - - - - - - - - - - - - - - - //

		case 0:
		{
			exit(0);
		}

		default:
		{
			system("cls");
			goto start;
		}
	}
}