//
//  main.cpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 7/1/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include "Scale.h"
#include "helper.h"

using namespace std;

int main() {
    string s;
    
    getline(cin, s);
    
    cout << s << endl;
    
    vector<string> n1;
    
    
    getNotes(s, &n1);
    
    cout << n1.size() << endl;
    
    for(int i = 0; i < n1.size(); i++){
        cout << n1[i] << endl;
    }
    
    return 0;
}
