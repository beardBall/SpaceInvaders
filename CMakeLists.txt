cmake_minimum_required(VERSION 3.28.3)
project(SpaceInvaders CXX)
set(CMAKE_CXX_STANDARD 20)


file(GLOB_RECURSE PROJECT_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")
set(BIN "${CMAKE_CURRENT_LIST_DIR}/${PROJECT_NAME}")
add_executable(${PROJECT_NAME})


target_sources(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCES})
target_link_libraries(${PROJECT_NAME} "${CMAKE_CURRENT_LIST_DIR}/lib/libraylib.a")
# target_link_libraries(${PROJECT_NAME} "${CMAKE_CURRENT_LIST_DIR}/lib/libtinyxml2.a")

#CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL
IF(APPLE)
   #SET(GUI_TYPE MACOSX_BUNDLE)
   FIND_LIBRARY(COREVIDEO CoreVideo)
   FIND_LIBRARY(IOKIT IOKit)
   FIND_LIBRARY(COCOA Cocoa)
   FIND_LIBRARY(GLUTT GLUT)
   FIND_LIBRARY(OPENGL OpenGL)

   MARK_AS_ADVANCED (COREVIDEO IOKIT COCOA GLUTT OPENGL)
   SET(EXTRA_LIBS ${COREVIDEO} ${IOKIT} ${COCOA} ${GLUTT} ${OPENGL} "${CMAKE_CURRENT_LIST_DIR}/lib/libtinyxml2.a")
ENDIF (APPLE)
target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS} )
# target_link_libraries(${PROJECT_NAME} PRIVATE tinyXML)


# Setting ASSETS_PATH
target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH="${CMAKE_CURRENT_SOURCE_DIR}/assets/")
target_compile_definitions(${PROJECT_NAME} PUBLIC ASSETS_PATH_AUDIO="${CMAKE_CURRENT_SOURCE_DIR}/assets/audio/") # Set the asset path macro to the absolute path on the dev machine
 # Set the asset path macro to the absolute path on the dev machine

 set(PROJECT_INCLUDE "${CMAKE_CURRENT_LIST_DIR}/include/") # Define PROJECT_INCLUDE to be the path to the include directory of the project

 target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_INCLUDE})


 target_compile_definitions(${PROJECT_NAME} PUBLIC GRAVITY=9.81f)