//
//  JPLinkedNode.h
//  JPLinkedList-Demo
//
//  Created by 周健平 on 2019/4/18.
//  Copyright © 2019 周健平. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface JPLinkedNode : NSObject
- (instancetype)initWithElement:(id)element nextNode:(JPLinkedNode *)nextNode;
@property (nonatomic, strong) id element;
@property (nonatomic, strong) JPLinkedNode *nextNode;
@end

