#pragma once
#include <pqxx/pqxx>
#include<iostream>

class postgressqlDATAbase {
	pqxx::connection conn;

public:
	postgressqlDATAbase(std::string dbname, std::string user, std::string password, std::string host, std::string port);

	~postgressqlDATAbase();  // ����������� �������, ����������; ���������� ������ ���������� � main

	pqxx::result executeQuery(const std::string& query);
};