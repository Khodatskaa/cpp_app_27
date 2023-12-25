#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
private:
    std::string* name;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;

public:
    Contact();
    Contact(const std::string& name, const std::string& homePhone, const std::string& workPhone,
        const std::string& mobilePhone, const std::string& additionalInfo);
    ~Contact();

    inline std::string getName() const;
    inline std::string getHomePhone() const;
    inline std::string getWorkPhone() const;
    inline std::string getMobilePhone() const;
    inline std::string getAdditionalInfo() const;
};

#endif 
