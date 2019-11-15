//
//  ComponentFactory.m
//  ReadingEveryDay
//
//  Created by 周知 on 2019/11/14.
//  Copyright © 2019 Edwin. All rights reserved.
//

#import "ComponentFactory.h"

#import "DataService.h"

@implementation ComponentFactory

+ (id <DataService>)DataService {
    return [[DataService alloc] init];
}

@end
