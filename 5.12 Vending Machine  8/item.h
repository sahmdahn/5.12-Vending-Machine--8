#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "vending.h"



using namespace std;

class item{
private:
	//Amount of pop in system
	int Stock;
	//Price of pop
	double Price;
	//Number of pop sold
	int TotalSold;
	//Total amount of all pop sold ($)
	double TotalSales;
	//Name of pop
	string Name;

public:
	//Constructor
	item();

	//Getters
	int getStock();
	double getPrice();
	int getTotalSold();
	double getTotalSales();
	string getName();

	//Setters
	void setStock(int a);
	void setPrice(double a);
	void setTotalSold(int a);
	void setTotalSales(double a);
	void setName(string a);

	//Item data
	bool purchase();
};