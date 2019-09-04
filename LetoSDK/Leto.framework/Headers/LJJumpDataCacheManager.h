//
//  LJJumpDataCacheManager.h
//  Leto
//
//  Created by yuan yao on 2018/12/4.
//  Copyright © 2018 ledong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LJJumpConst.h"

@class LJJumpConfig;
@class LJSmallGameItemListModel;


NS_ASSUME_NONNULL_BEGIN





@interface LJJumpDataCacheManager : NSObject
+ (instancetype)cacheManager;

/**定期清除缓存*/
+ (void)clearWithCacheType:(LJJumpCacheType)cacheType;
/**根据指定时间，清除缓存*/
+ (void)clearWithSeconds:(NSTimeInterval)seconds;
/**检查对应的url是否需要更新*/
+ (void)lj_checkUrl:(NSString *)urlStr appId:(NSString *)appId finish:(void(^)(void))finish;
/**添加缓存*/
+ (void)lj_downloadWithAppId:(NSString *)appId packageurl:(NSString *)packageurl  version:(NSString *)version md5:(NSString *)md5 progress:(void(^)(CGFloat progressValue))progress finish:(void(^)(LJJumpDownloadType downloadType, NSString *sourcePath, NSError* error))finish;
/**清空缓存*/
+ (void)clearCache;
/**获取玩游戏人数*/
+ (NSInteger)getPlayGameNumWithAppId:(NSString *)appId;
/**更新玩游戏人数*/
+ (void)updatePlayGameNumWithAppId:(NSString *)appId playNum:(NSInteger)playNum;
/**根据appId获取zip包地址*/
+ (NSString *)lj_getZipPathWithAppId:(NSString *)appId;
/**根据appId删除zip包文件*/
+ (void)removeZipWithAppId:(NSString *)appId;


/** save a jump config to recent list */
+ (void)saveRecentJump:(LJJumpConfig*)config;

/** get recent jump list for current user */
+ (NSArray<NSDictionary*>*)getRecentJumps;
+ (NSArray *)getRecentJumpsByModel;

/** save a jump config to local user favorite list */
+ (void)saveToLocalFavorite:(LJJumpConfig*)config;

/** get user local favorite app list */
+ (NSArray<NSDictionary*>*)getLocalFavorites;

/** check if a game is in current user's favorite list */
+ (BOOL)isAppInFavorite:(NSString*)appId;

+ (void)cancelFavoriteWithAppId:(NSString *)appId result:(void(^)(BOOL isSuccess,NSString *msg))result;
+ (void)cancelRecentWithAppId:(NSString *)appId result:(void(^)(BOOL isSuccess,NSString *msg))result;

+ (void)addFavoriteWithAppId:(NSString *)appId result:(void(^)(LJSmallGameItemListModel *gameInfo,BOOL isSuccess,NSString *msg))result;
/**缓存视频文件*/
+ (void)lj_cacheVideoResourceWithUrl:(NSString *)url;
/**根据视频url获取缓存的资源路径,如果没有缓存的文件就返回nil*/
+ (NSString *)lj_getVideoResourceWithUrl:(NSString *)url;


/**存储一条历史记录*/
+ (void)addOneSearchHistory:(NSDictionary *)hisDic;
/**获取所有的历史数据*/
+ (NSArray<NSDictionary*>*)getSearchHistorys;
/**删除所有历史数据*/
+ (void)removeAllSearchHistorys;
/**删除一条历史数据*/
+ (void)removeOneSearchHistory:(NSDictionary *)hisDic;
@end

NS_ASSUME_NONNULL_END
