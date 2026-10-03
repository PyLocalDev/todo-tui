#include "taskManage.h"
#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>
#include <string>

void displayMainMenu();
void funcAddTask();
void funcMarkDone();
void funcRemTask();

int main(int argc, char *argv[]) {
  std::cout << "Hello World!" << std::endl;
  while (true) {
    displayMainMenu();
    std::cout << "Type an Option and Enter:";
    int opt;
    std::cin >> opt;
    switch (opt) {
    case 1:
      std::cout << "Add task" << std::endl;
      funcAddTask();
      break;
    case 2:
      std::cout << "Rem Task" << std::endl;
      funcRemTask();
      break;
    case 3:
      std::cout << "View" << std::endl;
      std::cout << "No. of Tasks: " << countTasks() << std::endl;
      printTaskList();
      break;
    case 4:
      // idk?
      funcMarkDone();
      break;
    case 5:
      std::cout << "Exiting..." << std::endl;
      std::exit(0);
      break;
    default:
      std::cout << "Doesn't Exist." << std::endl;
      break;
    }
  }

  return 0;
}

void displayMainMenu() {
  std::cout << "--Todo------\n1) Add Task\n2) Remove Task\n3) View Tasks\n4) "
               "Mark a Task Completed\n5) Exit"
            << std::endl;
}

void funcAddTask() {
  std::string taskName;
  std::cout << "Task Name: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, taskName);
  addTask(taskName, false);
}

void funcMarkDone() {
  std::string taskName;
  std::cout << "Task Name: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, taskName);
  markDone(taskName);
}

void funcRemTask() {
  // func
  std::string taskName;
  std::cout << "Task Name: ";
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::getline(std::cin, taskName);
  remTask(taskName);
}
