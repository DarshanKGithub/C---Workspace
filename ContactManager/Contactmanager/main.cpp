#include "contactManager.hpp"

using namespace std;

int main()
{
    int i;
    contactManager CM; // Default const called

    // Parametrized  constructor test
    // contactManager c1("Darshan ", "Kshetri", 9112794245, "dkoder@gmail.com");
    CM.Add("Darshan", "Kshetri", 9122794245, "dkoder@gmail.com");
    CM.Add("Priya", "Agrawal", 8975766502, "priya@gmail.com");

    CM.listAllContacts();

    return 0;
}