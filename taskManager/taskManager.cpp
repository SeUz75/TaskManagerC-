#include <vector>

#include "storage.h"
#include "taskManager.h"

TaskManager::TaskManager()
{
    Storage storage;
    storage.loadFile(ListOfTasks);
}

TaskManager::~TaskManager()
{
    Storage storage;
    storage.saveFile(ListOfTasks);
}

void TaskManager::addingTask(std::vector<Task> &taskList)
{

    std::cout << " ADDING NEW TASK " << std::endl;

    std::string title, description, author;

    std::cout << "Please enter the title for the new task : " << std::endl;
    // std::cin >> title;
    std::cin.ignore(); // BUG SOLVED ! When using std::cin >> before std::getline(),
    std::getline(std::cin,
                 title); //  the newline character (\n) left in the input buffer by std::cin can be
                         //  consumed by std::getline(), causing it to appear as if it's skipped. To
                         //  prevent this, use std::cin.ignore() to discard the leftover newline
                         //  character after std::cin and before std::getline()

    std::cout << "Please enter the description for the new task : " << std::endl;
    // std::cin >> description;
    std::getline(std::cin, description);

    std::cout << "Please type the author for the new task : " << std::endl;
    // std::cin >> author;
    std::getline(std::cin, author);

    Task newTask(title, description, author);

    TaskManager::ListOfTasks.push_back(newTask);
}

void TaskManager::removeTask(std::vector<Task> &taskList)
{
    std::cout << " REMOVING TASK " << std::endl;

    TaskManager::printTasks();
    int choice;

    do
    {
        std::cout << "Enter a correct task  index " << std::endl;
        std::cin >> choice;
        std::cout << "Choice is : " << choice << std::endl;

    } while (choice <= 0 || choice > taskList.size());
    std::cout << "Task with index " << choice << " is deleted" << std::endl;
    taskList.erase(taskList.begin() + choice);
}

void TaskManager::printTasks()
{
    int i = 1;
    std::cout << "Tasks : ";
    std::cout << " -----------------" << std::endl;
    for (Task task : TaskManager::ListOfTasks)
    {
        std::cout << " Title : " << task.title << std::endl;
        std::cout << " Description : " << task.description << std::endl;
        std::cout << " Author : " << task.author << std::endl;
        std::cout << " Number of task : " << i++ << std::endl;
        std::cout << " -----------------" << std::endl;
    }
}

void TaskManager::editTask() {}
