#include <iostream>

#include "sortedtype.cpp"

using namespace std;

class timeStamp

{

private:

int ss;

int mm;

int hh;

public:

/*timeStamp(int ss, int mm, int hh)

{

this->hh = hh;

this->mm = mm;

this->ss = ss;

}*/

timeStamp()

{

this->hh = 0;

this->mm = 0;

this->ss = 0;

}

void set(int ss, int mm, int hh)

{

this->hh = hh;

this->mm = mm;

this->ss = ss;

}

bool operator<(const timeStamp &rh)

{

if (this->hh < rh.hh)

return true;

if (this->mm < rh.mm)

return true;

if (this->ss < rh.ss)

return true;

return false;

}

bool operator>(const timeStamp &rh)

{

if (this->hh > rh.hh)

return true;

if (this->mm > rh.mm)

return true;

if (this->ss > rh.ss)

return true;

return false;

}

bool operator!=(const timeStamp &rh)

{

if (this->hh != rh.hh || this->mm != rh.mm || this->ss != rh.ss)

return true;

return false;

}

void print()

{

cout << ss << ":" << mm << ":" << hh << endl;

}

};

void printList(SortedType<int> list)

{

list.ResetList();

for (int i = 0; i < list.LengthIs(); i++)

{

int item = 0;

list.GetNextItem(item);

cout << item << " ";

}

cout << endl;

}

int main()

{



printList(list);
