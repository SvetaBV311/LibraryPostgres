#pragma once
#include <iostream>
#include "Authors.h"

class AuthorsORM {
public :
	const std::string createTable();

	const std::string insertInto(Authors& author);

	const std::string SelectFrom();
};
