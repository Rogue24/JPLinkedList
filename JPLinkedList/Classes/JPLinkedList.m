//
//  JPLinkedList.m
//  JPLinkedList-Demo
//
//  Created by 周健平 on 2019/4/18.
//  Copyright © 2019 周健平. All rights reserved.
//

#import "JPLinkedList.h"

@implementation JPLinkedList

static NSInteger const ELEMENT_NOT_FOUND = -1;

- (void)clear {
    _count = 0;
    _firstNode = nil;
}

- (BOOL)isEmpty {
    return _count == 0;
}

- (BOOL)containsElement:(id)element {
    return [self indexOfElement:element] != ELEMENT_NOT_FOUND;
}

- (id)elementAtIndex:(NSUInteger)index {
    
    return nil;
}

- (NSUInteger)indexOfElement:(id)element {
    return 0;
}

- (id)setElement:(id)element atIndex:(NSUInteger)index {
    return nil;
}

- (void)addElement:(id)element {
    
}

- (void)insertElement:(id)element atIndex:(NSUInteger)index {
    
}

- (id)removeLastElement {
    return nil;
}

- (id)removeElementAtIndex:(NSUInteger)index {
    return nil;
}

@end

