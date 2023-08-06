// reference variable=> referane varaible is nothing but it is another name given to the already existing variable
// & operator is used to create referance variable

#include<iostream>
using namespace std;

void update(int& j)
{
    j++;
}  

int main()
{
    int i=5;
     // creating referance variable

     int &j=i;
     cout<<"--->"<<i<<endl;
     i++;
     cout<<"--->"<<i<<endl;
     j++;
     cout<<"--->"<<i<<endl;
     cout<<"--->"<<j<<endl;

    int n=5;
    cout<<"before:  "<<n<<endl;
    update(n);
    cout<<"before:  "<<n<<endl;
         
    return 0;
}