//
//  Task.h
//  ToDoList-objc
//
//  Created by irons on 2019/12/28.
//  Copyright © 2019年 irons. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Task : NSObject

@property NSString *name;
@property BOOL done;

- (void)toggleDone;

@end

NS_ASSUME_NONNULL_END
