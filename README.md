<h1 align="center">remember that</h1>
<h2>GCC</h2>
GCC is a toolchain that compiles code, links it with any library dependencies, converts that code to assembly, and then prepares executable files
<h2>When you run GCC on a source code file</h2>
<ul>
  <li>It first uses a preprocessor to include header files and discard comments.(Preprocessing)</li>
  <p>gcc -E name_of_file</p>
  <p>gcc -E name_of_file -o interm</p>
  <li>Next, it tokenizes the code, expands macros, detects any compile-time issues, then prepares it for compilation. It is then sent to the compiler.(Actual Compilation)</li>
  <li>Generate assembly code.(Assembly) </li>
  <li>The assembler then converts this code into the binary executable format of the system.(Linking)</li>
  <li>Then execute file on the target system.</li>
  </ul>
  
  <h2>GCC examples</h2>
  command:gcc hello.c -o hello         -->this command processes the hello.c file and generates a binary called “hello”. 
