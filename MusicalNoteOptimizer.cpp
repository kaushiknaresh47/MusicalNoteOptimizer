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
        
    vector<string> n1;
    
    int testV = validateString(s);
    if (!testV) {
        cout << "invalid input" << endl;
        return 0;
    }
    
    getNotes(s, &n1);
    
    cout << "number of notes is: " << n1.size() << endl;
    cout << "printing out notes: " << endl;
    for(int i = 0; i < n1.size(); i++){
        cout << n1[i] << endl;
    }
    
    return 0;
}
