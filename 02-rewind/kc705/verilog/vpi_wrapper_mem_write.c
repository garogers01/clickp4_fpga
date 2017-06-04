/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 10:48:51 CST 2017
 * 
 * To automatically register this VPI wrapper with a Verilog simulator use:
 *     #include "vpi_wrapper_mem_write.h"
 *     void (*vlog_startup_routines[])() = { mem_write_vpi_register, 0u };
 */
#include <stdlib.h>
#include <vpi_user.h>
#include "bdpi.h"

/* the type of the wrapped function */
void mem_write(unsigned long long , unsigned int *, unsigned int *);

/* VPI wrapper function */
PLI_INT32 mem_write_calltf(PLI_BYTE8 *user_data)
{
  vpiHandle hCall;
  unsigned long long arg_1;
  unsigned int *arg_2;
  unsigned int *arg_3;
  vpiHandle *handle_array;
  
  /* retrieve handle array */
  hCall = vpi_handle(vpiSysTfCall, 0);
  handle_array = vpi_get_userdata(hCall);
  if (handle_array == NULL)
  {
    vpiHandle hArgList;
    hArgList = vpi_iterate(vpiArgument, hCall);
    handle_array = malloc(sizeof(vpiHandle) * 3u);
    handle_array[0u] = vpi_scan(hArgList);
    handle_array[1u] = vpi_scan(hArgList);
    handle_array[2u] = vpi_scan(hArgList);
    vpi_put_userdata(hCall, handle_array);
    vpi_free_object(hArgList);
  }
  
  /* copy in argument values */
  get_vpi_arg(handle_array[0u], &arg_1, DIRECT);
  get_vpi_arg(handle_array[1u], &arg_2, POLYMORPHIC);
  get_vpi_arg(handle_array[2u], &arg_3, POLYMORPHIC);
  
  /* call the imported C function */
  mem_write(arg_1, arg_2, arg_3);
  
  /* free argument storage */
  free_vpi_args();
  vpi_free_object(hCall);
  
  return 0;
}

/* VPI wrapper registration function */
void mem_write_vpi_register()
{
  s_vpi_systf_data tf_data;
  
  /* Fill in registration data */
  tf_data.type = vpiSysTask;
  tf_data.tfname = "$imported_mem_write";
  tf_data.calltf = mem_write_calltf;
  tf_data.compiletf = 0u;
  tf_data.sizetf = 0u;
  tf_data.user_data = "$imported_mem_write";
  
  /* Register the function with VPI */
  vpi_register_systf(&tf_data);
}
