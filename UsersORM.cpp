#include "UsersORM.h"


const std::string UsersORM::createTable() {
	std::string query = "CREATE TABLE users (id SERIAL PRIMARY KEY, user_name TEXT NOT NULL)";
	return query;
}

const std::string UsersORM::insertInto(GenLibUs& users) {
	std::string query;
	query = "INSERT INTO users (user_name) VALUES ('" + users.columnName() + "')";
	return query;
}

const std::string UsersORM::SelectFrom() {
	return "SELECT * from users;";
}
