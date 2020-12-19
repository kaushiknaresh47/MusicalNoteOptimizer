//
//  Algorithm.hpp
//  MusicalNoteOptimizer
//
//  Created by Kaushik Naresh on 12/20/20.
//  Copyright © 2020 Kaushik Naresh. All rights reserved.
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Scale.h"
#include "std_scales.h"

class Algo{
public:
    void optimize(std::vector<std::string> &notes, Scale &scale);

    float dist(std::string n_a, std::string n_b);
private:
    std_scales xyz;
};




#endif /* Algorithm_hpp */
