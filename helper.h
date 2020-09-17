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


int validateString(std::string notes);

void getNotes(std::string notes, std::vector<std::string>* n);

std::vector<int> notesToInt(std::vector<std::string> notes);

#endif /* helper_h */
