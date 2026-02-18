# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-src")
  file(MAKE_DIRECTORY "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-src")
endif()
file(MAKE_DIRECTORY
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-build"
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix"
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/tmp"
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/src/nontype_functional-populate-stamp"
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/src"
  "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/src/nontype_functional-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/src/nontype_functional-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/snytex/Projekte/AutoDeafen-Linux/AutoDeafen-Linux/geode-2.281-beta/build/_deps/nontype_functional-subbuild/nontype_functional-populate-prefix/src/nontype_functional-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
