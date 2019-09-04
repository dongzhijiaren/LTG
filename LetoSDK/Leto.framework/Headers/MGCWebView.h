//
//  MGCWebView.h
//  Leto
//
//  Created by yuan yao on 2019/6/1.
//  Copyright © 2019 ledong. All rights reserved.
//

#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MGCUIDelegate <NSObject>

/**此协议和WKUIDelegate意义是一样的 只是方法都加了前缀"mgc"*/


- (void)mgc_webView:(WKWebView *)webView runJavaScriptAlertPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(void))completionHandler;
- (void)mgc_webView:(WKWebView *)webView runJavaScriptConfirmPanelWithMessage:(NSString *)message initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(BOOL))completionHandler;
- (void)mgc_webView:(WKWebView *)webView runJavaScriptTextInputPanelWithPrompt:(NSString *)prompt defaultText:(NSString *)defaultText initiatedByFrame:(WKFrameInfo *)frame completionHandler:(void (^)(NSString * _Nullable))completionHandler;
@end

/**当与原生交互时，用这个接收回调*/

@protocol MGCScriptMessageHandler <NSObject>

- (void)mgc_userContentController:(WKUserContentController *)userContentController didReceiveScriptMessage:(WKScriptMessage *)message;

@end




@interface MGCWebView : WKWebView

@property (nonatomic, weak) id<MGCScriptMessageHandler> mgcMessageHandler;
@property (nonatomic, weak) id<MGCUIDelegate> mgcUIDelegate;
@property (nonatomic, weak) UIViewController *curVC;

- (instancetype)initWithFrame:(CGRect)frame messageHandlerNames:(NSArray<NSString *> *)names configurationBlock:(void(^_Nullable)(WKWebViewConfiguration * _Nonnull configuration))configuration;

@end

NS_ASSUME_NONNULL_END
