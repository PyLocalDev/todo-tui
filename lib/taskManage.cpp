#include "taskManage.h"
#include <iostream>
#include <string>
#include <vector>

std::vector<Task> taskList;

int addTask(const std::string &taskName, bool isDone) {
  taskList.push_back({taskName, isDone});

  return 0;
}

void markDone(const std::string &taskName) {
  for (auto &item : taskList) {
    if (item.name == taskName) {
      item.isFinished = true;
    }
  }
}

void printTaskList() {
  for (auto &item : taskList) {
    std::cout << "Task: " << item.name << std::endl;
    std::cout << "Completed? " << item.isFinished << std::endl;
  }
}

int countTasks() { return taskList.size(); }
