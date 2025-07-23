#include <fstream>
#include <iostream>
#include <vector>

#include "storage.h"
#include "task.h"
#include "taskManager.h"

int main()
{
    TaskManager manager;
    manager.printTasks();
    int choice;
    do
    {
        std::cout << "1. Add task" << std::endl;
        std::cout << "2. Remove task" << std::endl;
        std::cout << "3. Print task" << std::endl;
        std::cout << "4. Edit task" << std::endl;
        std::cout << "5. Exit" << std::endl;

        std::cin >> choice;
        switch (choice)
        {
        case 1:
            manager.addingTask(manager.ListOfTasks);
            break;
        case 2:
            manager.removeTask(manager.ListOfTasks);
            break;
        case 3:
            manager.printTasks();
            break;
        case 4:
            manager.editTask();
            break;
        default:
            break;
        }
    } while (choice != 5);

    return 0;
}
