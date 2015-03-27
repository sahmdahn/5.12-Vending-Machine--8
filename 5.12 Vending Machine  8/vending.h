#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <iomanip>

#include "item.h"


class vending{
private:
	item pop[5];
public:
	//main menu
	void Run();
	void Readdata();
	void Writedata();
	int menu();
};