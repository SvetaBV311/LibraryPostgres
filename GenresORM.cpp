#include "GenresORM.h"


const std::string GenresORM::createTable() {
	std::string query = "CREATE TABLE genres (id SERIAL PRIMARY KEY, genre_name TEXT NOT NULL)";
	return query;
}

const std::string GenresORM::insertInto(GenLibUs& genre) {
	std::string query;
	query = "INSERT INTO genres (genre_name) VALUES ('" + genre.columnName() + "')";
	return query;
}

const std::string GenresORM::SelectFrom() {
	return "SELECT * from genres;";
}

