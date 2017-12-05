file(REMOVE_RECURSE
  "runBasicTests.pdb"
  "runBasicTests.exe"
  "runBasicTests.exe.manifest"
  "librunBasicTests.dll.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/runBasicTests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
