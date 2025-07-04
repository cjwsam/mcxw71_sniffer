# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file LICENSE.rst or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION ${CMAKE_VERSION}) # this file comes with cmake

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer")
  file(MAKE_DIRECTORY "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer")
endif()
file(MAKE_DIRECTORY
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/Sniffer"
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix"
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/tmp"
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/src/Sniffer-stamp"
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/src"
  "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/src/Sniffer-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/src/Sniffer-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/cjwsa/Documents/Zephyr_Projects/mcxw71_sniffer/Sniffer/debug/_sysbuild/sysbuild/images/Sniffer-prefix/src/Sniffer-stamp${cfgdir}") # cfgdir has leading slash
endif()
