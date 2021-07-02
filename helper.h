//
//  helper.hpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 9/17/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#ifndef helper_h
#define helper_h

#include <stdio.h>
#include <string>
#include <vector>

typedef std::vector<std::string> string_vec ;
typedef std::string string;


int validateString(string notes);

void getNotes(string notes, string_vec* n);

std::vector<int> notesToInt(string_vec notes);

#endif /* helper_h */
