#pragma once
#include <iostream>
#include"Authors.h"
#include "GenLibUs.h"

class Books {
	std::string bookName_ = "";
	int author_;
	int genre_;
	int library_;
	int count_;
	int on_hands_ = 0;
public:
	Books() {};

	Books(std::string bookName, int author, int genre, int library, int count, int on_hands);

	Books(std::string bookName, int author, int genre, int library, int count);

	~Books() {
		this->bookName_.clear();
	};

	const std::string bookName();
	void SetBookName(std::string bookName);

	const int author();
	void SetAuthor(int author);

	const int genre();
	void SetGenre(int genre);

	const int library();
	void SetLibrary(int library);

	const int count();
	void SetCount(int count);

	const int on_hands();
	void SetOn_hands(int on_hands);
};
