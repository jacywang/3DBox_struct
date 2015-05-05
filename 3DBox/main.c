//
//  main.c
//  3DBox
//
//  Created by JIAN WANG on 5/5/15.
//  Copyright (c) 2015 JWANG. All rights reserved.
//

#include <stdio.h>

struct ThreeDBox {
    float a;
    float b;
    float c;
};

float volume(struct ThreeDBox box);

struct ThreeDBox createThreeDBox (float a, float b, float c);

float timesOfVolumeComparison(struct ThreeDBox box1, struct ThreeDBox box2);

int main(int argc, const char * argv[]) {
    
    return 0;
}

// Function bodies

float volume(struct ThreeDBox box) {
    return box.a * box.b * box.c;
}

struct ThreeDBox createThreeDBox (float a, float b, float c){
    struct ThreeDBox newBox;
    newBox.a = a;
    newBox.b = b;
    newBox.c = c;
    return newBox;
};

float timesOfVolumeComparison(struct ThreeDBox box1, struct ThreeDBox box2) {
    return volume(box1) / volume(box2);
}
