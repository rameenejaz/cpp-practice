#include <iostream>
using namespace std;
void swap(int *i, int *j)
{
int temp = *i;
 *i = *j;
*j = temp;
}
int main(
{
int x=10, y=20;
swap(&x, &y);
cout<<x<<" "<<y<<endl;
return 0;
 
}
 