Pod::Spec.new do |s|
  s.name         = "ZTADSDK"
  s.version      = "1.0.1"
  s.summary      = "An simple Ad SDK for iOS"
  s.description  = " Support launch screen ad, banner, instertitial ad and Feeds ad"
  s.homepage     = "https://github.com/sunforyou/ZTADSDK"
  s.license      = { :type => "MIT", :file => "ZTADSDK-1.0.1/LICENSE" }
  s.author             = { "sun" => "songxu.mail@gmail.com" }
  s.authors      = "ZuoTang"
  s.platform     = :ios
  s.ios.deployment_target = "9.0"
  s.source       = { :http => "https://github.com/sunforyou/ZTADSDK/archive/1.0.1.zip" }
  s.frameworks   = 'SystemConfiguration', 'Foundation', 'UIKit'
  s.requires_arc = true
  s.vendored_frameworks = 'ZTADSDK-1.0.1/ZTADSDK.framework'

end
