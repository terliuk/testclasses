i3_project(testclasses
   PYTHON_DIR python
)
i3_add_library(testclasses
  private/testclasses/TestString.cxx 
  USE_TOOLS boost python
  USE_PROJECTS serialization icetray dataclasses
)
i3_add_pybindings(testclasses
  private/pybindings/TestString.cxx
  USE_TOOLS boost python
  USE_PROJECTS serialization icetray dataclasses testclasses
  )
