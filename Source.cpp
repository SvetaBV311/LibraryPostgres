#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "postgressqlDATAbase.h"
#include "Windows.h"
#include "AuthorsORM.h"
#include "Authors.h"
#include "GenLibUs.h"
#include "GenresORM.h"
#include "LibrariesORM.h"
#include "UsersORM.h"
#include "BooksORM.h"
#include "Tools.h"



int main() {

	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, "RUS");
	std::unique_ptr <postgressqlDATAbase> db = std::make_unique <postgressqlDATAbase>("library_new", "postgres", "rfrnecs16", "localhost", "5432");


	std::unique_ptr <AuthorsORM> aORM = std::make_unique <AuthorsORM>();
	db->executeQuery(aORM->createTable());
	Authors authors[3];
	Authors author1("Pushkin Alexandr Sereyevich", "1799-06-06", "1837-02-10");
	Authors author2("Lermontov Mihail Iurievich", "1814-10-15", "1841-07-27");
	Authors author3("Gippius Zinaida Nicolaevna", "1869-10-20", "1945-09-09");
	
	authors[0] = author1;
	authors[1] = author2;
	authors[2] = author3;

	for (int i = 0; i < 3; i++) {
		db->executeQuery(aORM->insertInto(authors[i]));
	}

	pqxx::result E = db->executeQuery(aORM->SelectFrom());
	Output(E);


	std::unique_ptr <GenresORM> gORM = std::make_unique <GenresORM>();
	db->executeQuery(gORM->createTable());
	GenLibUs genres[4];
	GenLibUs genre1("epic");
	GenLibUs genre2("novel");
	GenLibUs genre3("saga");
	GenLibUs genre4("essay");

	genres[0] = genre1;
	genres[1] = genre2;
	genres[2] = genre3;
	genres[3] = genre4;

	for (int i = 0; i < 4; i++) {
		db->executeQuery(gORM->insertInto(genres[i]));
	}

	pqxx::result G = db->executeQuery(gORM->SelectFrom());
	Output(G);


	std::unique_ptr <LibrariesORM> lORM = std::make_unique <LibrariesORM>();
	db->executeQuery(lORM->createTable());
	GenLibUs libraries[2];
	GenLibUs librariy1("Victory Avenue, 20");
	GenLibUs librariy2("Lenin street, 18");

	libraries[0] = librariy1;
	libraries[1] = librariy2;

	for (int i = 0; i < 2; i++) {
		db->executeQuery(lORM->insertInto(libraries[i]));
	}

	pqxx::result L = db->executeQuery(lORM->SelectFrom());
	Output(L);


	std::unique_ptr <UsersORM> uORM = std::make_unique <UsersORM>();
	db->executeQuery(uORM->createTable());
	GenLibUs users[2];
	GenLibUs user1("Victorov Dmitry");
	GenLibUs user2("Lenin Ivan");

	users[0] = user1;
	users[1] = user2;

	for (int i = 0; i < 2; i++) {
		db->executeQuery(uORM->insertInto(users[i]));
	}

	pqxx::result U = db->executeQuery(uORM->SelectFrom());
	Output(U);

	std::unique_ptr <BooksORM> bORM = std::make_unique <BooksORM>();
	db->executeQuery(bORM->createTable());
	Books books[2];
	Books book1("Captains daughter", 1, 2, 1, 10, 3);
	Books book2("The hero of the modern age", 2, 2, 2, 14);

	books[0] = book1;
	books[1] = book2;

	for (int i = 0; i < 2; i++) {
		db->executeQuery(bORM->insertInto(books[i]));
	}

	pqxx::result B = db->executeQuery(bORM->SelectFrom());
	Output(B);
}