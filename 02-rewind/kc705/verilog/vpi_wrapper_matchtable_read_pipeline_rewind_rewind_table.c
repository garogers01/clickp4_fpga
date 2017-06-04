/*
 * Generated by Bluespec Compiler, version 2014.07.A (build 34078, 2014-07-30)
 * 
 * On Sun Jun  4 10:57:43 CST 2017
 * 
 * To automatically register this VPI wrapper with a Verilog simulator use:
 *     #include "vpi_wrapper_matchtable_read_pipeline_rewind_rewind_table.h"
 *     void (*vlog_startup_routines[])() = { matchtable_read_pipeline_rewind_rewind_table_vpi_register,
 *     				      0u };
 * 
 * For a Verilog simulator which requires a .tab file, use the following entry:
 * $imported_matchtable_read_pipeline_rewind_rewind_table call=matchtable_read_pipeline_rewind_rewind_table_calltf size=1 acc=rw:%TASK
 * 
 * For a Verilog simulator which requires a .sft file, use the following entry:
 * $imported_matchtable_read_pipeline_rewind_rewind_table vpiSysFuncSized 1 unsigned
 */
#include <stdlib.h>
#include <vpi_user.h>
#include "bdpi.h"

/* the type of the wrapped function */
char matchtable_read_pipeline_rewind_rewind_table(unsigned long long );

/* VPI wrapper function */
PLI_INT32 matchtable_read_pipeline_rewind_rewind_table_calltf(PLI_BYTE8 *user_data)
{
  vpiHandle hCall;
  unsigned long long arg_1;
  char vpi_result;
  vpiHandle *handle_array;
  
  /* retrieve handle array */
  hCall = vpi_handle(vpiSysTfCall, 0);
  handle_array = vpi_get_userdata(hCall);
  if (handle_array == NULL)
  {
    vpiHandle hArgList;
    hArgList = vpi_iterate(vpiArgument, hCall);
    handle_array = malloc(sizeof(vpiHandle) * 2u);
    handle_array[0u] = hCall;
    handle_array[1u] = vpi_scan(hArgList);
    vpi_put_userdata(hCall, handle_array);
    vpi_free_object(hArgList);
  }
  
  /* create return value */
  make_vpi_result(handle_array[0u], &vpi_result, DIRECT);
  
  /* copy in argument values */
  get_vpi_arg(handle_array[1u], &arg_1, DIRECT);
  
  /* call the imported C function */
  vpi_result = matchtable_read_pipeline_rewind_rewind_table(arg_1);
  
  /* copy out return value */
  put_vpi_result(handle_array[0u], &vpi_result, DIRECT);
  
  /* free argument storage */
  free_vpi_args();
  vpi_free_object(hCall);
  
  return 0;
}

/* sft: $imported_matchtable_read_pipeline_rewind_rewind_table vpiSysFuncSized 1 unsigned */

/* tab: $imported_matchtable_read_pipeline_rewind_rewind_table call=matchtable_read_pipeline_rewind_rewind_table_calltf size=1 acc=rw:%TASK */

PLI_INT32 matchtable_read_pipeline_rewind_rewind_table_sizetf(PLI_BYTE8 *user_data)
{
  return 1u;
}

/* VPI wrapper registration function */
void matchtable_read_pipeline_rewind_rewind_table_vpi_register()
{
  s_vpi_systf_data tf_data;
  
  /* Fill in registration data */
  tf_data.type = vpiSysFunc;
  tf_data.sysfunctype = vpiSizedFunc;
  tf_data.tfname = "$imported_matchtable_read_pipeline_rewind_rewind_table";
  tf_data.calltf = matchtable_read_pipeline_rewind_rewind_table_calltf;
  tf_data.compiletf = 0u;
  tf_data.sizetf = matchtable_read_pipeline_rewind_rewind_table_sizetf;
  tf_data.user_data = "$imported_matchtable_read_pipeline_rewind_rewind_table";
  
  /* Register the function with VPI */
  vpi_register_systf(&tf_data);
}
