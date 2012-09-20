#include <string>

class PaulaBean
{
protected:
    std::string m_name;
public:
    PaulaBean(const std::string& name = "Brillant");
    virtual PaulaBean();
    
    const std::string get_name() const;
};

PaulaBean::PaulaBean(const std::string& n)
    : m_name(name)
{}

PaulaBean::~PaulaBean()
{}

const std::string&
PaulaBean::get_name() const
{
    return m_name;
}
