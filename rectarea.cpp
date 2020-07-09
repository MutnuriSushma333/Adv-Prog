#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
   
   int length, breadth, area;
   cout << "\nEnter the Length of Rectangle : ";
   cin>>length;

   cout << "\nEnter the Breadth of Rectangle : ";
   cin>>breadth;

   area = length * breadth;
   cout << "\nArea of Rectangle : " << area;

   getch();
   return (0);
}
