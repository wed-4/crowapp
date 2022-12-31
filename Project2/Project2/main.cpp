#include "crow.h"

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]() {
        auto page = crow::mustache::load_text("index.html");
        return page;
        });

    app.port(18080).multithreaded().run();
}
