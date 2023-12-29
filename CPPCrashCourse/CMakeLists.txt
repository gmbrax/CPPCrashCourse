# CMakeList.txt: projeto de CMake para CPPCrashCourse, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (CPPCrashCourse "CPPCrashCourse.cpp" "CPPCrashCourse.h" "Exercicios/Ex1.cpp" "Exercicios/Ex1.h" "Exercicios/Ex2.cpp" "Exercicios/Ex2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CPPCrashCourse PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
