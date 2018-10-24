#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> &v)
{
    for(unsigned int i = 0; i < v.size(); i++)
    {
       cout << v[i] << "   " << endl;
    }
}

int main()
{
    vector <int> v;
    // display current size
    cout << "Display current size :";
    cout << v.size() << endl;
    cout << "Enter vector elements:" << endl;
    int x;
    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "After entering element size of the vector is :" << v.size() << endl;
    cout << "Display the vector contents :" << endl;
    display(v);
    cout << "add one more value :";
    v.push_back(67);
    cout << "size after adding one element : " << v.size() << endl;
    cout << "Show current contents :" << endl;
    display(v);
    vector <int> :: iterator itr = v.begin();
    itr = itr + 3;
    v.insert(itr,123);
    cout << "size after inserting one element : " << v.size() << endl;
    cout << "Show current contents :" << endl;
    display(v);
    cout << "removing 4th and 5th element :" << endl;
    v.erase(v.begin(),v.begin() + 5);
    cout << "size after deleting two element : " << v.size() << endl;
    cout << "Show current contents :" << endl;
    display(v);

    cout << "END\n";

    return 0;
}
