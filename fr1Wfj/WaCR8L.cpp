#include<iostream>

#include<math.h>

using namespace std;

int main()

{

        float first,second,third;

        float s,area;

        cout<<"Enter size of each sides of triangle"<<endl;

        cout<<"Enter size for First Side = ";

        cin>>first;

        cout<<"Enter size for Second Side = ";

        cin>>second;

        cout<<"Enter size for Third Side = ";

        cin>>third;

        s = (first+second+third)/2;

        area = sqrt(s*(s-first)*(s-second)*(s-third)); // Herons Formula

        cout<<"Area of Triangle= "<<area<<endl;

        return 0;

}
