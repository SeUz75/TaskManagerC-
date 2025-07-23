#pragma once

#include <iostream>

class Task
{

  public:
    Task(std::string title1, std::string description1, std::string auth1);
    ~Task();
    std::string title;
    std::string description;
    std::string author;
};
