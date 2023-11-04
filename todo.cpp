#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> todoList; // Store tasks as strings

    while (true)
    {
        std::cout << "\nTo-Do List\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Remove Task\n";
        std::cout << "3. Display list\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::string task;
            std::cout << "Enter the task: ";
            std::cin.ignore(); 
            std::getline(std::cin, task);
            todoList.push_back(task);
            std::cout << "Task added: " << task << std::endl;
            break;
        }
        case 2:
        {
            if (!todoList.empty())
            {
                std::cout << "Tasks:\n";
                for (size_t i = 0; i < todoList.size(); i++)
                {
                    std::cout << i + 1 << ". " << todoList[i] << "\n";
                }

                int index;
                std::cout << "Enter the task number to remove: ";
                std::cin >> index;

                if (index >= 1 && index <= static_cast<int>(todoList.size()))
                {
                    std::cout << "Task removed: " << todoList[index - 1] << "\n";
                    todoList.erase(todoList.begin() + index - 1);
                }
                else
                {
                    std::cout << "Invalid task number.\n";
                }
            }
            else
            {
                std::cout << "No tasks to remove.\n";
            }
            break;
        }
        case 3:
        {
            std::cout << "Tasks:\n";
            for (size_t i = 0; i < todoList.size(); i++)
            {
                std::cout << i + 1 << ". " << todoList[i] << "\n";
            }
            break;
        }
        case 4:
            std::cout << "Goodbye!\n";
            return 0;
        default:
            std::cout << "Invalid choice..\n";
        }
    }

    return 0;
}
