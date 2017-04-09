#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;
class roulett
{
public:
	//int userChoice(int userChoice);
	int roulette_Graphic();
	//int output();
	//int _exit(char _inout);
	//int exit();
private:
	int randomGen();
	int game();
	int stack(int random);
	//int exit();
	//int exit(char select);
	int tempChamber;
};
int   roulett::randomGen()
{
	srand(time(NULL));
	int chamber;
	//Spin the chamber.
	chamber = 1 + rand() % (6 - 1 + 1);
	//chamber = 1 + rand() % (6 - 1);
	//chamber = 1 + rand() % (6)
	return chamber;
}
int   roulett::game()
{
	char select;
	string message;
	int chamber = randomGen();
spin:
	//chamber == 0;
	tempChamber = chamber;
	if (tempChamber == chamber)
	{
		chamber = randomGen();
	}
	chamber = randomGen();
choice:
	cout << "Choice ?? ----> ";
	//SetConsoleMode()
	cin >> select;
	cout << endl;
	//roulett::_exit(select);
	if (select == '1')
	{
		if (chamber == 1)
		{
			cout << "You're dead! :(\n\n";
			//system("pause>nul");
			//return 0; 
		}
		else
		{
			chamber -= 1;
			cout << "Click...\n\n";
			goto choice;
		}
	}
	if (select == '2')
	{
		//int chamber = randomGen();
		if (chamber>1)
		{
			cout << "There were " << chamber << " more shots to die :).\n\n";
		}
		else
		{
			cout << "Next shot would have killed you :).\n\n";
		}
		cout << "You spinned the chamber.\n";
		goto spin;
	}
	if (select == '3')
	{
		/*if (chamber>1){
			cout << chamber << " more shots to die ! \n";
		}
		else{
			
			cout << "Next one will kill you ! \n"; 
		}*/
		roulett::stack(chamber);
		goto choice;
	}
	/*if (select == '4')
	{
		if (chamber>1){
			cout << "You Quit !" << chamber << " remaining shots.\n";
		}
		else{
			cout << "You're lucky! Next shot is death.\n";
		}
		//system("pause>nul");
		return 0;
		//roulett::exit(select);
	} */
	/*else
	{
		cout << "INVALID CHOICE !!\n\n";
		system("CLS");
		goto choice;
	}*/
	return 0;
}
/*int   roulett::output()
{
	roulett::game();
	return 0;
}*/
int   roulett ::stack(int random)
{	
	int chamber;
	//chamber = roulett::randomGen();
	chamber = random;
	if (chamber>1){
		cout << chamber << " more shots to die ! \n\n";
	}
	else{
		cout << "Next one will kill you ! \n\n";
	}
	return 0;
}
int   roulett::roulette_Graphic()
{
	int flag;
	int quit;
	//int choice;
	while (flag = 1)
	{
		roulett object;
		cout << "**************************************\n";
		cout << "*				     *\n";
		cout << "*           Russian Roulette         *\n";
		cout << "*	   ------------------	     *\n";
		cout << "**************************************\n";
		cout << "* Press 1 to ---> Fire               *\n";
		cout << "* Press 2 to ---> Spin               *\n";
		cout << "* Press 3 to ---> Peek Chamber       *\n";
		//cout << "* Press 4 to ---> Quit               *\n";
		cout << "**************************************\n";
		//cout << "Press 1 to fire, Press 2 to Spin \n";
		cout << endl;
		object.game();
		//object.
		//quit = object.exit();
		//cout << quit;
		//cin >> choice;
		/*if (quit == 0)
		{
		system("CLS");
		}
		else
		{
		return 0;
		}*/
		cout << "DO you want to retry 1 == Yes / 2 == No : ";
		cin >> quit;
		if (quit == 1)
		{
			system("CLS");
			//write(1, "\E[H\E[2J", 7);
			flag = 1;
		}
		else
		{
			//flag = 0;
			return 0;
		}
	}
}