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
#include <vector>
#include "helper.h"

// The Scale class refers to a single scale.
// For instance, the C major scale would exist in the program as an instance
// of the scale class

class Scale{
public:
    Scale(string setter[7]);
    string getNote(int index) const;
private:
    string_vec notes;

};

#endif /* Scale_h */
