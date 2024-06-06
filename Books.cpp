#include "Books.h"

Books::Books(std::string bookName, int author, int genre, int library, int count, int on_hands)
{
	this->bookName_ = bookName;
	this->author_ = author;
	this->genre_ = genre;
	this->library_ = library;
	this->count_ = count;
	this->on_hands_ = on_hands;
};

Books::Books(std::string bookName, int author, int genre, int library, int count)
{
	this->bookName_ = bookName;
	this->author_ = author;
	this->genre_ = genre;
	this->library_ = library;
	this->count_ = count;
};



const std::string Books::bookName() { return this->bookName_; }
void Books::SetBookName(std::string bookName) { this->bookName_ = bookName; }

const int Books::author() { return this->author_; }
void Books::SetAuthor(int author) { this->author_ = author; }

const int Books::genre() { return this->genre_; }
void Books::SetGenre(int genre) { this->genre_ = genre; }

const int Books::library() { return this->library_; }
void Books::SetLibrary(int library) { this->library_ = library; }

const int Books::count() { return this->count_; }
void Books::SetCount(int count) { this->count_ = count; }

const int Books::on_hands() { return this->on_hands_; }
void Books::SetOn_hands(int on_hands) { this->on_hands_ = on_hands; }