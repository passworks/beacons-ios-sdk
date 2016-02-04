Pod::Spec.new do |s|
  s.name         = "Lighthouse"
  s.version      = "1.0.1"
  s.summary      = "Lighthouse beacon technology by Passworks"
  s.homepage     = "http://passworks.io"
  s.license      = {
    :type => 'Copyright',
    :file => 'LICENSE'
  }
  s.social_media_url  = 'https://twitter.com/passworksio'
  s.author       = { "Passworks S.A." => "support@passworks.io" }
  s.source       = { :git => "https://github.com/passworks/lighthouse-ios-sdk.git", :tag => "v#{s.version}" }
  s.platform     = :ios, '7.0'
  s.frameworks = %w(Foundation UIKit SystemConfiguration CoreLocation CoreData Passkit)
  s.library = 'z'
  s.requires_arc = true
  s.ios.vendored_frameworks = 'Lighthouse.framework'
  s.ios.public_header_files = 'Lighthouse.framework/Headers/*.h'
  s.resources = 'Lighthouse.bundle'
end
