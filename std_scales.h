//
//  std_scales.h
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 7/1/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#ifndef std_scale_h
#define std_scale_h

#include <string>
#include <vector>
#include <stdio.h>
#include <unordered_map>
#include "helper.h"

class std_scales {
public:
    void scale_access(string &scale, string scale_name);
    float note_val_access(string note)
    {
        return notes_vals[note];
    }
private:
    int x;
    std::unordered_map<string, float> notes_vals =
    {
        {"C",   1},
        {"C#",  1.5},
        {"Db",  1.5},
        {"D",   2},
        {"D#",  2.5},
        {"Eb",  2.5},
        {"E",   3},
        {"F",   4},
        {"F#",  4.5},
        {"Gb",  4.5},
        {"G",   5},
        {"G#",  5.5},
        {"Ab",  5.5},
        {"A",   6},
        {"A#",  6.5},
        {"Bb",  6.5},
        {"B",   7}
    };
};



#endif /*std_scale_h*/
