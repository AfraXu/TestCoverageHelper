//
//  TestCoverageHelper.h
//  TestCoverageOCHelper
//
//  Created by 徐芙蓉 on 2023/5/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TestCoverageHelper : NSObject
+ (instancetype)shareInstance;
- (void)resignInfo;
- (void)clearCoverage;
- (void)getCoverage;
@end

NS_ASSUME_NONNULL_END
