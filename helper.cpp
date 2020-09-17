//
//  helper.cpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 9/17/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#include "helper.h"

int validateString(std::string notes){
    
    for (int i = 0; i < notes.length(); i++){
        if (notes[i] != 'C' ||
            notes[i] != 'D' ||
            notes[i] != 'E' ||
            notes[i] != 'F' ||
            notes[i] != 'G' ||
            notes[i] != 'A' ||
            notes[i] != 'B' ||
            notes[i] != '#' ||
            notes[i] != 'b' ||
            notes[i] != ' ') return 0;
        
        if (i > 0){
            if (notes[i] == 'b' || notes[i] == '#') {
                if (notes[i-1] != 'C' ||
                    notes[i-1] != 'D' ||
                    notes[i-1] != 'E' ||
                    notes[i-1] != 'F' ||
                    notes[i-1] != 'G' ||
                    notes[i-1] != 'A' ||
                    notes[i-1] != 'B') return 0;
            }
        } else if (notes[i] == 'b' || notes[i] == '#') return 0;
        
        
        
    }
    
    
    return 1;
}

void getNotes(std::string notes, std::vector<std::string>* n){
    // valid notes are: 'C' 'C#'/'Db' 'D' 'D#'/'Eb'
    //                  'E' 'F' 'F#'/'Gb' 'G'
    //                  'G#'/'Ab' 'A' 'A#'/'Bb' 'B'
    // So: C C#
    //     D Db D#
    //     E Eb
    //     F F#
    //     G Gb G#
    //     A Ab A#
    //     B Bb
    
    int len = notes.length();
    
    
    
    for (int i = 0; i < len - 1; i++){
        switch (notes[i]) {
            case 'C':
                if (notes[i+1] == '#'){
                    n->push_back("C#");
                    i++;
                } else {
                    n->push_back("C");
                }
                break;
            case 'D':
                if (notes[i+1] == '#'){
                    n->push_back("D#");
                    i++;
                } else if (notes[i+1] == 'b'){
                    n->push_back("Db");
                    i++;
                } else {
                    n->push_back("D");
                }
                break;
            case 'E':
                if (notes[i+1] == 'b'){
                    n->push_back("Eb");
                    i++;
                } else {
                    n->push_back("E");
                }
                break;
            case 'F':
                if (notes[i+1] == '#'){
                    n->push_back("F#");
                    i++;
                } else {
                    n->push_back("F");
                }
                break;
            case 'G':
                if (notes[i+1] == '#'){
                    n->push_back("G#");
                    i++;
                } else if (notes[i+1] == 'b'){
                    n->push_back("Gb");
                    i++;
                } else {
                    n->push_back("G");
                }
                break;
            case 'A':
                if (notes[i+1] == '#'){
                    n->push_back("A#");
                    i++;
                } else if (notes[i+1] == 'b'){
                    n->push_back("Ab");
                    i++;
                } else {
                    n->push_back("A");
                }
                break;
            case 'B':
                if (notes[i+1] == 'b'){
                    n->push_back("Bb");
                    i++;
                } else {
                    n->push_back("B");
                }
                break;
            default:
                break;
        }
    }
    
    
    std::string s(1, notes[len-1]);
    
    if (notes[len-1] == '#' || notes[len-1] == 'b'){ } else { n->push_back(s); }
}
