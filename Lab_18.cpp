#include <iostream>
#include <vector>
#include <memory>

class Task {
private:
    std::string description_;
    public:
    Task(const std::string& description) : description_(description) {}

    void print() const {
        std::cout << "Task: " << description_ << std::endl;
    }
};

class TaskList {
private:
    std::vector<std::unique_ptr<Task>> tasks;
    
public:
    void addTask(std::unique_ptr<Task> task) {
        tasks.push_back(std::move(task));
    }

    void removeTask(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
        }
    }

    void printTasks() const {
        for (const auto& task : tasks) {
            task->print();
        }
    }
};

int main() {
    
    TaskList taskList;

    std::unique_ptr<Task> task1 = std::make_unique<Task>("Task 1");
    std::unique_ptr<Task> task2 = std::make_unique<Task>("Task 2");
    std::unique_ptr<Task> task3 = std::make_unique<Task>("Task 3");

    taskList.addTask(std::move(task1));
    taskList.addTask(std::move(task2));
    taskList.addTask(std::move(task3));

    taskList.printTasks();

    taskList.removeTask(1);
    std::cout << "==========" << std::endl;

    taskList.printTasks();

    return 0;
}
