#
# Be sure to run `pod lib lint Proximiio.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "Proximiio"
  s.version          = "1.3.2"
  s.summary          = "The one-step solution for location-aware applications."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description      = <<-DESC
                        Proximi.io is the one-step solution for location-aware applications.
                       DESC

  s.homepage         = "https://github.com/proximiio/proximiio-ios"
  s.license          = 'Commercial'
  s.author           = { "Proximi.io" => "support@proximi.io" }
  s.source           = { :git => "https://github.com/proximiio/proximiio-ios.git", :tag => s.version.to_s }

  s.platform     = :ios, '10.0'
  s.requires_arc = true
  
  s.dependency       'IndoorAtlas' 
  s.dependency       'DarklyEventSource'
  s.dependency       'CrystDBCipher'

  s.vendored_frameworks = 'Pod/Proximiio.framework'

  s.libraries = 'z', 'c++', 'icucore'
  s.frameworks = 'Accelerate', 'CFNetwork', 'CoreBluetooth', 'CoreGraphics', 'CoreLocation', 'CoreMotion', 'Foundation', 'Security', 'SystemConfiguration', 'UIKit'

  s.user_target_xcconfig = { 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }

end
