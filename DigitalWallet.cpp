#include <bits/stdc++.h>
using namespace std;

void DigitalWallet()
{
    int n;
    cin >> n;
    unordered_map<int, int> accounts;
    for (int i=0;i<n;i++)
    {
        int id,deposit;
        cin>>id>>deposit;
        accounts[id]=deposit;
    }
    int q;
    cin>>q;
    for (int i=0;i<q;i++)
    {
        int from,to,amount;
        cin>>from>>to>>amount;
        if(accounts[from] >= amount)
        {
            accounts[from] -= amount;
            accounts[to] += amount;
            cout<<"Success"<<"\n";
        }
        else
        {
            cout<<"Failure"<<"\n";
        }
    }
    cout<<"\n";
    vector<pair<int, int>> sortedAccounts;
    for(auto& account : accounts)
    {
        sortedAccounts.push_back(account);
    }
    
    sort(sortedAccounts.begin(), sortedAccounts.end(), [](pair<int, int>& a, pair<int, int>& b)
    {
        return a.second <= b.second;
    });
    
    for(auto& account : sortedAccounts)
    {
        cout<<account.first<<" "<<account.second<<"\n";
    }
}

int main() 
{
    DigitalWallet();
}