//
//  LJGameCenterViewController.h
//  LetoUI
//
//  Created by yuan yao on 2019/3/4.
//  Copyright © 2019 yuan yao. All rights reserved.
//

#import <Leto/Leto.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MGCGameCenterVCType) {
    /**默认的*/
    MGCGameCenterVCType_Default,
    /**自定义的*/
    MGCGameCenterVCType_Custom,
    
};


@interface LJGameCenterViewController : LJBaseViewController

@property (nonatomic, copy) NSString *app_from;
@property (nonatomic, assign) BOOL isLandscape;
@property (nonatomic, assign) MGCGameCenterVCType vcType;
/**表示游戏中心是插入来的,用来解决特定的需求*/
@property (nonatomic, assign) BOOL isInsert;
@property (nonatomic, assign) BOOL isHiddenLeftBtn;
@property (nonatomic, assign) BOOL isExistTabbar;


- (void)lj_settingMoreGameWithDic:(NSDictionary *)dic;



@end

NS_ASSUME_NONNULL_END
