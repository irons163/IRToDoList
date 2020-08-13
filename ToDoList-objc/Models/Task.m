//
//  Task.m
//  ToDoList-objc
//
//  Created by irons on 2019/12/28.
//  Copyright © 2019年 irons. All rights reserved.
//

#import "Task.h"

@implementation Task

- (instancetype)initWithName:(NSString *)name done:(BOOL) done {
    if (self = [super init]) {
        _name = name;
        _done = done;
    }
    return self;
}

- (void)toggleDone {
    _done = !_done;
}

@end
