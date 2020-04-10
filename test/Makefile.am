bin_PROGRAMS = test

if DEBUG
    FOLDER = -lfolder
else
    FOLDER = -l:libfolder.a
endif

test_SOURCES = main.cpp
test_CXXFLAGS = -std=c++17 -I$(top_srcdir)/src
test_LDFLAGS = -Wl,-rpath=./bin,-rpath=../bin,-rpath=/usr/local/lib -L../src/.libs
test_LDADD = -lstdc++fs $(FOLDER)


