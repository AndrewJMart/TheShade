#include<stdio.h>
#include<string.h>
#include<crow.h>
#include<sqlite3.h>

int main()
{
	crow::SimpleApp app;

	CROW_ROUTE(app, "/newsletter")
		.methods("POST"_method)
		([](const crow::request& req){

		// Parse JSON For String
		auto x = crow::json::load(req.body);

		
		if (!x) 
			return crow::response(crow::status::BAD_REQUEST);

		std::cout << x["email"].s() << "\n";

		return crow::response("200", "STRING FOUND");
	});

	app.port(928).multithreaded().run();
}

