//
//  FeedListViewModel.h
//  ReadingEveryDay
//
//  Created by 周知 on 2019/11/15.
//  Copyright © 2019 Edwin. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DataService.h"

NS_ASSUME_NONNULL_BEGIN

@interface FeedListViewModel : NSObject

- (void)setDataService:(id <DataService>)dataService;

@end

NS_ASSUME_NONNULL_END
