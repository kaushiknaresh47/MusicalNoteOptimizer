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

class std_scales {
public:
    void scale_access(std::string &scale, std::string scale_name);
private:
    std::vector<std::string> all_scales;
}



#endif /*std_scale_h*/