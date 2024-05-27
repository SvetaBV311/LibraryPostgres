#pragma once
#include "GenLibUsORM.h"

class UsersORM : public GenLibUsORM {
public:
	const std::string createTable();

	const std::string insertInto(GenLibUs& users);

	const std::string SelectFrom();
};
