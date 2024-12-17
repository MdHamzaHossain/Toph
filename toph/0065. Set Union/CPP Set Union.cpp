#include <iostream>
#include <set>
using namespace std;

int main()
{

    int n, m;
    scanf("%d %d", &n, &m);
    if(! (0<n && m < 100) ) return 1;
    int t;
    set<int> resultSet;
        for (int i = 0; i <  n; i++){
            cin >> t;
            resultSet.insert(t);
        }
        for (int i = 0; i <  m; i++){
            cin >> t;
            resultSet.insert(t);

        }
        int it=0;
         for (auto i : resultSet)
        {
        cout << i ;
        //cout << it << " " << resultSet.size() << endl;
        it++;
            if(it < resultSet.size()) cout << " ";
            
        }
        cout << endl;
}