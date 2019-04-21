//
//  JPLinkedNode.h
//  JPLinkedList
//
//  Created by 周健平 on 2019/4/20.
//

#import <Foundation/Foundation.h>

@interface JPLinkedNode<ElementType> : NSObject
- (instancetype)initWithElement:(ElementType)element nextNode:(JPLinkedNode<ElementType> *)nextNode;
@property (nonatomic, strong) ElementType element;
@property (nonatomic, strong) JPLinkedNode<ElementType> *nextNode;
@end
