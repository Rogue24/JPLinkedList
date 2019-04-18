//
//  JPLinkedList.h
//  JPLinkedList-Demo
//
//  Created by 周健平 on 2019/4/18.
//  Copyright © 2019 周健平. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JPLinkedNode.h"

@interface JPLinkedList : NSObject
@property (nonatomic, assign, readonly) NSUInteger count;
@property (nonatomic, strong, readonly) JPLinkedNode *firstNode;
@end

