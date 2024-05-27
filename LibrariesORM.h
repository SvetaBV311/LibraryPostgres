#pragma once
#include "GenLibUsORM.h"

class LibrariesORM : public GenLibUsORM{
public:
	const std::string createTable();

	const std::string insertInto(GenLibUs& library);

	const std::string SelectFrom();
};
