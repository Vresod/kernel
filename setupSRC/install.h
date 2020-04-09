/***********************
 * COPYRIGHT AVCADO 2020
 * All rights reserved.
 **********************/

#include <stdio.h>
#include <stdlib.h>


int renameKernel(fileno, dest){
	if ( !rename(file, dest) ) {
    return 1;
  }
  return 0;
}

void renameWindows(){
  // The standard kernel files.
  renameKernel("kernel/changeDirectory.hpp", "C:\\Windoge\\kernel\\changeDirectory.hpp");
  renameKernel("kernel/cli.cpp", "C:\\Windoge\\kernel\\cli.cpp");
  renameKernel("kernel/cli.hpp", "C:\\Windoge\\kernel\\cli.hpp");
  // The documentation
  
}


void renameMac(){
   renameKernel("kernel/changeDirectory.hpp", "/usr/bin/windoge/changeDirectory.hpp");
   renameKernel("kernel/cli.cpp", "/usr/bin/windoge/cli.cpp");
   renameKernel("kernel/cli.hpp", "/usr/bin/windoge/cli.hpp");
}

void renameUnix(){
  renameMac();
}