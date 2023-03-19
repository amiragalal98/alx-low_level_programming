<h1 align="center">remember that</h1>
<h2>GCC</h2>
GCC is a toolchain that compiles code, links it with any library dependencies, converts that code to assembly, and then prepares executable files
<h2>When you run GCC on a source code file</h2>
<ul>
  <li>It first uses a preprocessor to include header files and discard comments.(Preprocessing)</li>
  <p>gcc -E name_of_file -o new_name</p>
  <br>
  <li>Next, it tokenizes the code, expands macros, detects any compile-time issues, then prepares it for compilation. It is then sent to the compiler.(Actual Compilation)</li>
  <p>gcc -c name_of_file -o new_name.o</p>
  <br>
  <li>Generate assembly code.(Assembly) </li>
  <p>gcc -S name_of_file -o new_name.s </p>
  <br>
  <li>The assembler then converts this code into the binary executable format of the system(Linking)</li>
  <p>gcc name_of_file -o new_name.exe </p>
  </ul>
  
  
