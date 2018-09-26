#include <iostream>
#include <vector>
#include "Data.h"
using namespace std;


void bubbleSort (auto& v);

int main() {
vector <Data> v;

v.push_back ({7,21.01});
Data d;
v.push_back(d);
d.setX(10);
d.setY(12.0);
v.push_back(d);


bubbleSort(v);


for (int i=0; i< v.size(); i++) {
cout << v[i].getX() << " ";
cout << v[i].getY() << " ";
cout << endl;

}
}
void bubbleSort (auto& v)

{
  cout<<endl<<"Bubble Sort"<<endl<<"---------------------"<<endl;

  for ( int i = 0 ; i < v.size( ) ; i++)
  {
    for ( int j = 0 ; j < v.size () -1 ; j++)
	if ( v[j +1 ].getX() < v[ j ].getX() )
	    swap( v[ j +1 ] , v[ j ] );

  }//end outer for (this brace is needed to include the print statement)
}
