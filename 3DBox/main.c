//
//  main.c
//  3DBox
//
//  Created by JIAN WANG on 5/5/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#include <stdio.h>

struct ThreeDBox {
    float height;
    float width;
    float depth;
};

float volume(struct ThreeDBox box);

struct ThreeDBox createThreeDBox (float height, float weight, float depth);

float timesOfVolumeComparison(struct ThreeDBox box1, struct ThreeDBox box2);

int main(int argc, const char * argv[]) {
    
    return 0;
}

// Function bodies

float volume(struct ThreeDBox box) {
    return box.height * box.width * box.depth;
}

struct ThreeDBox createThreeDBox (float height, float width, float depth){
    struct ThreeDBox newBox;
    newBox.height = height;
    newBox.width = width;
    newBox.depth = depth;
    return newBox;
};

float timesOfVolumeComparison(struct ThreeDBox box1, struct ThreeDBox box2) {
    return volume(box1) / volume(box2);
}
