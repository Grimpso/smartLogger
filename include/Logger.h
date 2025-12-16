#ifndef LOGGER_H
#define LOGGER_H

#include<string>

class Logger{
    private:
        // Private members can be added here in the future
        std::string prefix;
    public:
        Logger();
        void log(const std::string& message);

};

#endif // LOGGER_H