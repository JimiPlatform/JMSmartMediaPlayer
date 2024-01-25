Pod::Spec.new do |s|
  s.name = "JMSmartMediaPlayer"
  s.version = "1.2.8"
  s.summary = "Jimi Meida Player SDK for iOS at CocoaPods."
  s.license = {"type"=>"Apache License 2.0", "file"=>"LICENSE"}
  s.authors = {"Jason"=>"lizhijian@jimilab.com"}
  s.homepage = "https://github.com/JimiPlatform/JMSmartMediaPlayer"
  s.description = "Jimi Meida Player SDK for iOS at CocoaPods."
  s.frameworks = ["CoreMedia", "VideoToolbox", "AudioToolbox"]
  s.libraries = ["c++", "z", "bz2", "iconv"]
  s.requires_arc = true
  s.source = { :git => "https://github.com/JimiPlatform/JMSmartMediaPlayer.git", :tag => "v#{s.version}" }
  #s.xcconfig = { 'VALID_ARCHS' => 'armv7 armv7s arm64 arm64e x86_64' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.ios.deployment_target    = '11.0'
  s.ios.vendored_framework   = 'JMSmartMediaPlayer.framework'
  s.vendored_libraries = 'JMSmartMediaPlayer.framework/**/*.a'
  s.dependency 'JMMonitorView', '~> 1.0.8'

end

#打包命令
#pod lib lint JMSmartMediaPlayer.podspec --verbose --allow-warnings --use-libraries
#发布命令
#pod trunk push JMSmartMediaPlayer.podspec --verbose --allow-warnings --use-libraries
