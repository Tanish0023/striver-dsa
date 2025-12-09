#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}};
    cout << arr[1].first << endl;
}

void explainVectors()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[1] << endl;
    cout << v[0] << endl;

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    cout << v1[0] << endl;

    vector<int> v2(5); // {0, 0, 0, 0, 0}
    cout << v2[4] << endl;

    vector<int> v3(v1); // v1 is copy of vector v
    cout << v3[4] << endl;

    vector<int>::iterator it = v.begin();

    it++; // v.begin() gives first memory address, then it++ goes to the second memory address
    cout << *(it) << " " << endl;

    for(vector<int>::iterator it1 = v.begin(); it1 != v.end(); it1++){
        cout << *(it1) << " ";
    }
    cout << endl;


    cout << "Before Deleting first: ";
    for(auto it2 = v1.begin(); it2 != v1.end(); it2++){
        cout << *(it2) << " ";
    }
    cout << endl;
    
    cout << "After Deleting first: ";
    v1.erase(v1.begin());
    for(auto it2 = v1.begin(); it2 != v1.end(); it2++){
        cout << *(it2) << " ";
    }
    cout << endl;
    
    vector<int> v4(2,100);
    v.insert(v.begin(), 300);
    for(auto it2 = v.begin(); it2 != v.end(); it2++){
        cout << *(it2) << " ";
    }
    cout << endl;

    v.insert(v.begin(), 2 , 10);
    for(auto it2 = v.begin(); it2 != v.end(); it2++){
        cout << *(it2) << " ";
    }
    cout << endl;
    
    // Merging Two vectors v and v4
    v.insert(v.begin(), v4.begin(), v4.end());
    for(auto it2 = v.begin(); it2 != v.end(); it2++){
        cout << *(it2) << " ";
    }
    cout << endl;

    // Before POP
    cout << v.size() << endl;
    
    v.pop_back();

    // After POP
    cout << v.size() << endl;
    
    cout << "Checking Empty: " << v.empty() << endl;
    
    v.clear();
    cout << "Checking Empty: " << v.empty() << endl;
}


// Here the front operations are simplear as it uses doubly linked list and vector uses singly linked list so there the time complexity for front operations is more
void explainList() {
    list<int> ls;

    ls.push_back(1);
    ls.push_front(1);
}

void explainMaps() {
    map<int, int> mp;
    map<int, pair<int,int>> mpp;
    map<pair<int, int>, int> mpp1;

    mp[1] = 2;
    mpp[1] = {2, 3};
    mpp1[{1,2}] = 3;
}

int main()
{
    cout << "PAIR" << endl;
    explainPairs();

    cout << endl << "VECTOR" << endl;
    explainVectors();
    return 0;
}
