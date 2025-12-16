#include "ConsoleLogger.h"

void ConsoleLogger::log(const std::string& message) {
    std::cout <<"CONSOLE: "<< message << std::endl;
}