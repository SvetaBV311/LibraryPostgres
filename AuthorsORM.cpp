#include "AuthorsORM.h"

const std::string AuthorsORM::createTable() {
	std::string query = "CREATE TABLE authors (id SERIAL PRIMARY KEY, full_name TEXT NOT NULL, birth_day TEXT NOT NULL,"
		"death_date TEXT)";
	return query;
}

const std::string AuthorsORM::insertInto(Authors& author) {
	std::string query;
	if (author.deathDate() != "") {
		query = "INSERT INTO authors (full_name, birth_day, death_date) VALUES ('" + author.fullName() + "','" + author.birthDay()
			+ "','" + author.deathDate() + "')";
	}
	else {
		query = "INSERT INTO authors (full_name, birth_day) VALUES ('" + author.fullName() + "','" + author.birthDay() + "')";
	}
	return query;
}

const std::string AuthorsORM::SelectFrom() {
	return "SELECT * from authors;";
}