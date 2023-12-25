#include "Phonebook.h"
#include <fstream>

Phonebook::Phonebook() : contacts(nullptr), capacity(0), size(0) {}

Phonebook::~Phonebook() {
    delete[] contacts;
}

void Phonebook::addContact(const Contact& contact) {
    if (size == capacity) {
        capacity = capacity == 0 ? 1 : capacity * 2;
        Contact* newContacts = new Contact[capacity];
        for (int i = 0; i < size; ++i) {
            newContacts[i] = contacts[i];
        }
        delete[] contacts;
        contacts = newContacts;
    }
    contacts[size++] = contact;
}

void Phonebook::deleteContact(const std::string& name) {
    for (int i = 0; i < size; ++i) {
        if (contacts[i].getName() == name) {
            for (int j = i; j < size - 1; ++j) {
                contacts[j] = contacts[j + 1];
            }   
            --size;
            break;
        }
    }
}

void Phonebook::searchContact(const std::string& name) const {
    for (int i = 0; i < size; ++i) {
        if (contacts[i].getName() == name) {
            std::cout << "Contact found:\n";
            std::cout << "Name: " << contacts[i].getName() << "\n"
                << "Home Phone: " << contacts[i].getHomePhone() << "\n"
                << "Work Phone: " << contacts[i].getWorkPhone() << "\n"
                << "Mobile Phone: " << contacts[i].getMobilePhone() << "\n"
                << "Additional Info: " << contacts[i].getAdditionalInfo() << "\n";
            return;
        }
    }

    std::cout << "Contact not found.\n";
}

void Phonebook::showAllContacts() const {
    if (size == 0) {
        std::cout << "Phonebook is empty.\n";
    }
    else {
        std::cout << "All Contacts:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << "Name: " << contacts[i].getName() << "\n"
                << "Home Phone: " << contacts[i].getHomePhone() << "\n"
                << "Work Phone: " << contacts[i].getWorkPhone() << "\n"
                << "Mobile Phone: " << contacts[i].getMobilePhone() << "\n"
                << "Additional Info: " << contacts[i].getAdditionalInfo() << "\n"
                << "------------------------\n";
        }
    }
}

void Phonebook::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (int i = 0; i < size; ++i) {
            file << contacts[i].getName() << " " << contacts[i].getHomePhone() << " " << contacts[i].getWorkPhone()
                << " " << contacts[i].getMobilePhone() << " " << contacts[i].getAdditionalInfo() << "\n";
        }
        std::cout << "Phonebook data saved to file: " << filename << "\n";
    }
    else {
        std::cout << "Unable to open file for writing: " << filename << "\n";
    }
}

void Phonebook::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        while (true) {
            std::string name, homePhone, workPhone, mobilePhone, additionalInfo;
            file >> name >> homePhone >> workPhone >> mobilePhone >> additionalInfo;
            // eof() returns true if the end of the file has been reached
            if (file.eof()) {
                break;
            }
            Contact contact(name, homePhone, workPhone, mobilePhone, additionalInfo);
            addContact(contact);
        }
        std::cout << "Phonebook data loaded from file: " << filename << "\n";
    }
    else {
        std::cout << "Unable to open file for reading: " << filename << "\n";
    }
}
