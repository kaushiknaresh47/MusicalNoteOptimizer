//
//  Algorithm.cpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 12/20/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#include "Algorithm.h"
#include "std_scales.h"


/*
    First off, need to define what distance means
    Using piano keys with the additional numbering, we create a way of calculating
    a sort of 1 dimensional distance (for now)
1       'C'
1.5     'C#'/'Db'
2       'D'
2.5     'D#'/'Eb'
3       'E'
4       'F'
4.5     'F#'/'Gb'
5       'G'
5.5     'G#'/'Ab'
6       'A'
6.5     'A#'/'Bb'
7       'B'
 
    DISCLAIMER: As of now, we are not taking musical sense into consideration...
    
    So given these assigned values, we can calculate the absolute distance between them as being
    how "far away" one note is from another
 
    This keymapping is stored in the Scale class
*/

// dist
// args: first note (n_a), second note (n_b)
// return: distance between the two notes.
float Algo::dist(std::string n_a, std::string n_b)
{
    return fabsf(xyz.note_val_access(n_a) - xyz.note_val_access(n_b));
}


// optimize
// args: the vector of notes to be optimized (notes), the scale to optimize to (scale)
void Algo::optimize(std::vector<std::string> &notes, Scale &scale)
{
    std::vector<std::vector<int>> opt;
    opt.resize(7);
    for(int i = 0; i < 7; i++)
    {
        opt[i].resize(notes.size());
    }
    
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < notes.size(); j++){
            dist(scale.getNote(i), notes[j]);
        }
    }
}


