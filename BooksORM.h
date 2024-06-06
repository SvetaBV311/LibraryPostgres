#pragma once
#include "Books.h"

class BooksORM {
public:
	const std::string createTable();

	const std::string insertInto(Books& book);

	const std::string SelectFrom();
};
