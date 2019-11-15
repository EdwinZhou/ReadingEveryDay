//
//  ComponentFactory.h
//  ReadingEveryDay
//
//  Created by 周知 on 2019/11/14.
//  Copyright © 2019 Edwin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DataService.h"

NS_ASSUME_NONNULL_BEGIN

@interface ComponentFactory : NSObject

+ (id <DataService>)DataService;

@end

NS_ASSUME_NONNULL_END
