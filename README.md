# Proximiio

### Version 5.2.28


[![Version](https://img.shields.io/cocoapods/v/Proximiio.svg?style=flat)](http://cocoapods.org/pods/Proximiio)
[![License](https://img.shields.io/cocoapods/l/Proximiio.svg?style=flat)](http://cocoapods.org/pods/Proximiio)
[![Platform](https://img.shields.io/cocoapods/p/Proximiio.svg?style=flat)](http://cocoapods.org/pods/Proximiio)

## Usage

Check out the [documentation](https://proximi.io/docs/ios/)!

## Requirements

The framework is not bitcode compatible. Background location services have to be enabled. A string for the plist key "NSLocationAlwaysUsageDescription" has to be present.

## Installation

Proximiio is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "Proximiio"
```

also at the end of the file add:

```ruby
post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['SWIFT_VERSION'] = '5.3'
            config.build_settings['ENABLE_BITCODE'] = 'NO'
        end
    end
end
```

## Author

Proximi.io, support@proximi.io

## License

Proximiio is available under commercial license. See the LICENSE file for more info.
