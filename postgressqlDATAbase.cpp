#include "postgressqlDATAbase.h"

postgressqlDATAbase::postgressqlDATAbase(std::string dbname, std::string user, std::string password, std::string host, std::string port) :
	conn ("dbname=" + dbname + " user=" + user + " password=" + password + " host=" + host+" port ="+port) {
	try {
		if (this->conn.is_open()) {
			std::cout << "Connection successful, connected to " << conn.dbname() << std::endl;
		}
		else {
			std::cout << "Connection refused" << std::endl;
		}
	}
	catch (const std::exception& e) {  // универсальный обработчик ошибок
		std::cout << e.what() << std::endl;
	}
}

postgressqlDATAbase::~postgressqlDATAbase() {
	// это не нужно прописывать, т.к. когда уничтожается объект уничтожается и связь
}

pqxx::result postgressqlDATAbase::executeQuery(const std::string& query) {
	try {
		pqxx::nontransaction N(this->conn);
		pqxx::result R(N.exec(query));
		N.commit(); // после этого сохраняются изменения и разрывается связь с БД
		return R;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}	
}