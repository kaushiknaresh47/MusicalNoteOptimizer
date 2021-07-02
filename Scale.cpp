//
//  Scale.cpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 7/1/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#include "Scale.h"
#include <cassert>

// Scale constructor
// The constructor sets the scale to the given set of notes...
// (This function may not be necessary)
Scale::Scale(string setter[7]){
    notes.resize(7);
    for (int i = 0; i < 7; i++) {
        notes[i] = setter[i];
    }
}


// getNote
// args: index within a scale
// return: the note at the given index of the scale
string Scale::getNote(int index) const{
    assert(index > 0 && index < 7);
    return notes[index];
}
