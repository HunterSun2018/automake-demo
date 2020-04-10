mkdir -p build/debug;
mkdir -p build/release;
cd build/debug; ../../configure CXX=c++ CXXFLAGS="-g -DDEBUG" --prefix=$PWD --enable-silent-rules --enable-debug
cd ../release; ../../configure CXX=c++ CXXFLAGS="-O2" --prefix=$PWD --enable-silent-rules