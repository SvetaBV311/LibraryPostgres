#pragma once
#include <iostream>

class Authors {
	std::string fullName_ = "";
	std::string birthDay_ = "";
	std::string deathDate_ = "";
public:
	Authors() {};

	Authors(std::string fullName, std::string birthDay, std::string deathDate);

	Authors(std::string fullName, std::string birthDay);

	const std::string fullName();
	void SetfullName(std::string fullName);

	const std::string birthDay();
	void SetbirthDay(std::string birthDay);

	const std::string deathDate();
	void SetdeathDate(std::string deathDate);
};
