#include "LibrariesORM.h"


const std::string LibrariesORM::createTable() {
	std::string query = "CREATE TABLE libraries (id SERIAL PRIMARY KEY, address TEXT NOT NULL)";
	return query;
}

const std::string LibrariesORM::insertInto(GenLibUs& library) {
	std::string query;
	query = "INSERT INTO libraries (address) VALUES ('" + library.columnName() + "')";
	return query;
}

const std::string LibrariesORM::SelectFrom() {
	return "SELECT * from libraries;";
}
