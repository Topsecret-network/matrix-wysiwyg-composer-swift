Pod::Spec.new do |s|

  s.name         = "matrix-wysiwyg-composer-swift"
  s.version      = "1.0.0"
  s.summary      = "The iOS SDK to build apps compatible with Matrix (https://www.matrix.org)"

  s.description  = <<-DESC
				   Matrix is a new open standard for interoperable Instant Messaging and VoIP, providing pragmatic HTTP APIs and open source reference implementations for creating and running your own real-time communication infrastructure.

				   Our hope is to make VoIP/IM as universal and interoperable as email.
                   DESC

  s.homepage     = "https://www.matrix.org"

  s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }

  s.author             = { "matrix.org" => "support@matrix.org" }
  s.social_media_url   = "http://twitter.com/matrixdotorg"

  s.source       = { :git => "https://github.com/Topsecret-network/matrix-wysiwyg-composer-swift", :branch => "topsecret" }
  
  s.requires_arc  = true
  s.swift_versions = ['5.1', '5.2']
  
  s.ios.deployment_target = "13.0"
  s.osx.deployment_target = "10.15"

  s.source_files = "Sources", "Sources/**/*.{h,m}", "Sources/**/*.{swift}"

  s.vendored_frameworks = [
    'WysiwygComposerFFI.xcframework',
  ]

end
