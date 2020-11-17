#include <cassert>
#include <iostream>

using namespace std;

int Suma(int x, int y) {
	
return x+y;
}
int Riznutsya(int x, int y) {
	
return x-y;
}
int Mnozhennya(int x, int y) {
	
return x*y;
}
int Dilennya(int x, int y) {
	
return x/y;
}
void TestSuma()
{
assert(Suma(2,3)==5);
assert(Suma(21,3)==24);
assert(Suma(24,24)==48);

cout<<"TestSuma OK"<<endl;
}
void TestRiznutsya()
{
assert(Riznutsya(10,5)==5);
assert(Riznutsya(8,4)==4);
assert(Riznutsya(20,3)==17);

cout<<"TestRiznutsya OK"<<endl;
}
void TestDilennya()
{
assert(Dilennya(10,5)==2);
assert(Dilennya(50,5)==10);
assert(Dilennya(21,3)==7);

cout<<"TestDilennya OK"<<endl;
}
void TestMnozhennya()
{
assert(Mnozhennya(2,3)==6);
assert(Mnozhennya(0,3)==0);
assert(Mnozhennya(12,12)==144);

cout<<"TestMnozhennya OK"<<endl;
}
int main()
{
TestSuma();
TestRiznutsya();
TestDilennya();
TestMnozhennya();
	return 0;
}
