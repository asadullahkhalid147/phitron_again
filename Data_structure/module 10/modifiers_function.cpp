#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>mylist={10,20,30,40,50,30,60,30,70};
    list<int>newlist;
    //1.assign
    // newlist=mylist;//assign list 1
    // newlist.assign(mylist.begin(),mylist.end());//assign list 2


    // for(auto val:newlist)
    // {
    //     cout<<val<<" ";
    // }

    //2.push,pop

    // mylist.push_back(100);
    // mylist.push_front(200);


    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // mylist.pop_back();
    // mylist.pop_front();


    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
    // }

    //3.insert in index
    // mylist.insert(next(mylist.begin(),2),100);
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
        
    // }

    //4. erase from index
    // mylist.erase(next(mylist.begin(),2));
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
        
    // }

    //5. insert a multiple value
    // mylist.insert(next(mylist.begin(),3),{100,200,300});
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
        
    // }

    //6. insert a list
    // list<int>wowlist={100,200,300};
    // mylist.insert(next(mylist.begin(),3),wowlist.begin(),wowlist.end());
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
        
    // }

    //7.insert a vector
    // vector<int>v={60,70,80};
    // mylist.insert(next(mylist.begin(),3),v.begin(),v.end());
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
         
    // }

    //8.erase multiple value
    // mylist.erase(next(mylist.begin(),2),next(mylist.begin(),5)); 
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
         
    // }

    //9.replace value
    // replace(mylist.begin(),mylist.end(),30,100);
    // for(auto val:mylist)
    // {
    //     cout<<val<<" ";
         
    // }
    
    //10. find value
    auto it=find(mylist.begin(),mylist.end(),60);
    if(it==mylist.end())cout<<"Not Found"<<endl;
    else cout<<"Found"<<endl;


    return 0;
}