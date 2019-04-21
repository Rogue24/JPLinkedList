//
//  JPLinkedList.h
//  JPLinkedList-Demo
//
//  Created by 周健平 on 2019/4/18.
//  Copyright © 2019 周健平. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JPLinkedNode.h"

@interface JPLinkedList<ElementType> : NSObject

/** 元素的数量 */
@property (nonatomic, assign, readonly) NSUInteger count;

/** 首节点 */
@property (nonatomic, strong) JPLinkedNode<ElementType> *firstNode;

/**
 * 清除所有元素
 */
- (void)clear;

/**
 * 是否为空
 * @return bool
 */
- (BOOL)isEmpty;

/**
 * 是否包含某个元素
 * @param element 元素
 * @return bool
 */
- (BOOL)containsElement:(ElementType)element;

/**
 * 获取index位置的元素
 * @param index 位置
 * @return index位置的元素
 */
- (ElementType)elementAtIndex:(NSUInteger)index;

/**
 * 查看元素的位置
 * @param element 元素ֵ
 * @return 位置
 */
- (NSUInteger)indexOfElement:(ElementType)element;

/**
 * 设置index位置的元素
 * @param index 位置
 * @param element 元素
 * @return 原来的元素ֵ
 */
- (ElementType)setElement:(ElementType)element atIndex:(NSUInteger)index;

/**
 * 添加元素到尾部
 * @param element 元素
 */
- (void)addElement:(ElementType)element;

/**
 * 在index位置插入一个元素
 * @param index 位置
 * @param element 元素
 */
- (void)insertElement:(ElementType)element atIndex:(NSUInteger)index;

/**
 * 删除最后位置的元素
 * @return 删除的元素ֵ
 */
- (ElementType)removeLastElement;

/**
 * 删除index位置的元素
 * @param index 位置
 * @return 删除的元素ֵ
 */
- (ElementType)removeElementAtIndex:(NSUInteger)index;

//protected void outOfBounds(int index) {
//    throw new IndexOutOfBoundsException("Index:" + index + ", Size:" + size);
//}
//
//protected void rangeCheck(int index) {
//    if (index < 0 || index >= size) {
//        outOfBounds(index);
//    }
//}
//
//protected void rangeCheckForAdd(int index) {
//    if (index < 0 || index > size) {
//        outOfBounds(index);
//    }
//}
@end


