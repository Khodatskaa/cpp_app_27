#include "PhoneBook.h"
#include <iostream>

int main() {
    Phonebook phonebook;

    while (true) {
        std::cout << "Phonebook Menu:\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Search Contact\n";
        std::cout << "3. Delete Contact\n";
        std::cout << "4. Show All Contacts\n";
        std::cout << "5. Save to File\n";
        std::cout << "6. Load from File\n";
        std::cout << "7. Exit\n";

        int choice;
        std::cout << "Enter your choice (1-7): ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            std::string name, homePhone, workPhone, mobilePhone, additionalInfo;
            std::cout << "Enter Contact Details:\n";
            std::cout << "Name: ";
            std::cin.ignore(); 
            std::getline(std::cin, name);
            std::cout << "Home Phone: ";
            std::cin >> homePhone;
            std::cout << "Work Phone: ";
            std::cin >> workPhone;
            std::cout << "Mobile Phone: ";
            std::cin >> mobilePhone;
            std::cout << "Additional Info: ";
            std::cin.ignore(); 
            std::getline(std::cin, additionalInfo);

            Contact newContact(name, homePhone, workPhone, mobilePhone, additionalInfo);
            phonebook.addContact(newContact);
            std::cout << "Contact added successfully!\n";
            break;
        }
        case 2: {
            std::string searchName;
            std::cout << "Enter the Name to Search: ";
            std::cin.ignore();  
            std::getline(std::cin, searchName);
            phonebook.searchContact(searchName);
            break;
        }
        case 3: {
            std::string deleteName;
            std::cout << "Enter the Name to Delete: ";
            std::cin.ignore();  
            std::getline(std::cin, deleteName);
            phonebook.deleteContact(deleteName);
            std::cout << "Contact deleted successfully!\n";
            break;
        }
        case 4:
            phonebook.showAllContacts();
            break;
        case 5: {
            std::string filename;
            std::cout << "Enter the Filename to Save: ";
            std::cin >> filename;
            phonebook.saveToFile(filename);
            break;
        }
        case 6: {
            std::string filename;
            std::cout << "Enter the Filename to Load: ";
            std::cin >> filename;
            phonebook.loadFromFile(filename);
            break;
        }
        case 7:
            std::cout << "Exiting the Phonebook Application. Goodbye!\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please enter a number between 1 and 7.\n";
        }

        std::cout << "------------------------\n";
    }

    return 0;
}
