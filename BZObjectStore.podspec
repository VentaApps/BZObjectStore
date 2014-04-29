Pod::Spec.new do |s|
  s.name     = 'BZObjectStore'
  s.version  = '1.0.2'
  s.license  = 'MIT'
  s.summary  = 'ORM library wrapped FMDB'
  s.homepage = 'https://github.com/expensivegasprices/BZObjectStore'
  s.author   = { "BONZOO LLC" => "expensivegasprices@gmail.com" }
  s.source   = { :git => 'https://github.com/expensivegasprices/BZObjectStore.git', :tag => s.version.to_s }
  s.platform = :ios, '5.0'
  s.requires_arc = true
  s.source_files = 'BZObjectStore/BZObjectStore/**/*.{h,m}'
  s.public_header_files = "BZObjectStore/BZObjectStore/*.h"
  
  s.subspec 'Core' do |cs|
    cs.dependency 'FMDB'
    cs.dependency 'ColorUtils'
    cs.dependency 'BZRuntime'
  end
end
