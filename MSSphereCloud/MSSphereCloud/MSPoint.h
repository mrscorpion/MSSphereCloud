//
//  MSPoint.h
//  sphereTagCloud
//
//  Created by mrscorpion on 14/8/31.
//  Copyright (c) 2014年 mrscorpion. All rights reserved.
//

#ifndef sphereTagCloud_DBPoint_h
#define sphereTagCloud_DBPoint_h

struct MSPoint {
    CGFloat x;
    CGFloat y;
    CGFloat z;
};

typedef struct MSPoint MSPoint;

MSPoint MSPointMake(CGFloat x, CGFloat y, CGFloat z) {
    MSPoint point;
    point.x = x;
    point.y = y;
    point.z = z;
    return point;
}
#endif
