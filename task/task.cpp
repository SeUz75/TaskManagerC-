#include "task.h"

Task::Task(std::string title1, std::string description1, std::string auth1)
{
    title = title1;
    description = description1;
    author = auth1;
}

Task::~Task() {}
