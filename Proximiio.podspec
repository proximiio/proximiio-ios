#
# Be sure to run `pod lib lint Proximiio.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "Proximiio"
  s.version          = "1.1.4"
  s.summary          = "The one-step  solution for location-aware applications."

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!
  s.description      = <<-DESC
                        Proximi.io is the one-step  solution for location-aware applications.
                       DESC

  s.homepage         = "https://github.com/proximiio/proximiio-ios"
  s.license          = 'Commercial'
  s.author           = { "Proximi.io" => "support@proximi.io" }
  s.source           = { :git => "https://github.com/proximiio/proximiio-ios.git", :tag => s.version.to_s }

  s.platform     = :ios, '8.0'
  s.requires_arc = true

#s.source_files = 'Pod/Classes/**/*'
#s.resource_bundles = {
#'Proximiio' => ['Pod/Assets/*.png']
#}
  s.vendored_frameworks = 'Pod/Proximiio.framework'
#, 'Pod/IndoorAtlas.framework', 'Pod/Firebase.framework', 'Pod/GeoFire.framework'

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.libraries = 'z', 'c++', 'icucore'
  s.frameworks = 'CoreLocation', 'SystemConfiguration', 'Security', 'Accelerate', 'CoreMotion', 'CFNetwork', 'CoreBluetooth', 'UIKit', 'Accelerate', 'CoreMotion'

end
