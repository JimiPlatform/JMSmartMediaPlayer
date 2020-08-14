Pod::Spec.new do |s|
  s.name = "JMSmartMediaPlayer"
  s.version = "1.1.3"
  s.summary = "Jimi meida Player SDK for iOS at CocoaPods."
  s.license = {"type"=>"Apache License 2.0", "file"=>"LICENSE"}
  s.authors = {"Eafy"=>"lizhijian_21@163.com"}
  s.homepage = "http://10.0.10.85/app/linux/JMSmartMediaPlayer"
  s.description = "Jimi meida Player SDK for iOS at CocoaPods."
  s.frameworks = ["CoreMedia", "VideoToolbox", "AudioToolbox"]
  s.libraries = ["c++", "z", "bz2", "iconv"]
  s.requires_arc = true
  #s.source = { :http => "http://10.0.10.85/apppublic/jimirepofile/raw/master/#{s.name}/#{s.name}-#{s.version}.zip?inline=false", :type => "zip" }
  s.source = { :git => "https://github.com/JimiPlatform/JMSmartMediaPlayer.git", :tag => "#{s.version}" }
  #s.xcconfig = { 'VALID_ARCHS' => ["armv7","armv7s","arm64","arm64e"] }
  #s.pod_target_xcconfig = { 'ARCHS[sdk=iphonesimulator*]' => '$(ARCHS_STANDARD_64_BIT)' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'JMSmartMediaPlayer.framework'
  s.vendored_libraries = 'JMSmartMediaPlayer.framework/**/*.a'
  s.dependency 'JMMonitorView', '1.0.8'
  s.dependency 'JMSmartUtils', '1.0.3'

end

#打包命令
#pod package JMSmartMediaPlayer.podspec --no-mangle --force --exclude-deps
#发布命令
#pod trunk push JMSmartMediaPlayer.podspec --verbose --allow-warnings --use-libraries
