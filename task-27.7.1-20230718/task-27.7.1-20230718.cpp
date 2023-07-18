// task-27.7.1-20230718.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Logger.h"

int main()
{
    std::string s1{"first line for logging\n"};
    std::string s2{"second line for logging\n"};
    std::string s3{"third line\n"};
    std::string s4{"forth line111\n"};
    std::string line;
    int counter{ 0 };

    Logger l1;

    std::cin >> counter;


    //std::ofstream outf("log.txt", std::ios::app);

    //if (!outf)
    //{
    //   std::cerr << "log.txt could not be opened for writing!" << std::endl;
    //}

    //outf << s1 << s2 << s3 << s4;
    //outf.close();

    //std::ifstream inf("log.txt");

    //if (inf.is_open())
    //{
    //    while (std::getline(inf, line))
    //    {
    //        std::cout << counter << ' ' << line << std::endl;
    //        ++counter;
    //    }
    //}
    //inf.close();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
