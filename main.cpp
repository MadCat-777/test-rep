//==========
#include <iostream>
#include <string>
//==========
using namespace std;
//==========
int main()
{
   cout<<"Cake is lie"<<endl;
   
   string inpt;
   cin>>inpt;
   
   int temp=0, num=0;
   
   num=size(inpt);
   
   for (int i = 0; i < num; i++)
   {
      switch (inpt[i])
      {
         case '0':
            temp++;
         break;

         case '1':
            temp++;
         break;

         case '2':
            temp++;
         break;

         case '3':
            temp++;
         break;

         case '4':
            temp++;
         break;

         case '5':
            temp++;
         break;

         case '6':
            temp++;
         break;

         case '7':
            temp++;
         break;

         case '8':
            temp++;
         break;

         case '9':
            temp++;
         break;

         default:
         break;
      }
   }

   if(temp == num)
   {
      cout << true << endl;
   }
   else
   {
      cout << false << endl;
   }
   
   return 0;
}
//==========