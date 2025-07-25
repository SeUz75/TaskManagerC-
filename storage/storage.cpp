#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "storage.h"

void Storage::loadFile(std::vector<Task> &listOfTasks)
{
    std::string title1, description1, author1;
    std::fstream database("database.txt");

    std::string myString, line;

    while (std::getline(database, line))
    {
        std::stringstream ss(line);
        std::getline(ss, title1, ',');
        std::getline(ss, description1, ',');
        std::getline(ss, author1, ',');
    }
    Task savedTasks(title1, description1, author1);

    listOfTasks.push_back(savedTasks);
}

void Storage::saveFile(std::vector<Task> &listOfTasks)
{
    int size = listOfTasks.size();
    std::cout << "Size of Vector is :  " << size << std::endl;
    std::fstream database("database.txt", std::ios::out);

    if (!database.fail() && !database.eof())
    {
        for (int i = 0; i < size; i++)
        {
            std::string inputString = listOfTasks[i].title + "," + listOfTasks[i].description +
                                      "," + listOfTasks[i].author + '\n';
            std::cout << inputString;
            database << inputString;
        }
    }
    database.close();
}
