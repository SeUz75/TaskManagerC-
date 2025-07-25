#pragma once

#include "task.h"
#include <vector>

class TaskManager
{
  public:
    TaskManager();

    ~TaskManager();

    std::vector<Task> ListOfTasks;

    void addingTask(std::vector<Task> &taskList);

    void removeTask(std::vector<Task> &taskList);

    void printTasks();

    void editTask();
};
