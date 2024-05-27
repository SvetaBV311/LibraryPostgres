#pragma once
#include "GenLibUsORM.h"

class GenresORM : public GenLibUsORM {
public:
	const std::string createTable();

	const std::string insertInto(GenLibUs& genre);

	const std::string SelectFrom();
};