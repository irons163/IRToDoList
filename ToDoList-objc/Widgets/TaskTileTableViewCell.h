//
//  TaskTileTableViewCell.h
//  ToDoList-objc
//
//  Created by irons on 2019/12/28.
//  Copyright © 2019年 irons. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef ^() callback;

@interface TaskTileTableViewCell : UITableViewCell

@property NSString *taskTitle;
@property BOOL isChecked;
@property checkboxCallback;
@property longPressCallback;

@end

NS_ASSUME_NONNULL_END
