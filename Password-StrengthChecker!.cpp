#include <iostream>
#include<stdlib.h>
using namespace std;
string n;

int main()
{  
   string inputTarget;
   cout<<"\n\n\n\t\t----Welcome To Password-Strength Checker----"<<"\n\n";
   bool isfound = true;
   int listRange;
   for(int i=0;true;i++){
      cin>>n;
      if(i==0){
         cout<<"Checking In Dictionary...\n";
         listRange = stoi(n);
         cout<<"Number Of Passwords In The Dictionary : "<<listRange<<endl;
       if(listRange<10000000){
       cout<<"Sorry! I Required Minimum No Of Passwords In The Dictoinary : NoP>=10000000\n";
       cout<<"Please Update The Dictionary Where Minimum NoP>=10000000 Passwords Are Present!\n";
       exit(0);
      }
       continue;  
      }
      if(i==1){
         inputTarget = n;
         continue;
      }
      if(n==inputTarget){
         cout<<"Password Found In Given Dictionary : "<<"["<<n<<"]";
         cout<<"\nAt Line Number "<<"["<<i+1<<"]";
         cout<<" If all the passowords are spaceless!";
         isfound = false;
         cout<<"\nWarning : Change This Password Rightnow!\nThis Password Can Be Easily Cracked By Dictionary Attacks...";
         break;
      }
      if(i>listRange+2){
         break;
      }
      
   }
   if(isfound){
      cout<<"Great : Password Isn't Present In The Dictionary!\nThat's Mean Your Password Is Very Tought To Crack By Dictionary Attacks...";
   }
   cout<<endl;
   
}