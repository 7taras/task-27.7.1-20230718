#include "Logger.h"

bool Logger::writeLine(const std::string& text)
{
    shared_mutex.lock();
    iofile << text;
    shared_mutex.unlock();
    return false;
}

bool Logger::readLine(std::string& text)
{
    shared_mutex.lock_shared();
    std::getline(iofile, text);
    shared_mutex.unlock_shared();
    return false;
}
