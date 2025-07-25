#pragma once

#include "task.h"
#include "taskManager.h"

class Storage
{
  public:
    void saveFile(std::vector<Task> &listOfTasks);
    void loadFile(std::vector<Task> &listOfTasks);
};
