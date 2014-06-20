//
//  myAnnotation.m
//  MapView
//
//  Created by Xin Chen on 6/17/14.
//  Copyright (c) 2014 Xin Chen. All rights reserved.
//

#import "myAnnotation.h"

@implementation myAnnotation

//3.2
-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate subtitle:(NSMutableString *)subtitle title:(NSString *)title e_text:(NSArray *)e_text{
    if ((self = [super init])) {
        self.coordinate =coordinate;
        self.title = title;
        self.category = NULL;
        self.subtitle = subtitle;
        self.e_text = e_text;
    }
    return self;
}

//3.2
-(id) initWithCoordinate:(CLLocationCoordinate2D)coordinate subtitle:(NSMutableString *)subtitle  title:(NSString *)title e_text:(NSArray *)e_text category:(NSString *)category {
    if ((self = [super init])) {
        self.coordinate =coordinate;
        self.title = title;
        self.category = category;
        self.subtitle = subtitle;
        self.e_text = e_text;
    }
    return self;
}

@end