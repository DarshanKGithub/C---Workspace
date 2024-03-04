#include "contactManager.hpp"

using namespace std;

int main()
{
   int i;

   contactManager CM; // default const called

   CM.ADD("Darshan", "Kshetri", 9112794245, "darshankshetri8@gmail.com");
   CM.Add("Priya", "Agrawal", 8975766502, "priyaagrawar0108@gmail.com");

   CM.listAllContacts();

   return 0;
}