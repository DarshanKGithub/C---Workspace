#include "contactManager.hpp"
using namespace std;

contactManager::contactManager()
{
    cout << "\n In Default Const..\n";

}

void contactManager::Add(string firstName, strin lastName, ulong number, string emailId)
{
    struct data tmp;

    tmp.firstName = firstName;
    tmp.lastName = lastName;
    tmp.number = number;
    tmp.emailId = emailId;

    info push_back(tmp);
}

void contactManage::listAllContacts()
[
    for (int i = 0 ; i < info.size() ; i++)
    {
        cout << "\n First Name:" << info[i].firstName << "\t Last Name:" << info[i].lastName << "\t PhoneNo: " << info[i].number << "\t Email:" << info[i].emailId << endl;
    }
]