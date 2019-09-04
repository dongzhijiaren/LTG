
Pod::Spec.new do |spec|


  spec.name         = "Leto"
  spec.version      = "3.3.7.7"
  spec.summary      = "掌通无线旗下的小游戏工具库"

spec.description  = <<-DESC

   Leto使用了双WebView的结构, 在iOS/Android上都是这样. 一个WebView可以叫Service WebView, 这个就用来提供微信api的功能. 一个叫做Page WebView, 用来提供ui组件的那些功能. 在Page WebView里想要调用微信api的时候, 是通过释放一个PAGE EVENT这种间接的方式去调用Service WebView


DESC

spec.homepage     = "https://github.com/ztwireless"

spec.license = { :type => "Copyright", :text => "Ztwireless Inc. 2019"}
  spec.author             = { "ztwireless" => "zhangtong.tianjin@mgc-games.com" }

  spec.ios.deployment_target = "8.0"


spec.source       = { :http => "https://down.mgc-games.com/sdk/iOS_Pods_LetoSDK_V2.0.2.zip" }

spec.subspec 'Core' do |c|

c.vendored_frameworks = 'Leto.framework'

end

spec.subspec 'UI' do |u|

u.vendored_frameworks = 'LetoUI.framework'
u.dependency 'Leto/Core'

end

spec.subspec 'Safe' do |s|

s.vendored_frameworks = 'LetoSafe.framework'
s.dependency 'Leto/Core'

end

spec.subspec 'Ad' do |a|
  
  
  
  a.subspec 'ReducedTouTiao' do |rt|
  
  rt.vendored_frameworks = 'LetoAdTouTiao.framework'
  rt.dependency 'Leto/Core'
  
  end
  
  a.subspec 'TouTiao' do |t|
    t.vendored_frameworks = 'BUAdSDK.framework','LetoAdTouTiao.framework'
    t.resources = 'BUAdSDK.bundle'
    t.frameworks = 'UIKit','MapKit','WebKit','MediaPlayer','CoreLocation','AdSupport','CoreMedia','AVFoundation','CoreTelephony','StoreKit','SystemConfiguration','MobileCoreServices','CoreMotion'
    t.libraries = 'c++','resolv','z'
    t.dependency 'Leto/Core'
  end
  
 
  
  
end



spec.requires_arc = true
spec.xcconfig = {"ENABLE_BITCODE" => "No"}


end
