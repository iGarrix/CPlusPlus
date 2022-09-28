#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main()
{
    deque<int> list;
	list.push_back(54);
	list.push_front(32);

	for (int numb : list) {
		cout << numb << " - ";
	}
}



