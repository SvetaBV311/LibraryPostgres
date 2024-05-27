#pragma once
#include <iostream>


class GenLibUs {
	std::string columnName_ = "";
public:
	GenLibUs() {};
	GenLibUs(std::string columnName);

	const std::string columnName();
	void SetColumnName(std::string columnName);
};