%w( 03a 03b 11 ).each do |dir|
  std=dir[0,2]
  Dir.chdir(dir) do
    puts( dir )
    puts( %x( clang++ -std=c++#{std} -Wall -c -Wpedantic -pedantic foo.cpp) )
  end
end
