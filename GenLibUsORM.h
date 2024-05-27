#pragma once
#include <iostream>
#include "GenLibUs.h"

class GenLibUsORM {
public:
	virtual const std::string createTable() = 0;

	virtual const std::string insertInto(GenLibUs& string) = 0;

	virtual const std::string SelectFrom() = 0;
};


