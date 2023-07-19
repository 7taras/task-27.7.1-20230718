#pragma once

#include <iostream>
#include <fstream>
#include <shared_mutex>
#include <string>

class Logger
{
private:
	std::fstream iofile;
	std::shared_mutex shared_mutex;
public:
	Logger()
	{
		std::fstream iofile("log.txt", std::ios::in | std::ios::out | std::ios::app);
	}
	~Logger()
	{
		iofile.close();
	}
	
	bool writeLine(const std::string& text);
	bool readLine(std::string& text);
};

