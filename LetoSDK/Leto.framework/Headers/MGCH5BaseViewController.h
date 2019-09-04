//
//  MGCH5ViewController.h
//  Leto
//
//  Created by yuan yao on 2019/4/20.
//  Copyright © 2019 ledong. All rights reserved.
//

#import "LJBaseViewController.h"

@class LJJumpConfig;

NS_ASSUME_NONNULL_BEGIN

@interface MGCH5BaseViewController : LJBaseViewController

@property (nonatomic, strong) LJJumpConfig *jumpConfig;
@property (nonatomic, strong) void (^exitBlock)(void);
@property (nonatomic, strong) void (^menuFuncBlock) (void);
@property (nonatomic, copy) NSString *coinBalance;

/**监听游戏运行状态*/
- (void)monitorGameRunStatusWithType:(NSInteger)runType;

- (void)reloadView;

- (CGFloat)getCurrentGameTime;
- (NSString *)getCurCoinAward;

- (void)startHighVideoAlertWithAllTime:(NSInteger)allTime;
/**暂停浮窗*/
- (void)pauseFloatWindow;
@end

NS_ASSUME_NONNULL_END
