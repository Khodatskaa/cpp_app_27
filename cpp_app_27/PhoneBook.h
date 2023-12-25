#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.h"

class Phonebook {
private:
    Contact* contacts;
    int capacity;
    int size;

public:
    Phonebook();
    ~Phonebook();

    void addContact(const Contact& contact);
    void deleteContact(const std::string& name);
    void searchContact(const std::string& name) const;
    void showAllContacts() const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif 
