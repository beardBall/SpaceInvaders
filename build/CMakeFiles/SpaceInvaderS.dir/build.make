# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/waqar/dev/cpp/spaceInvaders

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/waqar/dev/cpp/spaceInvaders/build

# Include any dependencies generated for this target.
include CMakeFiles/SpaceInvaderS.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SpaceInvaderS.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SpaceInvaderS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SpaceInvaderS.dir/flags.make

CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/alien.cpp
CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/alien.cpp

CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/alien.cpp > CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/alien.cpp -o CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/block.cpp
CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/block.cpp

CMakeFiles/SpaceInvaderS.dir/src/block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/block.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/block.cpp > CMakeFiles/SpaceInvaderS.dir/src/block.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/block.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/block.cpp -o CMakeFiles/SpaceInvaderS.dir/src/block.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/dash.cpp
CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/dash.cpp

CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/dash.cpp > CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/dash.cpp -o CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/game.cpp
CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/game.cpp

CMakeFiles/SpaceInvaderS.dir/src/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/game.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/game.cpp > CMakeFiles/SpaceInvaderS.dir/src/game.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/game.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/game.cpp -o CMakeFiles/SpaceInvaderS.dir/src/game.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/laser.cpp
CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/laser.cpp

CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/laser.cpp > CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/laser.cpp -o CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/learnCPP.cpp
CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/learnCPP.cpp

CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/learnCPP.cpp > CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/learnCPP.cpp -o CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/level.cpp
CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/level.cpp

CMakeFiles/SpaceInvaderS.dir/src/level.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/level.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/level.cpp > CMakeFiles/SpaceInvaderS.dir/src/level.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/level.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/level.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/level.cpp -o CMakeFiles/SpaceInvaderS.dir/src/level.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/main.cpp
CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/main.cpp

CMakeFiles/SpaceInvaderS.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/main.cpp > CMakeFiles/SpaceInvaderS.dir/src/main.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/main.cpp -o CMakeFiles/SpaceInvaderS.dir/src/main.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/obstacle.cpp
CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/obstacle.cpp

CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/obstacle.cpp > CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/obstacle.cpp -o CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/player.cpp
CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/player.cpp

CMakeFiles/SpaceInvaderS.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/player.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/player.cpp > CMakeFiles/SpaceInvaderS.dir/src/player.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/player.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/player.cpp -o CMakeFiles/SpaceInvaderS.dir/src/player.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/spaceship.cpp
CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/spaceship.cpp

CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/spaceship.cpp > CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/spaceship.cpp -o CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/test.cpp
CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/test.cpp

CMakeFiles/SpaceInvaderS.dir/src/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/test.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/test.cpp > CMakeFiles/SpaceInvaderS.dir/src/test.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/test.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/test.cpp -o CMakeFiles/SpaceInvaderS.dir/src/test.cpp.s

CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o: CMakeFiles/SpaceInvaderS.dir/flags.make
CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o: /Users/waqar/dev/cpp/spaceInvaders/src/z.cpp
CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o: CMakeFiles/SpaceInvaderS.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o -MF CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o.d -o CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o -c /Users/waqar/dev/cpp/spaceInvaders/src/z.cpp

CMakeFiles/SpaceInvaderS.dir/src/z.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/SpaceInvaderS.dir/src/z.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/waqar/dev/cpp/spaceInvaders/src/z.cpp > CMakeFiles/SpaceInvaderS.dir/src/z.cpp.i

CMakeFiles/SpaceInvaderS.dir/src/z.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaderS.dir/src/z.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/waqar/dev/cpp/spaceInvaders/src/z.cpp -o CMakeFiles/SpaceInvaderS.dir/src/z.cpp.s

# Object files for target SpaceInvaderS
SpaceInvaderS_OBJECTS = \
"CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o" \
"CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o"

# External object files for target SpaceInvaderS
SpaceInvaderS_EXTERNAL_OBJECTS =

SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/alien.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/block.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/dash.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/game.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/laser.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/learnCPP.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/level.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/main.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/obstacle.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/player.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/spaceship.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/test.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/src/z.cpp.o
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/build.make
SpaceInvaderS: /Users/waqar/dev/cpp/spaceInvaders/lib/libraylib.a
SpaceInvaderS: /Users/waqar/dev/cpp/spaceInvaders/lib/libtinyxml2.a
SpaceInvaderS: CMakeFiles/SpaceInvaderS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable SpaceInvaderS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SpaceInvaderS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SpaceInvaderS.dir/build: SpaceInvaderS
.PHONY : CMakeFiles/SpaceInvaderS.dir/build

CMakeFiles/SpaceInvaderS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SpaceInvaderS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SpaceInvaderS.dir/clean

CMakeFiles/SpaceInvaderS.dir/depend:
	cd /Users/waqar/dev/cpp/spaceInvaders/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/waqar/dev/cpp/spaceInvaders /Users/waqar/dev/cpp/spaceInvaders /Users/waqar/dev/cpp/spaceInvaders/build /Users/waqar/dev/cpp/spaceInvaders/build /Users/waqar/dev/cpp/spaceInvaders/build/CMakeFiles/SpaceInvaderS.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/SpaceInvaderS.dir/depend

