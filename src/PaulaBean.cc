#include <string>

class PaulaBean
{
protected:
   std::string m_name;
public:
   PaulaBean(const std::string& name = "Brillant");
   const std::string get_name() const;
};


