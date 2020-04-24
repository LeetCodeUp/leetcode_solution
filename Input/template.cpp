#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> test;
    vector<int> v;
    int n,temp;
 
    cin >> n;
    test.clear();
    for (int i = 0; i<n; i++) {
        v.clear();
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        test.push_back(v);
    }
  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
