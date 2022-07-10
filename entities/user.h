/**
 * user.h defines the User entity.
 */
#include <string>
#include "entity.h"
namespace entities
{

class User : public entities::Entity
{
public:
    User() = default;
    ~User() = default;


public:
    std::string to_string() const override
    {
        return "name: " + get_name() + "\nemail: " + get_email() + "\npassword: "
        + get_password() + "\ntitle: " + get_title() + "\n";
    }

public:
    void set_email(const std::string& email) { m_email = email; }
    std::string get_email() const { return m_email; }
public:
    void set_name(const std::string& name) { m_name = name ;}
    std::string get_name() const { return m_name; }
public:
    void set_password(const std::string& password) { m_password = password; }
    std::string get_password() const { return m_password; }
public:
    void set_title(const std::string& title) { m_title = title; }
    std::string get_title() const { return m_title; }

private:
    std::string m_email;
    std::string m_name;
    std::string m_password;
    std::string m_title;

};

}
