/**
 * project.h defines the Project Entity
 */

#ifndef ENTITIES_PROJECT_H
#define ENTITIES_PROJECT_H

#include "entity.h"
#include "task.h"
#include <string>
#include <vector>

namespace entities
{
class Project : public entities::Entity
{
public:
    Project() = default;
    ~Project() = default;

public:
    std::string to_string() const override
    {
        return "name: " + get_name() + "\n" + get_task() + "\n";
    }

public:
    void set_name(const std::string& name) { m_name = name ;}
    std::string get_name() const { return m_name; }
public:
    void add_task(const Task& task) { m_tasks.push_back(task); }
    std::string get_task() const
    {
        std::string line;
        for (std::size_t i{}; i<m_tasks.size(); ++i)
        {
            line += "task " + std::to_string(i+1) + ": " + m_tasks[i].get_name() + "\n";
        }
        return line;
    }
private:
    std::string m_name;
    std::vector<entities::Task> m_tasks;
};
}

#endif