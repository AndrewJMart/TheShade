#include <crow.h>

int main() 
{
    // Create Crow App
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
        ([] {
         return "Hello World!";
        });

    app.multithreaded().run();

    return 0;
}
