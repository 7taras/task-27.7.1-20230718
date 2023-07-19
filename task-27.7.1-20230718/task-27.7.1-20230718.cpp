// task-27.7.1-20230718.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>
#include <fstream>
#include "Logger.h"

int main()
{
    std::string s1{"first line for logging\n"};
    std::string s2{"second line\n"};
    std::string s3{"third line\n"};
    std::string s4{"forth line\n"};
    std::string line;

    Logger logger;

    // тестируем класс logger. Сначала записываем строки
    logger.writeLine(s1);
    logger.writeLine(s2);
    logger.writeLine(s3);
    logger.writeLine(s4);

    // затем считываем строки
    for (int i = 1; i <= 5; i++)
    {
        logger.readLine(line, i);
        std::cout << line << std::endl;
    }

    return 0;
}