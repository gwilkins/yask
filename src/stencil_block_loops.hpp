/*
 * 4-D loop code.
 * Generated automatically from the following pseudo-code:
 *
 * loop (bv)
 * {
 *   crew loop (bz)
 *   {
 *     loop (by)
 *     {
 *       loop (bx)
 *       {
 * 	calc (cluster);
 *       }
 *     }
 *   }
 * }
 *
 */

 // Number of iterations to get from begin_bv to (but not including) end_bv,
 // stepping by step_bv.
const int num_bv = ((end_bv - begin_bv) + (step_bv - 1)) / step_bv;

 // Loop index var.
int loop_index_bv = 0;
for (; loop_index_bv < num_bv; loop_index_bv++)
  {

    // Zero-based, unit-stride index var for bv.
    int index_bv = loop_index_bv;

    // This value of index_bv covers bv from start_bv to stop_bv-1.
    const int start_bv = begin_bv + (index_bv * step_bv);
    const int stop_bv = min (start_bv + step_bv, end_bv);

    // Number of iterations to get from begin_bz to (but not including)
    // end_bz, stepping by step_bz.
    const int num_bz = ((end_bz - begin_bz) + (step_bz - 1)) / step_bz;

    // Loop index var.
    int loop_index_bz = 0;

    // Distribute iterations among HW threads.
    CREW_FOR_LOOP for (; loop_index_bz < num_bz; loop_index_bz++)
      {

	// Zero-based, unit-stride index var for bz.
	int index_bz = loop_index_bz;

	// This value of index_bz covers bz from start_bz to stop_bz-1.
	const int start_bz = begin_bz + (index_bz * step_bz);
	const int stop_bz = min (start_bz + step_bz, end_bz);

	// Number of iterations to get from begin_by to (but not including)
	// end_by, stepping by step_by.
	const int num_by = ((end_by - begin_by) + (step_by - 1)) / step_by;

	// Loop index var.
	int loop_index_by = 0;
	for (; loop_index_by < num_by; loop_index_by++)
	  {

	    // Zero-based, unit-stride index var for by.
	    int index_by = loop_index_by;

	    // This value of index_by covers by from start_by to stop_by-1.
	    const int start_by = begin_by + (index_by * step_by);
	    const int stop_by = min (start_by + step_by, end_by);

	    // Number of iterations to get from begin_bx to (but not
	    // including) end_bx, stepping by step_bx.
	    const int num_bx =
	      ((end_bx - begin_bx) + (step_bx - 1)) / step_bx;

	    // Loop index var.
	    int loop_index_bx = 0;

	    // Computation loop.
	    for (; loop_index_bx < num_bx; loop_index_bx++)
	      {

		// Zero-based, unit-stride index var for bx.
		int index_bx = loop_index_bx;

		// This value of index_bx covers bx from start_bx to
		// stop_bx-1.
		const int start_bx = begin_bx + (index_bx * step_bx);
		const int stop_bx = min (start_bx + step_bx, end_bx);

		// Computation.
		calc_cluster (context, t0, start_bv, start_bx, start_by,
			      start_bz, stop_bv, stop_bx, stop_by, stop_bz);
	      }
	  }
      }
  }

// End of generated code.
