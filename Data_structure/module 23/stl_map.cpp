#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    // mp.insert({"sakib al hasan",75});
    // mp.insert({"tamim iqbal",19});
    // mp.insert({"akib",0});
    // mp.insert({"Shamim",79});

    mp["sakib al hasan"]=79;
    mp["akib"]=100;
    mp["tamim"]=79;
    
    cout<<mp["Shamim"]<<endl;

    if(mp.count("akib"))
    {
        cout<<"Ase"<<endl;
    }
    else
    {
        cout<<"Nai"<<endl;
    }
    // for(auto it = mp.begin(); it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}