#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    int n1 = 0, n2 = 1, n3, i, num;
    clock_t start,end;
    cout<<" enter the number :";
    cin>> num;
    cout<<n1<<" "<<n2<<" ";
    start = clock();
    for(i=2;i<num;i++)
    {
        n3 = n1 + n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
    end = clock();
    cout<<"\n time taken:"<<double(end-start)/double(CLOCKS_PER_SEC)<<"s";
    return 0;
}