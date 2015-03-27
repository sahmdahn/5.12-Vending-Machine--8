#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "vending.h"
#include "item.h"

using namespace std;

void main(){
	cout << "Sean Traynor\n1st Hour\n";
	system("pause"); system("cls");
	
	vending a;

	a.Run();
}






/*


int menu(double price[]);
void readdata(double price[], int counter[], int stock[], double total[], double totalall);
void writedata(double price[], int counter[], int stock[], double total[], double totalall);

void main(){
	cout << "Sean Traynor\n1st Hour\n";
	system("pause"); system("cls");

	//Normal variables
	double price[5];
	price[0] = 3.00; price[1] = 2.00; price[2] = 2.00; price[3] = 1.00; price[4] = 1.00;
	int counter[] = { 0, 0, 0, 0, 0 };
	int choice;
	double total[] = { 0, 0, 0, 0, 0 };
	double totalall = 0;
	int stock[] = { 10, 10, 10, 10, 10 };

	//Call data function
	readdata(price, counter, stock, total, totalall);


	do{
		choice = menu(price);

		if (choice < 1 || choice>7){
			cout << "Your input is invalid\n";
			system("pause"); system("cls");
			continue;
		}
		choice--;

		if (choice < 5){
			if (stock[choice] < 1){
				cout << "Sold out of that item" << endl;
				system("pause"); system("cls");
				continue;
			}
		}

		switch (choice){
		case 0:
			cout << "You have chosen Pepsi. Pepsi costs " << "$" << price[choice] << endl;
			cout << "Please insert " << "$" << price[choice] << endl;
			cout << "Thank You! Come again!" << endl;
			system("pause"); system("cls");
			stock[choice]--;
			counter[choice]++;
			totalall += price[choice];
			total[choice] += price[choice];
			break;
		case 1:
			cout << "You have chosen Mountain Dew. Mountian Dew costs " << "$" << price[choice] << endl;
			cout << "Please insert " << "$" << price[choice] << endl;
			cout << "Thank You! Come again!" << endl;
			system("pause"); system("cls");
			stock[choice]--;
			counter[choice]++;
			totalall += price[choice];
			total[choice] += price[choice];
			break;
		case 2:
			cout << "You have chosen Coke. Coke costs " << "$" << price[choice] << endl;
			cout << "Please insert " << "$" << price[choice] << endl;
			cout << "Thank You! Come again!" << endl;
			system("pause"); system("cls");
			stock[choice]--;
			counter[choice]++;
			totalall += price[choice];
			total[choice] += price[choice];
			break;
		case 3:
			cout << "You have chosen Mellow Yellow. Mellow Yello costs " << "$" << price[choice] << endl;
			cout << "Please insert " << "$" << price[choice] << endl;
			cout << "Thank You! Come again!" << endl;
			system("pause"); system("cls");
			stock[choice]--;
			counter[choice]++;
			totalall += price[choice];
			total[choice] += price[choice];
			break;
		case 4:
			cout << "You have chosen Water. Water costs " << "$" << price[choice] << endl;
			cout << "Please insert " << "$" << price[choice] << endl;
			cout << "Thank You! Come again!" << endl;
			system("pause"); system("cls");
			stock[choice]--;
			counter[choice]++;
			totalall += price[choice];
			total[choice] += price[choice];
			break;
		case 5:
			for (int i = 0; i < 5; i++)
				if (stock[i])
					stock[i] = 10;
			cout << "All items have been restocked" << endl;
			system("pause"); system("cls");
			break;
		default:
			cout << "You have chosen to Exit the Program.\n";
			system("pause"); system("cls");
			break;
		}
	} while (choice != 6);

	writedata(price, counter, stock, total, totalall);

	cout << "Pepsis sold: " << counter[0] << endl;
	cout << "Mountain Dews sold: " << counter[1] << endl;
	cout << "Cokes sold: " << counter[2] << endl;
	cout << "Mellow Yellows sold: " << counter[3] << endl;
	cout << "Waters sold: " << counter[4] << endl << endl;

	cout << "The total sale was: $" << totalall << endl << endl;

	system("pause");
}

void readdata(double price[], int counter[], int stock[], double total[], double totalall){
	fstream in;
	in.open("data.txt", ios::in);
	if (in.is_open()){
		for (int i = 0; i < 5; i++){
			in >> price[i] >> counter[i] >> total[i] >> stock[i];
		}
	}
	in.close();
}

int menu(double price[]){
	cout << setprecision(3);

	int selection;

	cout << setfill('*') << setw(30) << " " << endl;
	cout << setfill(' ');
	cout << "* 1. Pepsi" << setw(15) << "$" << price[0] << endl;
	cout << "* 2. Mountain Dew" << setw(8) << "$" << price[1] << endl;
	cout << "* 3. Coke" << setw(16) << "$" << price[2] << endl;
	cout << "* 4. Mellow Yellow" << setw(7) << "$" << price[3] << endl;
	cout << "* 5. Water" << setw(15) << "$" << price[4] << endl;
	cout << "* 6. Restock" << endl;
	cout << "* 7. Exit the program." << endl;
	cout << setfill('*') << setw(30) << " " << endl;

	cout << "Choose a drink: ";
	cin >> selection;
	system("cls");
	return selection;
}

void writedata(double price[], int counter[], int stock[], double total[], double totalall){
	fstream out;
	out.open("data.txt", ios::out);
	for (int i = 0; i < 5; i++){
		out << price[i] << "     " << counter[i] << "     " << total[i] << "     " << stock[i] << endl;
	}
	out << totalall;
	out.close();
}
*/