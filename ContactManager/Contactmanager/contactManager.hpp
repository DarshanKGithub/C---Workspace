#include <bits/stdc++.h>

struct data
{
    std::string firstName;
    std::string lastName;
    std::string emailId;
    unsigned long number;
};

class contactManager
{
public:
    contactManager();
    // contactManager(std::string, std::string, ulong, std::string);

    // Member function to Add,Edit, List, Delete
    void Add(std::string, std::string, unsigned, std::string);
    // void Display();
    void listAllContacts();

    void list();

    // function to edit details

    void edit();
    void editPhoneNumber();
    void editName();
    void editEmail();

    // delete user from system

    void removeUser();
    void removeUserName();
    void removeUserNumber();
    void removeUserEmail();

    void searchName();
    void searchNumber();
    void searchEmail();

    void backUp();
    void restore();

    // struct data info; // (info)variables representation
    std::vector<struct data> info;
};
