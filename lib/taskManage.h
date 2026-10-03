#pragma once
#include <string>
#include <vector>

struct Task {
  std::string name;
  bool isFinished;
};

extern std::vector<Task> taskList; // define once in a .cpp

int addTask(const std::string &taskName, bool isDone);
void markDone(const std::string &taskName);
void printTaskList();

int countTasks();
