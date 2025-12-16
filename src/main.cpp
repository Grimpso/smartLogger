#include<iostream>
#include "Logger.h"
#include "ConsoleLogger.h"
int main(){
    Logger* logger=new ConsoleLogger(); //abstraction

    logger->log("Abstraction applied successfully");
    logger->log("System is running smoothly");
    delete logger;
    // Logger logger;
    // logger.log("system is working good");
    // logger.log("user logged in successfully");
    return 0;
}