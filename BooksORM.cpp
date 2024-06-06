#include "BooksORM.h"
#include <string>

const std::string BooksORM::createTable() {
	std::string query = "CREATE TABLE books (id SERIAL PRIMARY KEY, public_id SERIAL, book_name TEXT NOT NULL, "
		"author INT NOT NULL, foreign key(author) references authors(id), genre INT NOT NULL, "
		"foreign key(genre) references genres(id), library INT NOT NULL, foreign key(library) references libraries(id), "
		"count INT NOT NULL, on_hands INT)";
	return query;
}

const std::string BooksORM::insertInto(Books& book) {
	std::string query;
	query = "INSERT INTO books (book_name, author, genre, library, count, on_hands) VALUES ('" + book.bookName() + "','" + std::to_string(book.author())
			+ "','" + std::to_string(book.genre()) + "','" + std::to_string(book.library()) + "','" + std::to_string(book.count()) + "','" 
		+ std::to_string(book.on_hands()) + "')";
	return query;
}

const std::string BooksORM::SelectFrom() {
	return "SELECT * from books;";
}