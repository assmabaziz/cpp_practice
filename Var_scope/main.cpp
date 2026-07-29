#include <iostream>

using namespace std;

int GlobalVar1 = 50 ;
string GlobalVar2 = "Assma" ;

void procedureTest()
{
    int LocalVar1 = 20;
    // string LocalVar2 = "Assma" ;

}


int main()
{

    cout << "The first global var before  reassign:  " << ::GlobalVar1 <<  endl;
    ::GlobalVar1++ ;
    cout << "The first global var after adding 1: " << ::GlobalVar1 << endl ;
    ::GlobalVar1-- ;
    cout << "The first global var minus 1: " << ::GlobalVar1 << endl ;
    return 0;
}
