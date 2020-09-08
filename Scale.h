//
//  Scale.h
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 7/1/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#ifndef Scale_h
#define Scale_h

#include <stdio.h>
#include <string>

class Scale{
public:
    Scale(std::string setter[10]){
        for (int i = 0; i < 10; i++) {
            notes[i] = setter[i];
        }
    }
    
    std::string getNote(int index) const{
        return notes[index];
    }
private:
    std::string notes[10];
};

#endif /* Scale_h */
