
#include <iostream>
using namespace std;
int main()
{
    int a1;
    int an;
    float d;
    cout<<"\n Enter the first term: ";
    cin >> a1; 
    cout<<"\n Enter the term that you want: ";
     cin >> an;
    cout<<"\n Enter the diff: ";
    cin >> d;
    float formula = a1+(an-1)*d;
    cout<<formula;
    

    return 0;
}
