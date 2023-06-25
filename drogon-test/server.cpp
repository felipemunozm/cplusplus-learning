#include <drogon/HttpAppFramework.h>
#include <drogon/drogon.h>
#include <trantor/utils/Logger.h>

using namespace drogon;
int main() {
    app()
        .setLogPath("./")
        .setLogLevel(trantor::Logger::kDebug)
        .addListener("0.0.0.0", 8080)
        .setThreadNum(4)
        .enableRunAsDaemon()
        .run();
    

}