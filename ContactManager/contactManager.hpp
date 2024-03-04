#include <bits/stdc++.h>

// Defining and assigning the varaibles and their value

struct data {
   std::string firstName;
   std::string lastName;
   std::ulong number;
   std::string emailId;
}

class contactManager{
    contactManager();

    // Member function to Add, Edit, List, Delete
    
    void Add(std::string, std::string, ulong number, std::emailId);

    void listAllContacts();

    // struct data info // (info) varaibles representation

    std::vector<struct data> info;
}