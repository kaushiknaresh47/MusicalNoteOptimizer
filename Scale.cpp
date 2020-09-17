//
//  Scale.cpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 7/1/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#include "Scale.h"

Scale::Scale(std::string setter[7]){
    for (int i = 0; i < 7; i++) {
        notes[i] = setter[i];
    }
}


std::string Scale::getNote(int index) const{
    return notes[index];
}
