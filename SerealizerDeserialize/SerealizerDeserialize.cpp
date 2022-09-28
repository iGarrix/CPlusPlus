#include <iostream>
#include "User.h"
using namespace std;

int main()
{
    User user{"Alex", "Wrist", time(0)};
    user.saveToFile("alex");
}