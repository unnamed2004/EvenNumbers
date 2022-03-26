#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int power,n;
    bool found = false;
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        power=pow(2,i);
        if(power == n)
        {
            found =true;
            break;
        }

    }



    if(found == true) cout<< "YES";
    else cout<<"NO";
}

