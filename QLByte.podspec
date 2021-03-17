#
# Be sure to run `pod lib lint QLByte.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'QLByte'
  s.version          = '0.1.0'
  s.summary          = 'A short description of QLByte.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hailong123'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Sea' => '771145867@qq.com' }
  s.source           = { :git => 'https://github.com/hailong123/QLByte.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.frameworks   = 'Accelerate','AssetsLibrary','AVFoundation','CoreGraphics','CoreImage','CoreMedia','CoreVideo','Foundation','QuartzCore','UIKit'

  s.weak_frameworks = 'MetalPerformanceShaders', 'Photos', 'CoreML'

  s.source_files  =  "QLByte/Classes/include/BytedEffectSDK/*.h"

  s.public_header_files = "QLByte/Classes/include/BytedEffectSDK/*.h"

  s.header_mappings_dir = "QLByte/Classes/include/BytedEffectSDK/"
  s.platform = :ios, '9.0'
  s.requires_arc = true
  s.vendored_libraries = 'libeffect-sdk.a'
  
  s.libraries = 'stdc++', 'z'
  
end
