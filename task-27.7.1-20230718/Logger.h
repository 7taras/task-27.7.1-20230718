#pragma once

#include <iostream>
#include <cstdlib> // for use exit()
#include <fstream>

class Logger
{
private:
	std::fstream iofile;

public:
	Logger()
	{
		std::fstream iofile("log.txt", std::ios::in | std::ios::out);
	}
	~Logger()
	{
		iofile.close();
	}
	
	bool writeLine(const std::string& text);
	bool readLine(std::string& text);
};

