/* pra.c */

/* Use this file to implement your page replacement algorithm! */

#include "machine.h"
#include <stdio.h>
static int frame_num = 0;
// This function is run by the machine before any addresses are accessed.
void initialize_student_code(){

}

unsigned int select_frame()
{  // Selects a frame to use (implements sme page replacement algorithm)
	frame_num=(frame_num+1)%(get_num_frames());
	return frame_num;
}
