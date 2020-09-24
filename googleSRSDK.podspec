

Pod::Spec.new do |spec|

  spec.name         = "googleSRSDK"
  spec.version      = "0.0.1"
  spec.summary      = "This is a short description of googleSRSDK."
  spec.description  = "This is testing framework to how will it working if is done so going to rock make happy us"
  spec.homepage     = "https://www.google.com/"
  spec.license      = "MIT"
  spec.author             = { "Ganesh" => "ganesh.gupta@dotsquares.com" }
 
  spec.platform     = :ios, "11.0"

  spec.source       = { :git => "https://github.com/GaneshDotsquares/GoogleSRSDK.git", :tag => "0.0.1" }
  spec.source_files  = "googleSR"
  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

end
