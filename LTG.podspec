

Pod::Spec.new do |spec|

  spec.name         = "LTG"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of LTG."

  spec.description  = <<-DESC
                   game SDK库集成私有索引库
  spec.homepage     = "http://EXAMPLE/LTG"

  spec.license      = "MIT (example)"

  spec.author             = { "zhangdong" => "dongzhang@pptv.com" }

  spec.source       = { :git => "https://github.com/dongzhijiaren/LTG.git", :tag => "#{spec.version}" }

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"

end
