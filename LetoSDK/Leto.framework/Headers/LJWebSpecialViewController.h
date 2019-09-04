//
//  LJWebSpecialViewController.h
//  Leto
//
//  Created by yuan yao on 2019/1/10.
//  Copyright © 2019 ledong. All rights reserved.
//

#import "MGCH5BaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,LJEntranceWebType)
{
    /**默认的*/
    LJEntranceWebType_Default,
    /**从外部进入*/
    LJEntranceWebType_Outside,
};


@interface LJWebSpecialViewController : MGCH5BaseViewController

@property (nonatomic, copy) NSString *titleStr;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, assign) LJEntranceWebType webType;

@end

NS_ASSUME_NONNULL_END
