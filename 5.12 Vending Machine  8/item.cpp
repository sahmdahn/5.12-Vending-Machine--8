#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "vending.h"
#include "item.h"

using namespace std;

//Constructor
item::item(){
	Stock = 0;
	Price = 0;
	TotalSold = 0;
	TotalSales = 0;
	Name = "Unnamed";
}

//Getters
int item::getStock(){
	return Stock;
}

double item::getPrice(){
	return Price;
}

int item::getTotalSold(){
	return TotalSold;
}

double item::getTotalSales(){
	return TotalSales;
}

string item::getName(){
	return Name;
}

//Setters
void item::setStock(int a){
	Stock = a;
}

void item::setPrice(double a){
	Price = a;
}

void item::setTotalSold(int a){
	TotalSold = a;
}

void item::setTotalSales(double a){
	TotalSales = a;
}

void item::setName(string a){
	Name = a;
}

//Data 
bool item::purchase(){
	if (Stock - 1 < 0){
		return false;
	}
	Stock--;
	return true;
}