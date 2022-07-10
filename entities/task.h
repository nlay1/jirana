/**
 * Task.h defines the Task entity
 */

#ifndef ENTITIES_TASK_H
#define ENTITIES_TASK_H

#include "entity.h"
#include "date.h"

#include <string>

namespace entities
{
class Task : public entities::Entity
{
public:
    Task() = default;
    ~Task() = default;
public:
    std::string to_string() const override
    {
        return "name: " + get_name() + "\nassignee: " + get_assignee() + "\nstatus: "
               + get_status() + "\ndeadline: " + get_deadline() + "\n";
    }
public:
    void set_name(const std::string& name) { m_name = name ;}
    std::string get_name() const { return m_name; }
public:
    void set_assignee(const std::string& assignee) { m_assignee = assignee ;}
    std::string get_assignee() const { return m_assignee; }
public:
    void set_status(const std::string& status) { m_status = status ;}
    std::string get_status() const { return m_status; }
public:
    void set_deadline(int day, int month, int year){ m_deadline.m_day = day; m_deadline.m_month = month, m_deadline.m_year = year; }
    std::string get_deadline() const {return m_deadline.show(); }
private:
    std::string m_name;
    std::string m_assignee;
    std::string m_status;
    date::Date m_deadline;
};
}
#endif