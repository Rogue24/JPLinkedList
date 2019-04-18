//
//  JPLinkedNode.m
//  JPLinkedList-Demo
//
//  Created by 周健平 on 2019/4/18.
//  Copyright © 2019 周健平. All rights reserved.
//

#import "JPLinkedNode.h"

@implementation JPLinkedNode

- (instancetype)initWithElement:(id)element nextNode:(JPLinkedNode *)nextNode {
    if (self = [super init]) {
        self.element = element;
        self.nextNode = nextNode;
    }
    return self;
}

@end
