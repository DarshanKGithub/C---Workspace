#include "contactManager.hpp"

using namespace std;

contactManager::contactManager()
{
    cout << "\n In default const...\n ";
    // firstName = "";
    // lastName = "";
    // number = 0;
    // emailId = "";
};

// contactManager::contactManager(string firstName, string lastName, ulong number, string emailId)
// {
//     this->firstName = firstName;
//     this->lastName = lastName;
//     this->number = number;
//     this->emailId = emailId;
// }

void contactManager::Add(string fName, string lName, unsigned number, string emailId)
{

    struct data tmp;

    tmp.firstName = fName;
    tmp.lastName = lName;
    tmp.number = number;
    tmp.emailId = emailId;

    info.push_back(tmp);
}

void contactManager::listAllContacts()
{
    for (int i = 0; i < info.size(); i++)
    {
        cout << "\n  First Name : " << info[i].firstName << "\t Last Name: " << info[i].lastName << "\t Number" << info[i].number << "\t Email:" << info[i].emailId << endl;
    }
}
