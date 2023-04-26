#include "myclass.h"

int main()
{
using namespace my;
Box box [3] = {
{3, 12, 9},
{12, 1, 5},
{7, 6, 5}
};
Box *p=box;
for (int i=0; i<3, i++) {
p->enlfrge();
p->report();
p++;
}

return 0;
}
