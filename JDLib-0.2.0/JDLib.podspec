Pod::Spec.new do |s|
  s.name = 'JDLib'
  s.version = '0.2.0'
  s.summary = 'A short description of JDLib.'
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"cuijianpeng"=>"cuijianpeng@jodogame.com"}
  s.homepage = 'https://github.com/djcui/JDLib.git'
  s.description = 'TODO: Add long description of the pod here.'
  s.source = { :path => '.' }

  s.ios.deployment_target    = '8.0'
  s.ios.preserve_paths       = 'ios/JDLib.framework'
  s.ios.public_header_files  = 'ios/JDLib.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/JDLib.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/JDLib.framework'
end
