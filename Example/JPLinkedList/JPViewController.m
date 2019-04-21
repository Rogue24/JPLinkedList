//
//  JPViewController.m
//  JPLinkedList
//
//  Created by Rogue24 on 04/18/2019.
//  Copyright (c) 2019 Rogue24. All rights reserved.
//

#import "JPViewController.h"
#import <JPLinkedList/JPLinkedList.h>

@interface JPViewController ()
@property (nonatomic, strong) JPLinkedList *linkList;
@end

@implementation JPViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.linkList = [[JPLinkedList alloc] init];
    
    JPLinkedNode *node = [[JPLinkedNode alloc] init];
    node.element = @0;
    self.linkList.firstNode = node;
    
    for (NSInteger i = 1; i < 10; i++) {
        JPLinkedNode *lastNode = node;
        node = [[JPLinkedNode alloc] init];
        node.element = @(i);
        if (lastNode) lastNode.nextNode = node;
    }
    
    
    NSInteger i = 0;
    node = self.linkList.firstNode;
    while (i < 10) {
        NSLog(@"%@", node.element);
        node = node.nextNode;
        i += 1;
    }
    
    self.linkList.firstNode = nil;
}

@end
