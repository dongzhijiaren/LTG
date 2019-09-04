//
//  MGCFavoritesAlertView.h
//  LetoUI
//
//  Created by yuan yao on 2019/3/25.
//  Copyright © 2019 yuan yao. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,MGCFavAlertResultType) {
    /**确定*/
    MGCFavAlertResultType_Sure,
    /**取消*/
    MGCFavAlertResultType_Cancel,
};

typedef void(^MGCFavAlertResultBlock)(MGCFavAlertResultType resultType);


@interface MGCFavoritesAlertView : UIView

+ (instancetype)alertViewWithTitle:(NSString *)title subTitle:(NSString *)subTitle result:(MGCFavAlertResultBlock)result;

@end

NS_ASSUME_NONNULL_END
