#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
        int id1,id2,id3;
        string n1,n2,n3;
        char sec1,sec2,sec3;
        int m1,m2,m3;

        cin>>id1>>n1>>sec1>>m1;
        cin>>id2>>n2>>sec2>>m2;
        cin>>id3>>n3>>sec3>>m3;

        if(m1>m2 && m1>m3)     cout<<id1<<" "<<n1<<" "<<sec1<<" "<<m1<<endl;
        else if(m2>m1 && m2>m3)cout<<id2<<" "<<n2<<" "<<sec2<<" "<<m2<<endl;
        else if(m3>m1 && m3>m2)cout<<id3<<" "<<n3<<" "<<sec3<<" "<<m3<<endl;


        else if(m1>m2 && m3>m2 && m1==m3)
        {
            if(id1<id3)cout<<id1<<" "<<n1<<" "<<sec1<<" "<<m1<<endl;
            else       cout<<id3<<" "<<n3<<" "<<sec3<<" "<<m3<<endl;
        }

        else if(m1>m3 && m2>m3 && m1==m2)
        {
            if(id1<id2)cout<<id1<<" "<<n1<<" "<<sec1<<" "<<m1<<endl;
            else       cout<<id2<<" "<<n2<<" "<<sec2<<" "<<m2<<endl;
        }

        else if(m2>m1 && m3>m1 && m2==m3)
        {
            if(id2<id3)cout<<id2<<" "<<n2<<" "<<sec2<<" "<<m2<<endl;
            else       cout<<id3<<" "<<n3<<" "<<sec3<<" "<<m3<<endl;
        }

    }
}
