#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "vending.h"
#include "item.h"

using namespace std;

void vending::Run(){
	int choice;

	Readdata();

	do{
		choice = menu();
		
		if (choice > 0 && choice < 5) {
			choice--;
			cout << "You have chosen " << pop[choice].getName() << " $" << pop[choice].getPrice() << endl;
			cout << "Please insert $" << pop[choice].getPrice() << endl;
			cout << "Thank you! Come again!" << endl;
			system("pause"); system("cls");
		}

	} while (choice != 0);


	
	Writedata();
}
/*
stock[choice]--;
counter[choice]++;
totalall += price[choice];
total[choice] += price[choice];*/



//Menu for vending machine
int vending::menu(){
	int selection = 0;

	cout << "Choose a drink: " << endl;

	for (int i = 0; i < 5; i++){
		cout << "* " << (i + 1) << " " << pop[i].getName() << "       " << pop[i].getPrice() << " *" << endl;
	}

	cin >> selection; system("cls");
	return selection;
}





//Reading the data from the text file
void vending::Readdata(){
	fstream in;
	in.open("data.txt", ios::in);
	if (in.is_open()){
		//Temporary Variables
		int Stock1;
		double Price1;
		int TotalSold1;
		double TotalSales1;
		string Name1;
		char tmp;
		for (int i = 0; i < 5; i++){
			in >> Name1 >> Stock1 >> Price1 >> TotalSold1 >> TotalSales1;

			pop[i].setStock(Stock1);
			pop[i].setPrice(Price1);
			pop[i].setTotalSold(TotalSold1);
			pop[i].setTotalSales(TotalSales1);
			pop[i].setName(Name1);
		}
	}
	else{
		//Default pop names
		pop[0].setName("Pepsi");
		pop[1].setName("MountainDew");
		pop[2].setName("Coke");
		pop[3].setName("MellowYellow");
		pop[4].setName("Water");

		//Default prices
		pop[0].setPrice(3.00);
		pop[1].setPrice(2.00);
		pop[2].setPrice(2.00);
		pop[3].setPrice(1.00);
		pop[4].setPrice(1.00);
	}

	in.close();
}

//Writing the data to the text file
void vending::Writedata(){
	fstream out;
	out.open("data.txt", ios::out);
	for (int i = 0; i < 5; i++){
		out << pop[i].getName();
		out << " " << pop[i].getStock();
		out << " " << pop[i].getPrice();
		out << " " << pop[i].getTotalSold();
		out << " " << pop[i].getTotalSales();
		out << endl;
	}
	out.close();
}