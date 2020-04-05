/***********************
 * COPYRIGHT AVCADO 2020
 * 
 **********************/

#include <stdio.h>
#include <stdlib.h>


int renameKernel(fileno, dest){
	rename(file, dest);
}

int renameWindows(){
  renameKernel("kernel/changeDirectory.hpp", "C:\\Windoge\\kernel\\changeDirectory.hpp");
  renameKernel("kernel/cli.cpp", "C:\\Windoge\\kernel\\cli.cpp");
}
