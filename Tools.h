#pragma once
#include<iostream>
#include <pqxx/pqxx>

void Output(pqxx::result E) {
	for (int j = 0; j < E.size(); j++) {
		for (int i = 0; i < E[j].size(); i++) {
			std::cout << E[j][i].as<std::string>() << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
