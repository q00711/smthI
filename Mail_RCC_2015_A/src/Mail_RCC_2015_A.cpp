//============================================================================
// Name        : Mail_RCC_2015_A.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    multiset<int> Grisha;
    multiset<int> Dima;
    int numTests, n, l, i, j, temp, a1, a2;

    cin >> numTests;

    for (i=0; i<numTests; i++) {
        Grisha.clear();
        Dima.clear();

        cin >> n;
        cin >> l;

        for (j=0; j<n; j++) {

            cin >> temp;
            Grisha.insert(temp);

        }

        for (j=0; j<n; j++) {

            cin >> temp;
            Dima.insert(-temp);

        }

        std::set<int>::iterator it = Grisha.begin();
        a1 = 0;
        for (j = 0; j < l; j++) {
            a1 += *it;
            ++it;
        }
        it = Dima.begin();
        a2 = 0;
        for (j = 0; j < l; j++) {
            a2 += *it;
            ++it;
        }

        a2=-a2;

        if (a1>a2) {
         cout << "YES" << endl;
            //printf("YES\n");
        } else {
          cout << "NO" << endl;
            //printf("NO");
        }

    }

}
