#include "Contact.h"

Contact::Contact() : name(nullptr) {}

Contact::Contact(const std::string& name, const std::string& homePhone, const std::string& workPhone,
    const std::string& mobilePhone, const std::string& additionalInfo)
    : homePhone(homePhone), workPhone(workPhone), mobilePhone(mobilePhone), additionalInfo(additionalInfo) {
    this->name = new std::string(name);
}

Contact::~Contact() {
    delete name;
}

inline std::string Contact::getName() const {
    return *name;
}

inline std::string Contact::getHomePhone() const {
    return homePhone;
}

inline std::string Contact::getWorkPhone() const {
    return workPhone;
}

inline std::string Contact::getMobilePhone() const {
    return mobilePhone;
}

inline std::string Contact::getAdditionalInfo() const {
    return additionalInfo;
}
