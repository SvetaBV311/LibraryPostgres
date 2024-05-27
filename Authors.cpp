#include "Authors.h"

Authors::Authors(std::string fullName, std::string birthDay, std::string deathDate) {
	this->birthDay_ = birthDay;
	this->deathDate_ = deathDate;
	this->fullName_ = fullName;
};

Authors::Authors(std::string fullName, std::string birthDay) {
	this->birthDay_ = birthDay;
	this->fullName_ = fullName;
};

const std::string Authors::fullName() { return this->fullName_; }
void Authors::SetfullName(std::string fullName) { this->fullName_ = fullName; }

const std::string Authors::birthDay() { return this->birthDay_; }
void Authors::SetbirthDay(std::string birthDay) { this->birthDay_ = birthDay; }

const std::string Authors::deathDate() { return this->deathDate_; }
void Authors::SetdeathDate(std::string deathDate) { this->deathDate_ = deathDate; }