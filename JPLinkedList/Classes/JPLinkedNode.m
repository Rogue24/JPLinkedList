//
//  JPLinkedNode.m
//  JPLinkedList
//
//  Created by 周健平 on 2019/4/20.
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

- (void)dealloc {
    NSLog(@"node死了");
}

@end
