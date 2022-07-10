#include <string>
namespace date
{
struct Date
{
    int m_year;
    int m_month;
    int m_day;
    std::string show() const
    {
        return std::to_string(m_day) + "\\"+ std::to_string(m_month) + "\\" + std::to_string(m_year) ;
    }
};
}
