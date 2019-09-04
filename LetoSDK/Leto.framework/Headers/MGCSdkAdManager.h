//
//  MGCSdkAdManage.h
//  Leto
//
//  Created by yuan yao on 2019/1/26.
//  Copyright © 2019 ledong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGCSdkAdPlatformInterface.h"
#import "MGCAdConst.h"

NS_ASSUME_NONNULL_BEGIN


@interface MGCSdkAdManage : NSObject<MGCSdkAdPlatformInterface>

/**视频状态的回调*/
@property (nonatomic, copy) MGCVideoAdStatusCallback statusCallback;
/**视频交互的回调*/
@property (nonatomic, copy) MGCAdInteractionCallback interactionCallback;
/**banner状态的回调*/
@property (nonatomic, copy) MGCBannerAdStatusCallBack bannerStatusCallBack;
/**banner交互的回调*/
@property (nonatomic, copy) MGCAdInteractionCallback bannerInteractionCallBack;



@end

NS_ASSUME_NONNULL_END
