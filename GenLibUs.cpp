#include "GenLibUs.h"

GenLibUs::GenLibUs(std::string columnName) { this->columnName_ = columnName; };

const std::string GenLibUs::columnName() { return this->columnName_; };
void GenLibUs::SetColumnName(std::string columnName) { this->columnName_ = columnName; }
;