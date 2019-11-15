//
//  DataService.h
//  ReadingEveryDay
//
//  Created by 周知 on 2019/11/14.
//  Copyright © 2019 Edwin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DataService <NSObject>

- (void)fetchListCompletion:(void(^)(NSDictionary *data, NSError *))completion;
- (void)fetchMoreRecommend:(void(^)(NSDictionary *data, NSError *))completion;

@end

@interface DataService : NSObject <DataService>

@end

NS_ASSUME_NONNULL_END
